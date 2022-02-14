
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int mesh_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (char const*,char*,int*) ;
 TYPE_1__* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, const char * VAR_2, size_t VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_3(VAR_0)->ml_priv;
 int VAR_5;

 FUNC_2(VAR_2, "%x", &VAR_5);
 VAR_5 = !!VAR_5;
 if (VAR_5 == !!VAR_4->mesh_dev)
  return VAR_3;

 if (VAR_5)
  FUNC_0(VAR_4);
 else
  FUNC_1(VAR_4);

 return VAR_3;
}
