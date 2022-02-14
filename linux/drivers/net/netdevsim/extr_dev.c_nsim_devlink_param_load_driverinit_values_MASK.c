
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vbool; int vu32; } ;
struct nsim_dev {int test1; int max_macs; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink*,int ,union devlink_param_value*) ;
 struct nsim_dev* FUNC_1 (struct devlink*) ;

__attribute__((used)) static void FUNC_2(struct devlink *VAR_2)
{
 struct nsim_dev *VAR_3 = FUNC_1(VAR_2);
 union devlink_param_value VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2,
       VAR_0,
       &VAR_4);
 if (!VAR_5)
  VAR_3->max_macs = VAR_4.vu32;
 VAR_5 = FUNC_0(VAR_2,
       VAR_1,
       &VAR_4);
 if (!VAR_5)
  VAR_3->test1 = VAR_4.vbool;
}
