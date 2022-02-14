
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ds1wm_driver_data {int clock_rate; } ;
struct ds1wm_data {TYPE_2__* pdev; TYPE_1__* cell; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int (* enable ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 struct ds1wm_driver_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ds1wm_data*) ;
 int FUNC_5 (struct ds1wm_data*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct ds1wm_data *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->pdev->dev;
 struct ds1wm_driver_data *VAR_4 = FUNC_2(VAR_3);

 if (VAR_1->cell->enable)
  VAR_1->cell->enable(VAR_1->pdev);

 VAR_2 = FUNC_3(VAR_4->clock_rate);
 FUNC_0(VAR_3, "found divisor 0x%x for clock %d\n",
  VAR_2, VAR_4->clock_rate);
 if (VAR_2 == 0) {
  FUNC_1(VAR_3, "no suitable divisor for %dHz clock\n",
   VAR_4->clock_rate);
  return;
 }
 FUNC_5(VAR_1, VAR_0, VAR_2);


 FUNC_6(1);

 FUNC_4(VAR_1);
}
