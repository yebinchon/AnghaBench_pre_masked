
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vb2_buf; int sequence; int field; } ;
struct pwc_frame_buf {int filled; TYPE_1__ vb; scalar_t__ data; } ;
struct pwc_device {int type; scalar_t__ drop_frames; unsigned char vmirror; int frame_total_size; int vframe_count; scalar_t__ vsync; struct pwc_frame_buf* fill_buf; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pwc_device*,unsigned char) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct pwc_device *VAR_2)
{
 struct pwc_frame_buf *VAR_3 = VAR_2->fill_buf;





 if (VAR_2->type == 730) {
  unsigned char *VAR_4 = (unsigned char *)VAR_3->data;

  if (VAR_4[1] == 1 && VAR_4[0] & 0x10) {
   FUNC_1("Hyundai CMOS sensor bug. Dropping frame.\n");
   VAR_2->drop_frames += 2;
  }
  if ((VAR_4[0] ^ VAR_2->vmirror) & 0x01) {
   FUNC_2(VAR_2, VAR_4[0] & 0x01);
  }
  if ((VAR_4[0] ^ VAR_2->vmirror) & 0x02) {
   if (VAR_4[0] & 0x02)
    FUNC_1("Image is mirrored.\n");
   else
    FUNC_1("Image is normal.\n");
  }
  VAR_2->vmirror = VAR_4[0] & 0x03;
  if (VAR_3->filled == 4)
   VAR_2->drop_frames++;
 } else if (VAR_2->type == 740 || VAR_2->type == 720) {
  unsigned char *VAR_5 = (unsigned char *)VAR_3->data;
  if ((VAR_5[0] ^ VAR_2->vmirror) & 0x01) {
   FUNC_2(VAR_2, VAR_5[0] & 0x01);
  }
  VAR_2->vmirror = VAR_5[0] & 0x03;
 }


 if (VAR_2->drop_frames > 0) {
  VAR_2->drop_frames--;
 } else {

  if (VAR_3->filled < VAR_2->frame_total_size) {
   FUNC_0("Frame buffer underflow (%d bytes); discarded.\n",
           VAR_3->filled);
  } else {
   VAR_3->vb.field = VAR_0;
   VAR_3->vb.sequence = VAR_2->vframe_count;
   FUNC_3(&VAR_3->vb.vb2_buf, VAR_1);
   VAR_2->fill_buf = ((void*)0);
   VAR_2->vsync = 0;
  }
 }
 VAR_2->vframe_count++;
}
