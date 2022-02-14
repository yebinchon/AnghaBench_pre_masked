
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_driver_desc {int num_page_tables; int device_status_cb; } ;
struct gasket_dev {int dev; int * page_table; TYPE_1__* internal_desc; } ;
struct TYPE_2__ {struct gasket_driver_desc* driver_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct gasket_dev*,int ) ;
 int FUNC_2 (struct gasket_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gasket_dev *VAR_1)
{
 int VAR_2;
 int VAR_3;
 const struct gasket_driver_desc *VAR_4 =
  VAR_1->internal_desc->driver_desc;

 VAR_2 = FUNC_1(VAR_1,
        VAR_4->device_status_cb);
 if (VAR_2 != VAR_0) {
  FUNC_0(VAR_1->dev, "Hardware reported status %d.\n",
   VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != VAR_0) {
  FUNC_0(VAR_1->dev,
   "Interrupt system reported status %d.\n", VAR_2);
  return VAR_2;
 }

 for (VAR_3 = 0; VAR_3 < VAR_4->num_page_tables; ++VAR_3) {
  VAR_2 = FUNC_3(VAR_1->page_table[VAR_3]);
  if (VAR_2 != VAR_0) {
   FUNC_0(VAR_1->dev,
    "Page table %d reported status %d.\n",
    VAR_3, VAR_2);
   return VAR_2;
  }
 }

 return VAR_0;
}
