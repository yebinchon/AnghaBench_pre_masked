
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* mcdi; } ;
struct efx_mcdi_iface {int dummy; } ;
struct TYPE_2__ {struct efx_mcdi_iface iface; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct efx_mcdi_iface *FUNC_1(struct efx_nic *VAR_0)
{
 FUNC_0(!VAR_0->mcdi);
 return &VAR_0->mcdi->iface;
}
