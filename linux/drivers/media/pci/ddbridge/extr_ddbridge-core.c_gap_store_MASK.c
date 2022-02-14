
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct ddb {TYPE_2__* port; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {unsigned int gap; } ;


 size_t VAR_0 ;
 struct ddb* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct ddb *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_2->attr.name[3] - 0x30;
 unsigned int VAR_7;

 if (FUNC_1(VAR_3, "%u\n", &VAR_7) != 1)
  return -VAR_0;
 if (VAR_7 > 128)
  return -VAR_0;
 if (VAR_7 == 128)
  VAR_7 = 0xffffffff;
 VAR_5->port[VAR_6].gap = VAR_7;
 return VAR_4;
}
