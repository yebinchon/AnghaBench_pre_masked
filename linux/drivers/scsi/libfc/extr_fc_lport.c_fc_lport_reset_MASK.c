
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int lp_mutex; int retry_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct fc_lport *VAR_0)
{
 FUNC_0(&VAR_0->retry_work);
 FUNC_2(&VAR_0->lp_mutex);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->lp_mutex);
 return 0;
}
