
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ds1wm_data {int int_en_reg_none; scalar_t__ reset_recover_delay; TYPE_1__* pdev; int slave_present; int * reset_complete; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct ds1wm_data*,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct ds1wm_data *VAR_6)
{
 unsigned long VAR_7;
 FUNC_0(VAR_5);

 VAR_6->reset_complete = &VAR_5;


 FUNC_3(VAR_6, VAR_3, VAR_2 |
 VAR_6->int_en_reg_none);

 FUNC_3(VAR_6, VAR_0, VAR_1);

 VAR_7 = FUNC_5(&VAR_5, VAR_4);
 VAR_6->reset_complete = ((void*)0);
 if (!VAR_7) {
  FUNC_2(&VAR_6->pdev->dev, "reset failed, timed out\n");
  return 1;
 }

 if (!VAR_6->slave_present) {
  FUNC_1(&VAR_6->pdev->dev, "reset: no devices found\n");
  return 1;
 }

 if (VAR_6->reset_recover_delay)
  FUNC_4(VAR_6->reset_recover_delay);

 return 0;
}
