
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int dummy; } ;
struct fsg_lun {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct rw_semaphore* FUNC_0 (struct device*) ;
 struct fsg_lun* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fsg_lun*,struct rw_semaphore*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct fsg_lun *VAR_3 = FUNC_1(VAR_0);
 struct rw_semaphore *VAR_4 = FUNC_0(VAR_0);

 return FUNC_2(VAR_3, VAR_4, VAR_2);
}
