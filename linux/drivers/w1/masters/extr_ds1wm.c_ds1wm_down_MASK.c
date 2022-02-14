
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ds1wm_data {int pdev; TYPE_1__* cell; int int_en_reg_none; } ;
struct TYPE_2__ {int (* disable ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ds1wm_data*) ;
 int FUNC_1 (struct ds1wm_data*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ds1wm_data *VAR_1)
{
 FUNC_0(VAR_1);


 FUNC_1(VAR_1, VAR_0,
  VAR_1->int_en_reg_none);

 if (VAR_1->cell->disable)
  VAR_1->cell->disable(VAR_1->pdev);
}
