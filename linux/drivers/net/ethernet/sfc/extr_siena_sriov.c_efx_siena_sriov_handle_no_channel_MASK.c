
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ vf_count; int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, VAR_1->net_dev,
    "ERROR: IOV requires MSI-X and 1 additional interrupt"
    "vector. IOV disabled\n");
 VAR_1->vf_count = 0;
}
