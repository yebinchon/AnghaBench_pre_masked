
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {int detect_tx_5v_ctrl; struct adv76xx_chip_info* info; } ;
struct adv76xx_chip_info {int (* read_cable_det ) (struct v4l2_subdev*) ;} ;


 int FUNC_0 (struct v4l2_subdev*) ;
 struct adv76xx_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct adv76xx_state *VAR_1 = FUNC_1(VAR_0);
 const struct adv76xx_chip_info *VAR_2 = VAR_1->info;
 u16 VAR_3 = VAR_2->read_cable_det(VAR_0);

 return FUNC_2(VAR_1->detect_tx_5v_ctrl, VAR_3);
}
