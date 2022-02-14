
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {int ex_lock; } ;


 struct fc_exch* FUNC_0 (struct fc_seq*) ;
 struct fc_seq* FUNC_1 (struct fc_seq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct fc_seq *FUNC_4(struct fc_seq *VAR_0)
{
 struct fc_exch *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->ex_lock);
 VAR_0 = FUNC_1(VAR_0);
 FUNC_3(&VAR_1->ex_lock);

 return VAR_0;
}
