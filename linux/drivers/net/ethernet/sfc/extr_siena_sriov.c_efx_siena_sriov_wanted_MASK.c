
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ vf_count; } ;



bool FUNC_0(struct efx_nic *VAR_0)
{
 return VAR_0->vf_count != 0;
}
