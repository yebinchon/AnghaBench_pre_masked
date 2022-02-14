
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int handle; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_1 (int,unsigned int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
  struct device_attribute *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7, VAR_8;
 unsigned long VAR_9;

 if (VAR_6 > 31)
  return -VAR_0;

 if (FUNC_0(VAR_5, 10, &VAR_9))
  return -VAR_0;
 VAR_8 = 0;

 if (VAR_9 > 0) {
  if (VAR_9 <= 50)
   VAR_8 = 0x20;

  else if (VAR_9 <= 80)
   VAR_8 = 0x10;

  else if (VAR_9 <= 100)
   VAR_8 = 0x30;

  else
   return -VAR_0;






  if (VAR_2->handle != 0x013f)
   VAR_8 = VAR_8 | (VAR_8 << 2);

  VAR_8 = (VAR_8 | 0x1) << 0x10;
 }

 if (FUNC_1(VAR_2->handle, VAR_8 | 0x0100, &VAR_7))
  return -VAR_1;

 return VAR_6;
}
