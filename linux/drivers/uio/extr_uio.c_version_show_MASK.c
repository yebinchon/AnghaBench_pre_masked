
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_device {int info_lock; TYPE_1__* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* version; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct uio_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct uio_device *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 FUNC_2(&VAR_4->info_lock);
 if (!VAR_4->info) {
  VAR_5 = -VAR_0;
  FUNC_0(VAR_1, "the device has been unregistered\n");
  goto out;
 }

 VAR_5 = FUNC_4(VAR_3, "%s\n", VAR_4->info->version);

out:
 FUNC_3(&VAR_4->info_lock);
 return VAR_5;
}
