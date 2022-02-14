
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_watch {int rules; struct audit_parent* parent; } ;
struct audit_parent {int mark; int watches; } ;
struct audit_krule {int rlist; struct audit_watch* watch; } ;


 int FUNC_0 (struct audit_parent*) ;
 int FUNC_1 (struct audit_parent*) ;
 int FUNC_2 (struct audit_watch*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

void FUNC_6(struct audit_krule *VAR_1)
{
 struct audit_watch *VAR_2 = VAR_1->watch;
 struct audit_parent *VAR_3 = VAR_2->parent;

 FUNC_4(&VAR_1->rlist);

 if (FUNC_5(&VAR_2->rules)) {




  FUNC_0(VAR_3);
  FUNC_2(VAR_2);
  if (FUNC_5(&VAR_3->watches))
   FUNC_3(&VAR_3->mark, VAR_0);
  FUNC_1(VAR_3);
 }
}
