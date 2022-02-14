
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {int arg; int ex_lock; } ;


 int FUNC_0 (struct fc_exch*) ;
 int FUNC_1 (struct fc_exch*) ;
 struct fc_exch* FUNC_2 (struct fc_seq*) ;
 int FUNC_3 (struct fc_seq*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct fc_seq *VAR_0)
{
 struct fc_exch *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_4(&VAR_1->ex_lock);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_5(&VAR_1->ex_lock);

 FUNC_3(VAR_0, ((void*)0), VAR_1->arg);
 if (!VAR_2)
  FUNC_0(VAR_1);
}
