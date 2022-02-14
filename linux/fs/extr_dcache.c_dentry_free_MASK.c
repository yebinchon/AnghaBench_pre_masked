
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct external_name {TYPE_2__ u; } ;
struct TYPE_3__ {int d_rcu; int d_alias; } ;
struct dentry {int d_flags; TYPE_1__ d_u; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int (*) (int *)) ;
 int FUNC_5 (struct dentry*) ;
 struct external_name* FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct dentry *VAR_1)
{
 FUNC_0(!FUNC_7(&VAR_1->d_u.d_alias));
 if (FUNC_9(FUNC_5(VAR_1))) {
  struct external_name *VAR_2 = FUNC_6(VAR_1);
  if (FUNC_8(FUNC_3(&VAR_2->u.count))) {
   FUNC_4(&VAR_1->d_u.d_rcu, FUNC_2);
   return;
  }
 }

 if (VAR_1->d_flags & VAR_0)
  FUNC_1(&VAR_1->d_u.d_rcu);
 else
  FUNC_4(&VAR_1->d_u.d_rcu, FUNC_1);
}
