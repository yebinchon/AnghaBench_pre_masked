
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_edid {scalar_t__ start_block; int blocks; int pad; int * edid; int reserved; } ;
struct adv748x_state {int dummy; } ;
struct TYPE_3__ {int blocks; int present; int edid; } ;
struct TYPE_4__ {int numerator; int denominator; } ;
struct adv748x_hdmi {TYPE_1__ edid; TYPE_2__ aspect_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adv748x_hdmi*,int,int ) ;
 struct adv748x_state* FUNC_1 (struct adv748x_hdmi*) ;
 struct adv748x_hdmi* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct adv748x_state*,int ,int) ;
 TYPE_2__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct v4l2_subdev*,char*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_6, struct v4l2_edid *VAR_7)
{
 struct adv748x_hdmi *VAR_8 = FUNC_2(VAR_6);
 struct adv748x_state *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;

 FUNC_4(VAR_7->reserved, 0, sizeof(VAR_7->reserved));

 if (VAR_7->start_block != 0)
  return -VAR_5;

 if (VAR_7->blocks == 0) {
  VAR_8->edid.blocks = 0;
  VAR_8->edid.present = 0;


  VAR_8->aspect_ratio.numerator = 16;
  VAR_8->aspect_ratio.denominator = 9;


  FUNC_5(VAR_9, VAR_2,
          VAR_7->blocks << VAR_3);

  FUNC_5(VAR_9, VAR_0, 0);

  return 0;
 }

 if (VAR_7->blocks > 4) {
  VAR_7->blocks = 4;
  return -VAR_4;
 }

 FUNC_3(VAR_8->edid.edid, VAR_7->edid, 128 * VAR_7->blocks);
 VAR_8->edid.blocks = VAR_7->blocks;
 VAR_8->edid.present = 1;

 VAR_8->aspect_ratio = FUNC_6(VAR_7->edid[0x15],
   VAR_7->edid[0x16]);

 VAR_10 = FUNC_0(VAR_8, 128 * VAR_7->blocks,
   VAR_8->edid.edid);
 if (VAR_10 < 0) {
  FUNC_7(VAR_6, "error %d writing edid pad %d\n", VAR_10, VAR_7->pad);
  return VAR_10;
 }

 FUNC_5(VAR_9, VAR_2,
         VAR_7->blocks << VAR_3);

 FUNC_5(VAR_9, VAR_0,
         VAR_1);

 return 0;
}
