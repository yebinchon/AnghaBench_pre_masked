
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct pdcspath_entry {int rw_lock; TYPE_1__ devpath; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pdcspath_entry VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_2,
         struct kobj_attribute *VAR_3,
         char *VAR_4, int VAR_5)
{
 char *VAR_6 = VAR_4;
 struct pdcspath_entry *VAR_7;

 if (!VAR_4)
  return -VAR_0;


 VAR_7 = &VAR_1;

 FUNC_0(&VAR_7->rw_lock);
 VAR_6 += FUNC_2(VAR_6, "%s\n", (VAR_7->devpath.flags & VAR_5) ?
     "On" : "Off");
 FUNC_1(&VAR_7->rw_lock);

 return VAR_6 - VAR_4;
}
