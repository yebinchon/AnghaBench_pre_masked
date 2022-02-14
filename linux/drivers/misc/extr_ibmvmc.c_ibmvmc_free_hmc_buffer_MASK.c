
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvmc_hmc {int lock; } ;
struct ibmvmc_buffer {int free; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct ibmvmc_hmc *VAR_0,
       struct ibmvmc_buffer *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_1->free = 1;
 FUNC_1(&VAR_0->lock, VAR_2);
}
