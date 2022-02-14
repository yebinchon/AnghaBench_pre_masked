
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_disc {void (* disc_callback ) (struct fc_lport*,int) ;int disc_mutex; } ;
struct fc_lport {struct fc_disc disc; } ;


 int FUNC_0 (struct fc_disc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void (*VAR_0)(struct fc_lport *,
      enum fc_disc_event),
     struct fc_lport *VAR_1)
{
 struct fc_disc *VAR_2 = &VAR_1->disc;






 FUNC_1(&VAR_2->disc_mutex);
 VAR_2->disc_callback = VAR_0;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->disc_mutex);
}
