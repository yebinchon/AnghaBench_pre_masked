
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ canon_head; scalar_t__ read_tail; scalar_t__ icanon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty_struct*,int ) ;
 scalar_t__ FUNC_1 (struct n_tty_data*) ;
 int FUNC_2 (struct tty_struct*,int ) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_3)
{
 struct n_tty_data *VAR_4 = VAR_3->disc_data;






 if (VAR_4->icanon && VAR_4->canon_head == VAR_4->read_tail)
  return;

 while (1) {
  int VAR_5;
  FUNC_2(VAR_3, VAR_2);
  if (VAR_0 - FUNC_1(VAR_4) >= VAR_1)
   break;
  VAR_5 = FUNC_3(VAR_3);
  if (!VAR_5)
   break;
 }
 FUNC_0(VAR_3, 0);
}
