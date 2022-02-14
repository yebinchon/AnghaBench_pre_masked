
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vb2_buffer {int dummy; } ;
struct TYPE_3__ {int width; int height; } ;
struct camif_frame {TYPE_1__ rect; } ;
struct camif_vp {TYPE_2__* out_fmt; struct camif_frame out_frame; } ;
struct camif_addr {int cb; int cr; int y; } ;
struct TYPE_4__ {int colplanes; int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_3(struct camif_vp *VAR_3, struct vb2_buffer *VAR_4,
         struct camif_addr *VAR_5)
{
 struct camif_frame *VAR_6 = &VAR_3->out_frame;
 u32 VAR_7;

 if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = VAR_6->rect.width * VAR_6->rect.height;

 FUNC_0("colplanes: %d, pix_size: %u\n",
   VAR_3->out_fmt->colplanes, VAR_7);

 VAR_5->y = FUNC_2(VAR_4, 0);

 switch (VAR_3->out_fmt->colplanes) {
 case 1:
  VAR_5->cb = 0;
  VAR_5->cr = 0;
  break;
 case 2:

  VAR_5->cb = (u32)(VAR_5->y + VAR_7);
  VAR_5->cr = 0;
  break;
 case 3:
  VAR_5->cb = (u32)(VAR_5->y + VAR_7);

  if (VAR_3->out_fmt->color == VAR_1)
   VAR_5->cr = (u32)(VAR_5->cb + (VAR_7 >> 1));
  else
   VAR_5->cr = (u32)(VAR_5->cb + (VAR_7 >> 2));

  if (VAR_3->out_fmt->color == VAR_2)
   FUNC_1(VAR_5->cb, VAR_5->cr);
  break;
 default:
  return -VAR_0;
 }

 FUNC_0("DMA address: y: %pad  cb: %pad cr: %pad\n",
   VAR_5->y, &VAR_5->cb, &VAR_5->cr);

 return 0;
}
