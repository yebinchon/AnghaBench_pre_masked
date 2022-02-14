
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {unsigned int index; int entity; } ;
struct media_entity {int dummy; } ;
struct iss_csi2_ctrl_cfg {int vp_only_enable; int vp_clk_enable; } ;
struct iss_csi2_device {int output; struct iss_csi2_ctrl_cfg ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 struct iss_csi2_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct media_entity *VAR_5,
      const struct media_pad *VAR_6,
      const struct media_pad *VAR_7, u32 VAR_8)
{
 struct v4l2_subdev *VAR_9 = FUNC_1(VAR_5);
 struct iss_csi2_device *VAR_10 = FUNC_2(VAR_9);
 struct iss_csi2_ctrl_cfg *VAR_11 = &VAR_10->ctrl;
 unsigned int VAR_12 = VAR_6->index;


 if (FUNC_0(VAR_7->entity))
  VAR_12 |= 2 << 16;






 switch (VAR_12) {
 case 128:
  if (VAR_8 & VAR_4) {
   if (VAR_10->output & ~VAR_1)
    return -VAR_2;
   VAR_10->output |= VAR_1;
  } else {
   VAR_10->output &= ~VAR_1;
  }
  break;

 case 128 | 2 << 16:
  if (VAR_8 & VAR_4) {
   if (VAR_10->output & ~VAR_0)
    return -VAR_2;
   VAR_10->output |= VAR_0;
  } else {
   VAR_10->output &= ~VAR_0;
  }
  break;

 default:

  return -VAR_3;
 }

 VAR_11->vp_only_enable = VAR_10->output & VAR_1 ? 0 : 1;
 VAR_11->vp_clk_enable = !!(VAR_10->output & VAR_0);

 return 0;
}
