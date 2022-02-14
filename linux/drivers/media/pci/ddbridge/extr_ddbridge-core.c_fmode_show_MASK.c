
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct ddb {TYPE_3__* link; } ;
typedef int ssize_t ;
struct TYPE_5__ {int fmode; } ;
struct TYPE_6__ {TYPE_2__ lnb; } ;


 struct ddb* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = VAR_1->attr.name[5] - 0x30;
 struct ddb *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%u\n", VAR_4->link[VAR_3].lnb.fmode);
}
