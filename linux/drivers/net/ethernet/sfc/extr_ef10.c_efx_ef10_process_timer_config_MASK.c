
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int timer_quantum_ns; unsigned int timer_max_ns; int net_dev; } ;
typedef int efx_dword_t ;


 scalar_t__ FUNC_0 (struct efx_nic*) ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int const*,int ) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_7,
       const efx_dword_t *VAR_8)
{
 unsigned int VAR_9;

 if (FUNC_1(VAR_7)) {
  VAR_7->timer_quantum_ns = FUNC_2(VAR_8,
   VAR_3);
  VAR_7->timer_max_ns = FUNC_2(VAR_8,
   VAR_2);
 } else if (FUNC_0(VAR_7)) {
  VAR_7->timer_quantum_ns = FUNC_2(VAR_8,
   VAR_1);
  VAR_9 = FUNC_2(VAR_8,
   VAR_0);
  VAR_7->timer_max_ns = VAR_9 * VAR_7->timer_quantum_ns;
 } else {
  VAR_7->timer_quantum_ns = FUNC_2(VAR_8,
   VAR_5);
  VAR_9 = FUNC_2(VAR_8,
   VAR_4);
  VAR_7->timer_max_ns = VAR_9 * VAR_7->timer_quantum_ns;
 }

 FUNC_3(VAR_7, VAR_6, VAR_7->net_dev,
    "got timer properties from MC: quantum %u ns; max %u ns\n",
    VAR_7->timer_quantum_ns, VAR_7->timer_max_ns);
}
