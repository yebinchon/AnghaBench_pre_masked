
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hbm_version {int major_version; int minor_version; } ;
struct mei_device {int device_lock; struct hbm_version version; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct mei_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct mei_device *VAR_3 = FUNC_0(VAR_0);
 struct hbm_version VAR_4;

 FUNC_1(&VAR_3->device_lock);
 VAR_4 = VAR_3->version;
 FUNC_2(&VAR_3->device_lock);

 return FUNC_3(VAR_2, "%u.%u\n", VAR_4.major_version, VAR_4.minor_version);
}
