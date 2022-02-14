
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vbool; int vu32; } ;
struct nsim_dev {int test1; int max_macs; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink*,int ,union devlink_param_value) ;

__attribute__((used)) static void FUNC_1(struct nsim_dev *VAR_2,
      struct devlink *VAR_3)
{
 union devlink_param_value VAR_4;

 VAR_4.vu32 = VAR_2->max_macs;
 FUNC_0(VAR_3,
        VAR_0,
        VAR_4);
 VAR_4.vbool = VAR_2->test1;
 FUNC_0(VAR_3,
        VAR_1,
        VAR_4);
}
