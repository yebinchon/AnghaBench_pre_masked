
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
 int FUNC_0 (char*,int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,int,unsigned int*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 unsigned int VAR_6;

 if (FUNC_1(VAR_2->handle, 0x000, &VAR_6))
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_1, "%d\n", !(VAR_6 & 0x01));
}
