
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_device {TYPE_1__* res; } ;
struct dpaa_priv {struct mac_device* mac_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ start; } ;


 struct dpaa_priv* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct dpaa_priv *VAR_3 = FUNC_0(FUNC_2(VAR_0));
 struct mac_device *VAR_4 = VAR_3->mac_dev;

 if (VAR_4)
  return FUNC_1(VAR_2, "%llx",
    (unsigned long long)VAR_4->res->start);
 else
  return FUNC_1(VAR_2, "none");
}
