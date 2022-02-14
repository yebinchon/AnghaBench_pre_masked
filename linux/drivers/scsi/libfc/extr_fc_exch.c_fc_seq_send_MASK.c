
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int ex_lock; } ;


 struct fc_exch* FUNC_0 (struct fc_seq*) ;
 int FUNC_1 (struct fc_lport*,struct fc_seq*,struct fc_frame*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct fc_lport *VAR_0, struct fc_seq *VAR_1, struct fc_frame *VAR_2)
{
 struct fc_exch *VAR_3;
 int VAR_4;
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(&VAR_3->ex_lock);
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_3->ex_lock);
 return VAR_4;
}
