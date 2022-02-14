
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int timer_quantum_ns; } ;


 unsigned int FUNC_0 (unsigned int,int) ;

unsigned int FUNC_1(struct efx_nic *VAR_0, unsigned int VAR_1)
{



 return FUNC_0(VAR_1 * VAR_0->timer_quantum_ns, 1000);
}
