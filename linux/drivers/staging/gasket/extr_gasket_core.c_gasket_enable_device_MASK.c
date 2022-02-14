
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_driver_desc {int num_page_tables; size_t page_table_bar_index; int module; int hardware_revision_cb; int * page_table_configs; } ;
struct gasket_dev {int hardware_revision; scalar_t__ status; int dev_info; int dev; int * page_table; int pci_dev; int * bar_data; TYPE_1__* internal_desc; } ;
struct TYPE_2__ {struct gasket_driver_desc* driver_desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gasket_dev*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct gasket_dev*) ;
 int FUNC_5 (struct gasket_dev*) ;
 int FUNC_6 (struct gasket_dev*) ;
 int FUNC_7 (int *,int *,int *,int ,int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct gasket_dev *VAR_2)
{
 int VAR_3;
 int VAR_4;
 const struct gasket_driver_desc *VAR_5 =
  VAR_2->internal_desc->driver_desc;

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2->dev,
   "Critical failure to allocate interrupts: %d\n", VAR_4);
  FUNC_5(VAR_2);
  return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < VAR_5->num_page_tables; VAR_3++) {
  FUNC_1(VAR_2->dev, "Initializing page table %d.\n",
   VAR_3);
  VAR_4 = FUNC_7(&VAR_2->page_table[VAR_3],
          &VAR_2->bar_data[VAR_5->page_table_bar_index],
          &VAR_5->page_table_configs[VAR_3],
          VAR_2->dev,
          VAR_2->pci_dev);
  if (VAR_4) {
   FUNC_2(VAR_2->dev,
    "Couldn't init page table %d: %d\n",
    VAR_3, VAR_4);
   return VAR_4;
  }




  FUNC_8(VAR_2->page_table[VAR_3]);
 }





 VAR_4 = FUNC_0(VAR_2,
     VAR_5->hardware_revision_cb);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2->dev,
   "Error getting hardware revision: %d\n", VAR_4);
  return VAR_4;
 }
 VAR_2->hardware_revision = VAR_4;


 VAR_2->status = FUNC_4(VAR_2);
 if (VAR_2->status == VAR_0)
  FUNC_2(VAR_2->dev, "Device reported as unhealthy.\n");

 VAR_4 = FUNC_3(&VAR_2->dev_info, &VAR_1,
         VAR_5->module);
 if (VAR_4)
  return VAR_4;

 return 0;
}
