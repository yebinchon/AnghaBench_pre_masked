
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msg_group_t {int end; int start; } ;
struct kobject {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;
struct TYPE_4__ {int spinlock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct msg_group_t* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_2,
       struct kobj_attribute *VAR_3, char *VAR_4)
{
 ssize_t VAR_5 = 0;
 struct msg_group_t *VAR_6 = FUNC_4(VAR_3->attr.name);
 unsigned long VAR_7;

 if (FUNC_0(!VAR_6))
  return -VAR_0;

 FUNC_2(&VAR_1.spinlock, VAR_7);
 VAR_5 = FUNC_1(VAR_4, VAR_6->start, VAR_6->end);
 FUNC_3(&VAR_1.spinlock, VAR_7);
 return VAR_5;
}
