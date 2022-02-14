
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_disc {int rports; int disc_mutex; int disc_work; } ;
struct fc_lport {struct fc_disc disc; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct fc_lport *VAR_1)
{
 struct fc_disc *VAR_2 = &VAR_1->disc;

 FUNC_0(&VAR_2->disc_work, VAR_0);
 FUNC_2(&VAR_2->disc_mutex);
 FUNC_1(&VAR_2->rports);
}
