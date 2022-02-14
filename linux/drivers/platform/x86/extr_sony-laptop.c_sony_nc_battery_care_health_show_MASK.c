
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 ssize_t VAR_6 = 0;
 unsigned int VAR_7;

 if (FUNC_1(VAR_2->handle, 0x0200, &VAR_7))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_1, "%d\n", VAR_7 & 0xff);

 return VAR_6;
}
