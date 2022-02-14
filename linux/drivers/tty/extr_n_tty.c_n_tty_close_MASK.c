
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; scalar_t__ link; } ;
struct n_tty_data {int dummy; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct n_tty_data*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct n_tty_data *VAR_1 = VAR_0->disc_data;

 if (VAR_0->link)
  FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 VAR_0->disc_data = ((void*)0);
}
