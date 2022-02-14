
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct ddb {int * link; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct ddb*,int *,unsigned int) ;
 struct ddb* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct ddb *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = VAR_2->attr.name[5] - 0x30;
 unsigned int VAR_7;

 if (FUNC_2(VAR_3, "%u\n", &VAR_7) != 1)
  return -VAR_0;
 if (VAR_7 > 3)
  return -VAR_0;
 FUNC_0(VAR_5, &VAR_5->link[VAR_6], VAR_7);
 return VAR_4;
}
