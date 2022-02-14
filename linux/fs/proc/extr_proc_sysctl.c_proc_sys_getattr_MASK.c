
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int mode; } ;
struct inode {int dummy; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int mode; } ;
struct TYPE_2__ {struct ctl_table* sysctl_entry; } ;


 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ctl_table_header*) ;
 int VAR_0 ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct kstat*) ;
 struct ctl_table_header* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct ctl_table_header*) ;

__attribute__((used)) static int FUNC_7(const struct path *VAR_1, struct kstat *VAR_2,
       u32 VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = FUNC_3(VAR_1->dentry);
 struct ctl_table_header *VAR_6 = FUNC_5(VAR_5);
 struct ctl_table *VAR_7 = FUNC_1(VAR_5)->sysctl_entry;

 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);

 FUNC_4(VAR_5, VAR_2);
 if (VAR_7)
  VAR_2->mode = (VAR_2->mode & VAR_0) | VAR_7->mode;

 FUNC_6(VAR_6);
 return 0;
}
