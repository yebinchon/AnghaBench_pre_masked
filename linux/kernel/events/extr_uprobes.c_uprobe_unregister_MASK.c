
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uprobe_consumer {int dummy; } ;
struct uprobe {int register_rwsem; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct uprobe*,struct uprobe_consumer*) ;
 int FUNC_2 (int *) ;
 struct uprobe* FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct uprobe*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_0, loff_t VAR_1, struct uprobe_consumer *VAR_2)
{
 struct uprobe *VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(!VAR_3))
  return;

 FUNC_2(&VAR_3->register_rwsem);
 FUNC_1(VAR_3, VAR_2);
 FUNC_5(&VAR_3->register_rwsem);
 FUNC_4(VAR_3);
}
