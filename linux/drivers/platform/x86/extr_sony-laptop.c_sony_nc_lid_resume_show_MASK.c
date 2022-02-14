
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {unsigned int status; TYPE_1__* attrs; } ;
struct TYPE_3__ {int attr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_5,
     struct device_attribute *VAR_6,
     char *VAR_7)
{
 unsigned int VAR_8 = VAR_2;

 while (VAR_8 < VAR_1) {
  if (&VAR_4->attrs[VAR_8].attr == &VAR_6->attr)
   return FUNC_0(VAR_7, VAR_3, "%d\n",
     (VAR_4->status >> VAR_8) & 0x01);
  VAR_8++;
 }
 return -VAR_0;
}
