
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int private_data; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {scalar_t__ poll; } ;
struct TYPE_2__ {struct ctl_table* sysctl_entry; } ;


 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ctl_table_header*) ;
 struct ctl_table_header* FUNC_3 (struct inode*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ctl_table_header*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct ctl_table_header *VAR_2 = FUNC_3(VAR_0);
 struct ctl_table *VAR_3 = FUNC_1(VAR_0)->sysctl_entry;


 if (FUNC_0(VAR_2))
  return FUNC_2(VAR_2);

 if (VAR_3->poll)
  VAR_1->private_data = FUNC_4(VAR_3->poll);

 FUNC_5(VAR_2);

 return 0;
}
