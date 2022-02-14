
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_adapter {int flags; int * ptp_clock; int systim_overflow_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct e1000_adapter *VAR_1)
{
 if (!(VAR_1->flags & VAR_0))
  return;

 FUNC_0(&VAR_1->systim_overflow_work);

 if (VAR_1->ptp_clock) {
  FUNC_2(VAR_1->ptp_clock);
  VAR_1->ptp_clock = ((void*)0);
  FUNC_1("removed PHC\n");
 }
}
