
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {scalar_t__ bus_refs; int lock; scalar_t__ bus_ops; } ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct mmc_host *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->bus_refs--;
 if ((VAR_0->bus_refs == 0) && VAR_0->bus_ops)
  FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock, VAR_1);
}
