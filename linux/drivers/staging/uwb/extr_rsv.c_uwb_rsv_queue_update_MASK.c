
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int rsv_update_work; int rsv_workq; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(struct uwb_rc *VAR_2)
{
 unsigned long VAR_3 = VAR_0 * VAR_1;

 FUNC_0(VAR_2->rsv_workq, &VAR_2->rsv_update_work, FUNC_1(VAR_3));
}
