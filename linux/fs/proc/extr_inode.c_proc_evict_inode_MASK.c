
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct inode {int i_data; } ;
struct ctl_table_header {int dummy; } ;
struct TYPE_2__ {struct ctl_table_header* sysctl; int pid; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ctl_table_header*,int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct proc_dir_entry*) ;
 int FUNC_5 (struct inode*,struct ctl_table_header*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0)
{
 struct proc_dir_entry *VAR_1;
 struct ctl_table_header *VAR_2;

 FUNC_7(&VAR_0->i_data);
 FUNC_3(VAR_0);


 FUNC_6(FUNC_1(VAR_0)->pid);


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_4(VAR_1);

 VAR_2 = FUNC_1(VAR_0)->sysctl;
 if (VAR_2) {
  FUNC_2(FUNC_1(VAR_0)->sysctl, ((void*)0));
  FUNC_5(VAR_0, VAR_2);
 }
}
