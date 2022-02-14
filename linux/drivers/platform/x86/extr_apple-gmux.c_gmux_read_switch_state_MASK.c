
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apple_gmux_data {void* switch_state_external; void* switch_state_display; void* switch_state_ddc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct apple_gmux_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct apple_gmux_data *VAR_5)
{
 if (FUNC_0(VAR_5, VAR_0) == 1)
  VAR_5->switch_state_ddc = VAR_4;
 else
  VAR_5->switch_state_ddc = VAR_3;

 if (FUNC_0(VAR_5, VAR_1) == 2)
  VAR_5->switch_state_display = VAR_4;
 else
  VAR_5->switch_state_display = VAR_3;

 if (FUNC_0(VAR_5, VAR_2) == 2)
  VAR_5->switch_state_external = VAR_4;
 else
  VAR_5->switch_state_external = VAR_3;
}
