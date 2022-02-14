
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_internal_desc {int class; struct gasket_dev** devs; struct gasket_driver_desc* driver_desc; } ;
struct gasket_driver_desc {char* name; scalar_t__ minor; int major; int num_page_tables; } ;
struct gasket_cdev_info {struct gasket_dev* gasket_dev_ptr; int name; int devt; int device; } ;
struct gasket_dev {int dev_idx; struct gasket_cdev_info dev_info; int num_page_tables; int dev; int kobj_name; struct gasket_internal_desc* internal_desc; int mutex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct device*,int ,struct gasket_dev*,int ) ;
 int FUNC_3 (struct gasket_internal_desc*,char const*) ;
 int FUNC_4 (struct device*) ;
 struct gasket_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (int ,int ,char*,char const*,...) ;

__attribute__((used)) static int FUNC_10(struct gasket_internal_desc *VAR_3,
       struct device *VAR_4, struct gasket_dev **VAR_5)
{
 int VAR_6;
 const struct gasket_driver_desc *VAR_7 =
  VAR_3->driver_desc;
 struct gasket_dev *VAR_8;
 struct gasket_cdev_info *VAR_9;
 const char *VAR_10 = FUNC_1(VAR_4);

 FUNC_7("Allocating a Gasket device, parent %s.\n", VAR_10);

 *VAR_5 = ((void*)0);

 VAR_6 = FUNC_3(VAR_3, VAR_10);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 = *VAR_5 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_8("no memory for device, parent %s\n", VAR_10);
  return -VAR_0;
 }
 VAR_3->devs[VAR_6] = VAR_8;

 FUNC_6(&VAR_8->mutex);

 VAR_8->internal_desc = VAR_3;
 VAR_8->dev_idx = VAR_6;
 FUNC_9(VAR_8->kobj_name, VAR_1, "%s", VAR_10);
 VAR_8->dev = FUNC_4(VAR_4);

 VAR_8->num_page_tables = VAR_7->num_page_tables;




 VAR_9 = &VAR_8->dev_info;
 FUNC_9(VAR_9->name, VAR_1, "%s_%u", VAR_7->name,
   VAR_8->dev_idx);
 VAR_9->devt =
  FUNC_0(VAR_7->major, VAR_7->minor +
        VAR_8->dev_idx);
 VAR_9->device =
  FUNC_2(VAR_3->class, VAR_4, VAR_9->devt,
         VAR_8, VAR_9->name);


 VAR_9->gasket_dev_ptr = VAR_8;


 return 0;
}
