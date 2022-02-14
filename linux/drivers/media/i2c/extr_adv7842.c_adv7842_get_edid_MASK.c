
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_edid {int pad; int start_block; int blocks; int edid; int reserved; } ;
struct TYPE_4__ {int * edid; int present; } ;
struct TYPE_3__ {int present; int * edid; } ;
struct adv7842_state {TYPE_2__ vga_edid; TYPE_1__ hdmi_edid; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct adv7842_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, struct v4l2_edid *VAR_3)
{
 struct adv7842_state *VAR_4 = FUNC_2(VAR_2);
 u8 *VAR_5 = ((void*)0);

 FUNC_1(VAR_3->reserved, 0, sizeof(VAR_3->reserved));

 switch (VAR_3->pad) {
 case 130:
 case 129:
  if (VAR_4->hdmi_edid.present & (0x04 << VAR_3->pad))
   VAR_5 = VAR_4->hdmi_edid.edid;
  break;
 case 128:
  if (VAR_4->vga_edid.present)
   VAR_5 = VAR_4->vga_edid.edid;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_3->start_block == 0 && VAR_3->blocks == 0) {
  VAR_3->blocks = VAR_5 ? 2 : 0;
  return 0;
 }

 if (!VAR_5)
  return -VAR_1;

 if (VAR_3->start_block >= 2)
  return -VAR_0;

 if (VAR_3->start_block + VAR_3->blocks > 2)
  VAR_3->blocks = 2 - VAR_3->start_block;

 FUNC_0(VAR_3->edid, VAR_5 + VAR_3->start_block * 128, VAR_3->blocks * 128);

 return 0;
}
