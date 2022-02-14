
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
typedef int ssize_t ;
struct TYPE_4__ {int gap; } ;


 struct ddb* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct ddb *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_1->attr.name[3] - 0x30;

 return FUNC_1(VAR_2, "%d\n", VAR_3->port[VAR_4].gap);
}
