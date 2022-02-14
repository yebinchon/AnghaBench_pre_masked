
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct driver_data {int mask_sr; int int_cr1; int (* transfer_handler ) (struct driver_data*) ;TYPE_2__* controller; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int cur_msg; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct driver_data*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct driver_data*,int ) ;
 int FUNC_3 (struct driver_data*,int ,int) ;
 int FUNC_4 (struct driver_data*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct driver_data *VAR_10 = VAR_9;
 u32 VAR_11;
 u32 VAR_12 = VAR_10->mask_sr;
 u32 VAR_13;







 if (FUNC_1(&VAR_10->pdev->dev))
  return VAR_1;







 VAR_13 = FUNC_2(VAR_10, VAR_5);
 if (VAR_13 == ~0)
  return VAR_1;

 VAR_11 = FUNC_2(VAR_10, VAR_2);


 if (!(VAR_11 & VAR_3))
  VAR_12 &= ~VAR_6;


 if (!(VAR_11 & VAR_4))
  VAR_12 &= ~VAR_7;

 if (!(VAR_13 & VAR_12))
  return VAR_1;

 FUNC_3(VAR_10, VAR_2, VAR_11 & ~VAR_10->int_cr1);
 FUNC_3(VAR_10, VAR_2, VAR_11);

 if (!VAR_10->controller->cur_msg) {
  FUNC_0(VAR_10);

  return VAR_0;
 }

 return VAR_10->transfer_handler(VAR_10);
}
