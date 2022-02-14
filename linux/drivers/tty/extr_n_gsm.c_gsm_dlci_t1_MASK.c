
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct gsm_mux {int t1; int control; } ;
struct gsm_dlci {int state; int t1; int addr; struct gsm_mux* gsm; int retries; int mode; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gsm_dlci* VAR_7 ;
 struct gsm_dlci* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct gsm_mux*,int ,int) ;
 int FUNC_2 (struct gsm_dlci*) ;
 int FUNC_3 (struct gsm_dlci*) ;
 int VAR_8 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_10)
{
 struct gsm_dlci *VAR_11 = FUNC_0(VAR_11, VAR_10, VAR_9);
 struct gsm_mux *VAR_12 = VAR_11->gsm;

 switch (VAR_11->state) {
 case 128:
  VAR_11->retries--;
  if (VAR_11->retries) {
   FUNC_1(VAR_11->gsm, VAR_11->addr, VAR_5|VAR_4);
   FUNC_4(&VAR_11->t1, VAR_8 + VAR_12->t1 * VAR_3 / 100);
  } else if (!VAR_11->addr && VAR_12->control == (VAR_2 | VAR_4)) {
   if (VAR_6 & 8)
    FUNC_5("DLCI %d opening in ADM mode.\n",
     VAR_11->addr);
   VAR_11->mode = VAR_1;
   FUNC_3(VAR_11);
  } else {
   FUNC_2(VAR_11);
  }

  break;
 case 129:
  VAR_11->retries--;
  if (VAR_11->retries) {
   FUNC_1(VAR_11->gsm, VAR_11->addr, VAR_0|VAR_4);
   FUNC_4(&VAR_11->t1, VAR_8 + VAR_12->t1 * VAR_3 / 100);
  } else
   FUNC_2(VAR_11);
  break;
 }
}
