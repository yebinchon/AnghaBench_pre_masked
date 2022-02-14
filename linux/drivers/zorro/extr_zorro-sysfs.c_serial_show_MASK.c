
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int er_SerialNumber; } ;
struct zorro_dev {TYPE_1__ rom; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct zorro_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct zorro_dev *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 return FUNC_1(VAR_2, "0x%08x\n", FUNC_0(VAR_3->rom.er_SerialNumber));
}
