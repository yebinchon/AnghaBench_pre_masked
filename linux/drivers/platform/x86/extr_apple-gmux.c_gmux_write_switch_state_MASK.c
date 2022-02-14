
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apple_gmux_data {scalar_t__ switch_state_ddc; scalar_t__ switch_state_display; scalar_t__ switch_state_external; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct apple_gmux_data*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct apple_gmux_data *VAR_4)
{
 if (VAR_4->switch_state_ddc == VAR_3)
  FUNC_0(VAR_4, VAR_0, 1);
 else
  FUNC_0(VAR_4, VAR_0, 2);

 if (VAR_4->switch_state_display == VAR_3)
  FUNC_0(VAR_4, VAR_1, 2);
 else
  FUNC_0(VAR_4, VAR_1, 3);

 if (VAR_4->switch_state_external == VAR_3)
  FUNC_0(VAR_4, VAR_2, 2);
 else
  FUNC_0(VAR_4, VAR_2, 3);
}
