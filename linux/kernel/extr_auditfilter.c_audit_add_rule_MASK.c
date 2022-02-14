
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct audit_watch {int dummy; } ;
struct audit_tree {int dummy; } ;
struct TYPE_3__ {int listnr; unsigned long long prio; int flags; int list; struct audit_tree* tree; struct audit_watch* watch; } ;
struct audit_entry {int list; TYPE_1__ rule; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct list_head**) ;
 int VAR_3 ;
 struct audit_entry* FUNC_2 (struct audit_entry*,struct list_head**) ;
 int FUNC_3 (struct audit_entry*) ;
 int VAR_4 ;
 int FUNC_4 (struct audit_tree*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct list_head*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,struct list_head*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;

__attribute__((used)) static inline int FUNC_11(struct audit_entry *VAR_9)
{
 struct audit_entry *VAR_10;
 struct audit_watch *VAR_11 = VAR_9->rule.watch;
 struct audit_tree *VAR_12 = VAR_9->rule.tree;
 struct list_head *VAR_13;
 int VAR_14 = 0;
 FUNC_9(&VAR_3);
 VAR_10 = FUNC_2(VAR_9, &VAR_13);
 if (VAR_10) {
  FUNC_10(&VAR_3);
  VAR_14 = -VAR_2;

  if (VAR_12)
   FUNC_4(VAR_12);
  return VAR_14;
 }

 if (VAR_11) {

  VAR_14 = FUNC_1(&VAR_9->rule, &VAR_13);
  if (VAR_14) {
   FUNC_10(&VAR_3);




   if (VAR_12)
    FUNC_4(VAR_12);
   return VAR_14;
  }
 }
 if (VAR_12) {
  VAR_14 = FUNC_0(&VAR_9->rule);
  if (VAR_14) {
   FUNC_10(&VAR_3);
   return VAR_14;
  }
 }

 VAR_9->rule.prio = ~0ULL;
 if (VAR_9->rule.listnr == VAR_0) {
  if (VAR_9->rule.flags & VAR_1)
   VAR_9->rule.prio = ++VAR_7;
  else
   VAR_9->rule.prio = --VAR_8;
 }

 if (VAR_9->rule.flags & VAR_1) {
  FUNC_5(&VAR_9->rule.list,
    &VAR_5[VAR_9->rule.listnr]);
  FUNC_6(&VAR_9->list, VAR_13);
  VAR_9->rule.flags &= ~VAR_1;
 } else {
  FUNC_7(&VAR_9->rule.list,
         &VAR_5[VAR_9->rule.listnr]);
  FUNC_8(&VAR_9->list, VAR_13);
 }







 FUNC_10(&VAR_3);

 return VAR_14;
}
