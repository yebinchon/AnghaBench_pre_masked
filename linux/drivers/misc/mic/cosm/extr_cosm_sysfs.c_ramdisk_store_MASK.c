
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cosm_device {char* ramdisk; int cosm_mutex; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct cosm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct cosm_device *VAR_7 = FUNC_0(VAR_3);

 if (!VAR_7)
  return -VAR_0;

 FUNC_3(&VAR_7->cosm_mutex);
 FUNC_1(VAR_7->ramdisk);

 VAR_7->ramdisk = FUNC_2(VAR_6 + 1, VAR_2);
 if (!VAR_7->ramdisk) {
  VAR_6 = -VAR_1;
  goto unlock;
 }

 FUNC_5(VAR_7->ramdisk, VAR_5, VAR_6);

 if (VAR_7->ramdisk[VAR_6 - 1] == '\n')
  VAR_7->ramdisk[VAR_6 - 1] = '\0';
 else
  VAR_7->ramdisk[VAR_6] = '\0';
unlock:
 FUNC_4(&VAR_7->cosm_mutex);
 return VAR_6;
}
