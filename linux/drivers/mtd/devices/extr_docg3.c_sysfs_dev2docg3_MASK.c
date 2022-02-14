
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct docg3* priv; } ;
struct docg3 {int dummy; } ;
struct TYPE_2__ {int* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mtd_info** FUNC_0 (struct device*) ;

__attribute__((used)) static struct docg3 *FUNC_1(struct device *VAR_1,
         struct device_attribute *VAR_2)
{
 int VAR_3;
 struct mtd_info **VAR_4 = FUNC_0(VAR_1);

 VAR_3 = VAR_2->attr.name[1] - '0';
 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return ((void*)0);
 else
  return VAR_4[VAR_3]->priv;
}
