
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bonding {int dummy; } ;
struct ad_info {int actor_key; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bonding*,struct ad_info*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 struct bonding* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 int VAR_5 = 0;
 struct bonding *VAR_6 = FUNC_4(VAR_2);

 if (FUNC_0(VAR_6) == VAR_0 && FUNC_2(VAR_1)) {
  struct ad_info VAR_7;
  VAR_5 = FUNC_3(VAR_4, "%d\n",
    FUNC_1(VAR_6, &VAR_7)
    ? 0 : VAR_7.actor_key);
 }

 return VAR_5;
}
