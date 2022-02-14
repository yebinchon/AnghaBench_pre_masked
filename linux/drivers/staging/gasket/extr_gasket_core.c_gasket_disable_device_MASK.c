
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gasket_driver_desc {int num_page_tables; } ;
struct TYPE_4__ {int cdev; scalar_t__ cdev_added; } ;
struct gasket_dev {scalar_t__* page_table; int status; TYPE_2__ dev_info; TYPE_1__* internal_desc; } ;
struct TYPE_3__ {struct gasket_driver_desc* driver_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gasket_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct gasket_dev *VAR_1)
{
 const struct gasket_driver_desc *VAR_2 =
  VAR_1->internal_desc->driver_desc;
 int VAR_3;


 if (VAR_1->dev_info.cdev_added)
  FUNC_0(&VAR_1->dev_info.cdev);

 VAR_1->status = VAR_0;

 FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_page_tables; ++VAR_3) {
  if (VAR_1->page_table[VAR_3]) {
   FUNC_3(VAR_1->page_table[VAR_3]);
   FUNC_2(VAR_1->page_table[VAR_3]);
  }
 }
}
