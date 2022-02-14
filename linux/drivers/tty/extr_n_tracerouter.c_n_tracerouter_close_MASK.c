
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct tracerouter_data* disc_data; } ;
struct tracerouter_data {int * kref_tty; } ;
struct TYPE_2__ {scalar_t__ opencalled; int * kref_tty; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2)
{
 struct tracerouter_data *VAR_3 = VAR_2->disc_data;

 FUNC_1(&VAR_0);
 FUNC_0(VAR_3->kref_tty != VAR_1->kref_tty);
 FUNC_3(VAR_2);
 FUNC_4(VAR_1->kref_tty);
 VAR_1->kref_tty = ((void*)0);
 VAR_1->opencalled = 0;
 VAR_2->disc_data = ((void*)0);
 FUNC_2(&VAR_0);
}
