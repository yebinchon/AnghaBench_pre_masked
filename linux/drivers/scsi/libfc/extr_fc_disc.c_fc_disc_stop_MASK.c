
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_disc {int disc_mutex; int disc_work; scalar_t__ pending; } ;
struct fc_lport {struct fc_disc disc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_disc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fc_lport *VAR_0)
{
 struct fc_disc *VAR_1 = &VAR_0->disc;

 if (VAR_1->pending)
  FUNC_0(&VAR_1->disc_work);
 FUNC_2(&VAR_1->disc_mutex);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->disc_mutex);
}
