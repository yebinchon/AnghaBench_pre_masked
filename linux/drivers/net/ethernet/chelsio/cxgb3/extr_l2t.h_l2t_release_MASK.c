
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct l2t_entry {int refcnt; } ;
struct l2t_data {int dummy; } ;


 struct l2t_data* FUNC_0 (struct t3cdev*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct l2t_data*,struct l2t_entry*) ;

__attribute__((used)) static inline void FUNC_5(struct t3cdev *VAR_0, struct l2t_entry *VAR_1)
{
 struct l2t_data *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(&VAR_1->refcnt) && VAR_2)
  FUNC_4(VAR_2, VAR_1);

 FUNC_3();
}
