
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int timer_quantum_ns; } ;



unsigned int FUNC_0(struct efx_nic *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 == 0)
  return 0;
 if (VAR_1 * 1000 < VAR_0->timer_quantum_ns)
  return 1;
 return VAR_1 * 1000 / VAR_0->timer_quantum_ns;
}
