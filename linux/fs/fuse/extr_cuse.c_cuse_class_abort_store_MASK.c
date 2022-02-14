
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cuse_conn {int fc; } ;
typedef size_t ssize_t ;


 struct cuse_conn* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct cuse_conn *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(&VAR_4->fc);
 return VAR_3;
}
