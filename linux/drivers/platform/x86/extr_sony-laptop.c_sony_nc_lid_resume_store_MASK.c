
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int attr; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int status; int handle; TYPE_1__* attrs; } ;
struct TYPE_3__ {int attr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_1 (int ,unsigned long,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_5,
     struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 unsigned int VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11 = VAR_3;
 if (VAR_8 > 31)
  return -VAR_0;

 if (FUNC_0(VAR_7, 10, &VAR_10) || VAR_10 > 1)
  return -VAR_0;







 while (VAR_11 < VAR_2) {
  if (&VAR_4->attrs[VAR_11].attr == &VAR_6->attr)
   break;
  VAR_11++;
 }
 if (VAR_11 == VAR_2)
  return -VAR_0;

 if (VAR_10)
  VAR_10 = VAR_4->status | (1 << VAR_11);
 else
  VAR_10 = VAR_4->status & ~(1 << VAR_11);

 if (FUNC_1(VAR_4->handle, VAR_10 << 0x10 | 0x0100,
    &VAR_9))
  return -VAR_1;

 VAR_4->status = VAR_10;

 return VAR_8;
}
