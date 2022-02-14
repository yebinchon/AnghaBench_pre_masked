
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct select_data {int dispose; struct dentry* victim; int found; struct dentry* start; } ;
struct dentry {struct dentry* d_parent; int d_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct dentry*,struct select_data*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct dentry *VAR_2)
{
 for (;;) {
  struct select_data VAR_3 = {.start = VAR_2};

  FUNC_0(&VAR_3.dispose);
  FUNC_4(VAR_2, &VAR_3, VAR_0);

  if (!FUNC_5(&VAR_3.dispose)) {
   FUNC_7(&VAR_3.dispose);
   continue;
  }

  FUNC_3();
  if (!VAR_3.found)
   break;
  VAR_3.victim = ((void*)0);
  FUNC_4(VAR_2, &VAR_3, VAR_1);
  if (VAR_3.victim) {
   struct dentry *VAR_4;
   FUNC_9(&VAR_3.victim->d_lock);
   if (!FUNC_8(VAR_3.victim)) {
    FUNC_10(&VAR_3.victim->d_lock);
    FUNC_6();
   } else {
    FUNC_6();
    VAR_4 = VAR_3.victim->d_parent;
    if (VAR_4 != VAR_3.victim)
     FUNC_2(VAR_4, &VAR_3.dispose);
    FUNC_1(VAR_3.victim);
   }
  }
  if (!FUNC_5(&VAR_3.dispose))
   FUNC_7(&VAR_3.dispose);
 }
}
