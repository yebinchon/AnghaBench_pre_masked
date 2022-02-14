
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {scalar_t__ state; int lp_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct fc_lport *VAR_3)
{
 int VAR_4 = -1;

 FUNC_2(&VAR_3->lp_mutex);
 if (VAR_3->state == VAR_0 ||
     VAR_3->state == VAR_1) {
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(VAR_3);
  VAR_4 = 0;
 }
 FUNC_3(&VAR_3->lp_mutex);

 return VAR_4;
}
