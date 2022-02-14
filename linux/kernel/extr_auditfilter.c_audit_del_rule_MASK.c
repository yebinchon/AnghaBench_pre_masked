
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct audit_tree {int dummy; } ;
struct TYPE_4__ {int listnr; int list; scalar_t__ exe; struct audit_tree* tree; scalar_t__ watch; } ;
struct audit_entry {int rcu; TYPE_1__ rule; int list; } ;





 int VAR_0 ;
 int VAR_1 ;
 struct audit_entry* FUNC_0 (struct audit_entry*,struct list_head**) ;
 int VAR_2 ;
 int FUNC_1 (struct audit_entry*) ;
 int VAR_3 ;
 int FUNC_2 (struct audit_tree*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct audit_entry *VAR_5)
{
 struct audit_entry *VAR_6;
 struct audit_tree *VAR_7 = VAR_5->rule.tree;
 struct list_head *VAR_8;
 int VAR_9 = 0;
 FUNC_9(&VAR_1);
 VAR_6 = FUNC_0(VAR_5, &VAR_8);
 if (!VAR_6) {
  VAR_9 = -VAR_0;
  goto out;
 }

 if (VAR_6->rule.watch)
  FUNC_5(&VAR_6->rule);

 if (VAR_6->rule.tree)
  FUNC_4(&VAR_6->rule);

 if (VAR_6->rule.exe)
  FUNC_3(&VAR_6->rule);
 FUNC_8(&VAR_6->list);
 FUNC_7(&VAR_6->rule.list);
 FUNC_6(&VAR_6->rcu, VAR_2);

out:
 FUNC_10(&VAR_1);

 if (VAR_7)
  FUNC_2(VAR_7);

 return VAR_9;
}
