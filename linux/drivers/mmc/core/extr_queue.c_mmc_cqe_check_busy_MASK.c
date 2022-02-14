
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_queue {int cqe_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_queue*) ;

void FUNC_1(struct mmc_queue *VAR_2)
{
 if ((VAR_2->cqe_busy & VAR_0) && !FUNC_0(VAR_2))
  VAR_2->cqe_busy &= ~VAR_0;

 VAR_2->cqe_busy &= ~VAR_1;
}
