
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uprobe_consumer {struct uprobe_consumer* next; } ;
struct uprobe {int register_rwsem; struct uprobe_consumer* consumers; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct uprobe* FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct uprobe*) ;
 int FUNC_4 (struct uprobe*,struct uprobe_consumer*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct inode *VAR_1, loff_t VAR_2,
   struct uprobe_consumer *VAR_3, bool VAR_4)
{
 struct uprobe *VAR_5;
 struct uprobe_consumer *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(!VAR_5))
  return VAR_7;

 FUNC_1(&VAR_5->register_rwsem);
 for (VAR_6 = VAR_5->consumers; VAR_6 && VAR_6 != VAR_3 ; VAR_6 = VAR_6->next)
  ;
 if (VAR_6)
  VAR_7 = FUNC_4(VAR_5, VAR_4 ? VAR_3 : ((void*)0));
 FUNC_5(&VAR_5->register_rwsem);
 FUNC_3(VAR_5);

 return VAR_7;
}
