
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct c2port_device {int name; int dev; int mutex; int flash_access; int access; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct c2port_device*,char*,int ,size_t) ;
 int FUNC_1 (int ,char*,int ) ;
 struct c2port_device* FUNC_2 (int ) ;
 int FUNC_3 (struct kobject*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct file *VAR_1, struct kobject *VAR_2,
    struct bin_attribute *VAR_3,
    char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct c2port_device *VAR_7 = FUNC_2(FUNC_3(VAR_2));
 int VAR_8;


 if (!VAR_7->access || !VAR_7->flash_access)
  return -VAR_0;

 FUNC_4(&VAR_7->mutex);
 VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_5(&VAR_7->mutex);

 if (VAR_8 < 0)
  FUNC_1(VAR_7->dev, "cannot write %s flash\n", VAR_7->name);

 return VAR_8;
}
