
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {int int_cr1; TYPE_1__* pdev; int clear_sr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct driver_data*,int ) ;
 int FUNC_3 (struct driver_data*,int ,int) ;
 int FUNC_4 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct driver_data *VAR_4)
{
 FUNC_3(VAR_4, VAR_0,
    FUNC_2(VAR_4, VAR_0) & ~VAR_1);
 FUNC_3(VAR_4, VAR_2,
    FUNC_2(VAR_4, VAR_2) & ~VAR_4->int_cr1);
 if (!FUNC_1(VAR_4))
  FUNC_3(VAR_4, VAR_3, 0);
 FUNC_4(VAR_4, VAR_4->clear_sr);

 FUNC_0(&VAR_4->pdev->dev,
  "bad message state in interrupt handler\n");
}
