
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct sym_hcb {scalar_t__ iarb_count; scalar_t__ iarb_max; int squeueput; int istat_sem; void** squeue; int idletask_ba; scalar_t__ dmap_dirty; struct sym_ccb* last_cp; } ;
struct sym_ccb {int cmd; int ccb_ba; int host_xflags; int host_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sym_hcb*,int ,int) ;
 int VAR_6 ;
 void* FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,char*,int) ;

void FUNC_4(struct sym_hcb *VAR_8, struct sym_ccb *VAR_9)
{
 u_short VAR_10;
 VAR_10 = VAR_8->squeueput + 2;
 if (VAR_10 >= VAR_5*2) VAR_10 = 0;

 VAR_8->squeue [VAR_10] = FUNC_2(VAR_8->idletask_ba);
 FUNC_0();
 VAR_8->squeue [VAR_8->squeueput] = FUNC_2(VAR_9->ccb_ba);

 VAR_8->squeueput = VAR_10;

 if (VAR_0 & VAR_1)
  FUNC_3(VAR_4, VAR_9->cmd, "queuepos=%d\n",
       VAR_8->squeueput);





 FUNC_0();
 FUNC_1(VAR_8, VAR_7, VAR_6|VAR_8->istat_sem);
}
