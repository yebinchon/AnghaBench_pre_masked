
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int write_wait; int read_wait; struct gsm_mux* disc_data; } ;
struct gsm_mux {scalar_t__ dead; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static __poll_t FUNC_4(struct tty_struct *VAR_3, struct file *VAR_4,
       poll_table *VAR_5)
{
 __poll_t VAR_6 = 0;
 struct gsm_mux *VAR_7 = VAR_3->disc_data;

 FUNC_0(VAR_4, &VAR_3->read_wait, VAR_5);
 FUNC_0(VAR_4, &VAR_3->write_wait, VAR_5);
 if (FUNC_1(VAR_4))
  VAR_6 |= VAR_0;
 if (!FUNC_2(VAR_3) && FUNC_3(VAR_3) > 0)
  VAR_6 |= VAR_1 | VAR_2;
 if (VAR_7->dead)
  VAR_6 |= VAR_0;
 return VAR_6;
}
