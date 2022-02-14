
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct bonding {int dummy; } ;
struct bond_option {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct bond_option* FUNC_1 (int ) ;
 int FUNC_2 (struct bonding*,int ,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,size_t,int ) ;
 struct bonding* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct bonding *VAR_7 = FUNC_5(VAR_3);
 const struct bond_option *VAR_8;
 char *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_4->attr.name);
 if (FUNC_0(!VAR_8))
  return -VAR_0;
 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_10 = FUNC_2(VAR_7, VAR_8->id, VAR_9);
 if (!VAR_10)
  VAR_10 = VAR_6;
 FUNC_3(VAR_9);

 return VAR_10;
}
