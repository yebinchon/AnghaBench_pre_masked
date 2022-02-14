
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_edid {int pad; scalar_t__ start_block; int blocks; int * edid; int * reserved; } ;
struct TYPE_4__ {int present; int edid; } ;
struct TYPE_3__ {int present; int edid; } ;
struct adv7842_state {TYPE_2__ hdmi_edid; TYPE_1__ vga_edid; int aspect_ratio; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 struct adv7842_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct v4l2_subdev*,char*,int,int) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_2, struct v4l2_edid *VAR_3)
{
 struct adv7842_state *VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = 0;

 FUNC_4(VAR_3->reserved, 0, sizeof(VAR_3->reserved));

 if (VAR_3->pad > 128)
  return -VAR_1;
 if (VAR_3->start_block != 0)
  return -VAR_1;
 if (VAR_3->blocks > 2) {
  VAR_3->blocks = 2;
  return -VAR_0;
 }


 VAR_4->aspect_ratio = FUNC_6(VAR_3->edid[0x15],
   VAR_3->edid[0x16]);

 switch (VAR_3->pad) {
 case 128:
  FUNC_4(&VAR_4->vga_edid.edid, 0, 256);
  VAR_4->vga_edid.present = VAR_3->blocks ? 0x1 : 0x0;
  FUNC_3(&VAR_4->vga_edid.edid, VAR_3->edid, 128 * VAR_3->blocks);
  VAR_5 = FUNC_2(VAR_2);
  break;
 case 130:
 case 129:
  FUNC_4(&VAR_4->hdmi_edid.edid, 0, 256);
  if (VAR_3->blocks) {
   VAR_4->hdmi_edid.present |= 0x04 << VAR_3->pad;
  } else {
   VAR_4->hdmi_edid.present &= ~(0x04 << VAR_3->pad);
   FUNC_0(VAR_2);
  }
  FUNC_3(&VAR_4->hdmi_edid.edid, VAR_3->edid, 128 * VAR_3->blocks);
  VAR_5 = FUNC_1(VAR_2, VAR_3->pad);
  break;
 default:
  return -VAR_1;
 }
 if (VAR_5 < 0)
  FUNC_7(VAR_2, "error %d writing edid on port %d\n", VAR_5, VAR_3->pad);
 return VAR_5;
}
