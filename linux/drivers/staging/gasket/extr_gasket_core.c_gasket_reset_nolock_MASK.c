
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_driver_desc {int (* device_reset_cb ) (struct gasket_dev*) ;int num_page_tables; } ;
struct gasket_dev {scalar_t__ status; int dev; int * page_table; TYPE_1__* internal_desc; } ;
struct TYPE_2__ {struct gasket_driver_desc* driver_desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct gasket_dev*) ;
 int FUNC_2 (struct gasket_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gasket_dev*) ;

int FUNC_5(struct gasket_dev *VAR_2)
{
 int VAR_3;
 int VAR_4;
 const struct gasket_driver_desc *VAR_5;

 VAR_5 = VAR_2->internal_desc->driver_desc;
 if (!VAR_5->device_reset_cb)
  return 0;

 VAR_3 = VAR_5->device_reset_cb(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "Device reset cb returned %d.\n",
   VAR_3);
  return VAR_3;
 }


 for (VAR_4 = 0; VAR_4 < VAR_5->num_page_tables; ++VAR_4)
  FUNC_3(VAR_2->page_table[VAR_4]);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "Unable to reinit interrupts: %d.\n",
   VAR_3);
  return VAR_3;
 }


 VAR_2->status = FUNC_1(VAR_2);
 if (VAR_2->status == VAR_1) {
  FUNC_0(VAR_2->dev, "Device reported as dead.\n");
  return -VAR_0;
 }

 return 0;
}
