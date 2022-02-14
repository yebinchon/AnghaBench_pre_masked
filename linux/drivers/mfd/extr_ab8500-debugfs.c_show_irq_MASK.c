
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int* VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long*) ;
 unsigned int VAR_3 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
   struct device_attribute *VAR_5, char *VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5->attr.name, 0, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_7 - VAR_2;
 if (VAR_8 >= VAR_3)
  return -VAR_0;

 return FUNC_1(VAR_6, "%u\n", VAR_1[VAR_8]);
}
