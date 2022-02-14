
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bonding {int dummy; } ;
struct ad_info {int ports; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bonding*,struct ad_info*) ;
 int FUNC_2 (char*,char*,int) ;
 struct bonding* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 int VAR_4 = 0;
 struct bonding *VAR_5 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_5) == VAR_0) {
  struct ad_info VAR_6;
  VAR_4 = FUNC_2(VAR_3, "%d\n",
    FUNC_1(VAR_5, &VAR_6)
    ? 0 : VAR_6.ports);
 }

 return VAR_4;
}
