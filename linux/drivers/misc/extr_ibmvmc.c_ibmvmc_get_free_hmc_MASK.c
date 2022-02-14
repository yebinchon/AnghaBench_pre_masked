
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvmc_hmc {scalar_t__ state; unsigned long index; int lock; } ;
struct TYPE_2__ {unsigned long max_hmc_index; } ;


 struct ibmvmc_hmc* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct ibmvmc_hmc *FUNC_2(void)
{
 unsigned long VAR_4;
 unsigned long VAR_5;




 for (VAR_4 = 0; VAR_4 <= VAR_3.max_hmc_index; VAR_4++) {
  FUNC_0(&VAR_0[VAR_4].lock, VAR_5);
  if (VAR_0[VAR_4].state == VAR_1) {
   VAR_0[VAR_4].index = VAR_4;
   VAR_0[VAR_4].state = VAR_2;
   FUNC_1(&VAR_0[VAR_4].lock, VAR_5);
   return &VAR_0[VAR_4];
  }
  FUNC_1(&VAR_0[VAR_4].lock, VAR_5);
 }

 return ((void*)0);
}
