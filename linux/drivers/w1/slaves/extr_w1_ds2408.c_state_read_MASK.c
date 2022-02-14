
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct bin_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *,char*,int ,struct kobject*,unsigned int,size_t,char*) ;
 TYPE_2__* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_2, struct kobject *VAR_3,
     struct bin_attribute *VAR_4, char *VAR_5, loff_t VAR_6,
     size_t VAR_7)
{
 FUNC_1(&FUNC_2(VAR_3)->dev,
  "Reading %s kobj: %p, off: %0#10x, count: %zu, buff addr: %p",
  VAR_4->attr.name, VAR_3, (unsigned int)VAR_6, VAR_7, VAR_5);
 if (VAR_7 != 1 || VAR_6 != 0)
  return -VAR_0;
 return FUNC_0(FUNC_2(VAR_3), VAR_1, VAR_5);
}
