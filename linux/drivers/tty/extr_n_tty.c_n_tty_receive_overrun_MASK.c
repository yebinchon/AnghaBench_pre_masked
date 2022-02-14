
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ num_overrun; scalar_t__ overrun_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tty_struct*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_2)
{
 struct n_tty_data *VAR_3 = VAR_2->disc_data;

 VAR_3->num_overrun++;
 if (FUNC_0(VAR_1, VAR_3->overrun_time + VAR_0) ||
   FUNC_0(VAR_3->overrun_time, VAR_1)) {
  FUNC_1(VAR_2, "%d input overrun(s)\n", VAR_3->num_overrun);
  VAR_3->overrun_time = VAR_1;
  VAR_3->num_overrun = 0;
 }
}
