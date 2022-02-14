
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 struct ccw_device* FUNC_1 (struct device*) ;
 struct zfcp_adapter* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (struct zfcp_adapter*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
            struct device_attribute *VAR_3,
            const char *VAR_4, size_t VAR_5)
{
 struct ccw_device *VAR_6 = FUNC_1(VAR_2);
 struct zfcp_adapter *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (!VAR_7)
  return -VAR_1;

 if (FUNC_0(VAR_4, 0, &VAR_8) || VAR_8 != 0) {
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_7, "syafai2");
out:
 FUNC_3(VAR_7);
 return VAR_9 ? VAR_9 : (ssize_t) VAR_5;
}
