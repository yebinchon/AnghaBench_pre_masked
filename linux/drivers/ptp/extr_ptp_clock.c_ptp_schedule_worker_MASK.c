
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock {int aux_work; int kworker; } ;


 int FUNC_0 (int ,int *,unsigned long) ;

int FUNC_1(struct ptp_clock *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(VAR_0->kworker, &VAR_0->aux_work, VAR_1);
}
