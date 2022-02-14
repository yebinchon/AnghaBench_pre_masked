
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {int output_lock; } ;


 int FUNC_0 (unsigned char,struct tty_struct*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(unsigned char VAR_0, struct tty_struct *VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_1->disc_data;
 int VAR_3, VAR_4;

 FUNC_1(&VAR_2->output_lock);

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);

 FUNC_2(&VAR_2->output_lock);
 if (VAR_4 < 0)
  return -1;
 else
  return 0;
}
