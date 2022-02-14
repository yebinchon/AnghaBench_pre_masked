
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flow_stopped; scalar_t__ stopped; struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ canon_head; scalar_t__ read_head; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (unsigned char,struct tty_struct*) ;
 int FUNC_6 (struct n_tty_data*) ;
 int FUNC_7 (struct n_tty_data*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (unsigned char,struct n_tty_data*) ;
 int FUNC_10 (struct tty_struct*) ;

__attribute__((used)) static inline void
FUNC_11(struct tty_struct *VAR_0, unsigned char VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_0->disc_data;

 if (VAR_0->stopped && !VAR_0->flow_stopped && FUNC_1(VAR_0) && FUNC_0(VAR_0)) {
  FUNC_10(VAR_0);
  FUNC_8(VAR_0);
 }
 if (FUNC_3(VAR_0)) {
  FUNC_7(VAR_2);

  if (VAR_2->canon_head == VAR_2->read_head)
   FUNC_6(VAR_2);
  FUNC_5(VAR_1, VAR_0);
  FUNC_4(VAR_0);
 }

 if (VAR_1 == (unsigned char) '\377' && FUNC_2(VAR_0))
  FUNC_9(VAR_1, VAR_2);
 FUNC_9(VAR_1, VAR_2);
}
