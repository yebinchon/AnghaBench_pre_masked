
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctcm_priv {int dummy; } ;
struct ccwgroup_device {scalar_t__ state; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ctcm_priv*) ;
 struct ctcm_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*) ;
 struct ccwgroup_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct ccwgroup_device *VAR_5 = FUNC_3(VAR_2);
 struct ctcm_priv *VAR_6 = FUNC_1(VAR_2);

 if (!VAR_6 || VAR_5->state != VAR_0)
  return -VAR_1;
 FUNC_0(VAR_6);
 return FUNC_2(VAR_4, "0\n");
}
