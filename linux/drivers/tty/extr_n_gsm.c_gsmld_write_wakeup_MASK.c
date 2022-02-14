
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; struct gsm_mux* disc_data; } ;
struct gsm_mux {scalar_t__ tx_bytes; int tx_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gsm_mux*) ;
 int FUNC_2 (struct gsm_mux*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2)
{
 struct gsm_mux *VAR_3 = VAR_2->disc_data;
 unsigned long VAR_4;


 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_3(&VAR_3->tx_lock, VAR_4);
 FUNC_1(VAR_3);
 if (VAR_3->tx_bytes < VAR_1) {
  FUNC_2(VAR_3);
 }
 FUNC_4(&VAR_3->tx_lock, VAR_4);
}
