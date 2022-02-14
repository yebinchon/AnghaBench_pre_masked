
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
struct ddb {TYPE_3__* i2c; TYPE_2__* port; } ;
typedef int ssize_t ;
struct TYPE_6__ {int adap; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct ddb* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int *,int,int,char*,int) ;
 scalar_t__ FUNC_2 (int *,int,int,char*,int) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 struct ddb *VAR_4 = FUNC_0(VAR_1);
 char VAR_5[32];
 int VAR_6 = VAR_2->attr.name[3] - 0x30;

 if (VAR_4->port[VAR_6].type >= VAR_0) {
  if (FUNC_1(&VAR_4->i2c[VAR_6].adap, 0x10, 0x10, VAR_5, 16) < 0)
   return FUNC_3(VAR_3, "NO SNR\n");
  VAR_5[16] = 0;
 } else {

  if (FUNC_2(&VAR_4->i2c[VAR_6].adap,
        0x57, 0x100, VAR_5, 32) < 0)
   if (FUNC_2(&VAR_4->i2c[VAR_6].adap,
         0x50, 0x100, VAR_5, 32) < 0)
    return FUNC_3(VAR_3, "NO SNR\n");
  VAR_5[31] = 0;
 }
 return FUNC_3(VAR_3, "%s\n", VAR_5);
}
