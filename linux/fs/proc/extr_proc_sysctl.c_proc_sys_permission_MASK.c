
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int dummy; } ;
struct TYPE_2__ {struct ctl_table* sysctl_entry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ctl_table_header*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ctl_table_header* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ctl_table_header*) ;
 int FUNC_6 (struct ctl_table_header*,struct ctl_table*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, int VAR_5)
{




 struct ctl_table_header *VAR_6;
 struct ctl_table *VAR_7;
 int VAR_8;


 if ((VAR_5 & VAR_1) && FUNC_3(VAR_4->i_mode))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_1(VAR_4)->sysctl_entry;
 if (!VAR_7)
  VAR_8 = VAR_5 & VAR_3 ? -VAR_0 : 0;
 else
  VAR_8 = FUNC_6(VAR_6, VAR_7, VAR_5 & ~VAR_2);

 FUNC_5(VAR_6);
 return VAR_8;
}
