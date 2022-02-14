
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ type; scalar_t__ vpd_sn; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct efx_nic *VAR_0, struct efx_nic *VAR_1)
{
 return VAR_0->type == VAR_1->type &&
  VAR_0->vpd_sn && VAR_1->vpd_sn &&
  !FUNC_0(VAR_0->vpd_sn, VAR_1->vpd_sn);
}
