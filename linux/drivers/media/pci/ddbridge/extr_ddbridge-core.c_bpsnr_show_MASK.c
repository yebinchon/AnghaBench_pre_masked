
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ddb {TYPE_1__* i2c; int i2c_num; } ;
typedef int ssize_t ;
struct TYPE_2__ {int adap; } ;


 struct ddb* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int *,int,int,unsigned char*,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct ddb *VAR_3 = FUNC_0(VAR_0);
 unsigned char VAR_4[32];

 if (!VAR_3->i2c_num)
  return 0;

 if (FUNC_1(&VAR_3->i2c[0].adap,
       0x50, 0x0000, VAR_4, 32) < 0 ||
     VAR_4[0] == 0xff)
  return FUNC_2(VAR_2, "NO SNR\n");
 VAR_4[31] = 0;
 return FUNC_2(VAR_2, "%s\n", VAR_4);
}
