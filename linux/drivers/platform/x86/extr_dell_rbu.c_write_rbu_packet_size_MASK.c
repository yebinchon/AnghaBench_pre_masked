
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {unsigned long packetsize; int lock; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_1, struct kobject *VAR_2,
         struct bin_attribute *VAR_3,
         char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 unsigned long VAR_7;
 FUNC_1(&VAR_0.lock);
 FUNC_0();
 FUNC_3(VAR_4, "%lu", &VAR_7);
 if (VAR_7 < 0xffffffff)
  VAR_0.packetsize = VAR_7;

 FUNC_2(&VAR_0.lock);
 return VAR_6;
}
