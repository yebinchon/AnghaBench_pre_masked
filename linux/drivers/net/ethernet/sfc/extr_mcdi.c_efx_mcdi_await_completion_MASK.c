
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_mcdi_iface {scalar_t__ state; scalar_t__ mode; int wq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_4)
{
 struct efx_mcdi_iface *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_5->wq, VAR_5->state == VAR_3,
          VAR_2) == 0)
  return -VAR_0;
 if (VAR_5->mode == VAR_1)
  return FUNC_1(VAR_4);

 return 0;
}
