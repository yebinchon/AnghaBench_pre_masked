
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {scalar_t__ ring_csr_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

bool FUNC_1(struct xgene_enet_pdata *VAR_2)
{
 if (!FUNC_0(VAR_2->ring_csr_addr + VAR_0))
  return 0;

 if (FUNC_0(VAR_2->ring_csr_addr + VAR_1))
  return 0;

 return 1;
}
