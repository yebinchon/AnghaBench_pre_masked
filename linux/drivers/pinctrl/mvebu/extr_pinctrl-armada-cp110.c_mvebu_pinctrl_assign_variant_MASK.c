
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mvebu_mpp_mode {struct mvebu_mpp_ctrl_setting* settings; } ;
struct mvebu_mpp_ctrl_setting {int variant; scalar_t__ name; } ;



__attribute__((used)) static void FUNC_0(struct mvebu_mpp_mode *VAR_0,
      u8 VAR_1)
{
 struct mvebu_mpp_ctrl_setting *VAR_2;

 for (VAR_2 = VAR_0->settings ; VAR_2->name ; VAR_2++)
  VAR_2->variant = VAR_1;
}
