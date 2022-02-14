
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_dma_descriptor {int * acd; scalar_t__ DescSystemAddrMS; scalar_t__ DescSystemAddrLS; scalar_t__ DescControlFlags; scalar_t__ DescCardAddrMS; scalar_t__ DescBufferByteCount; scalar_t__ DescCardAddrLS; scalar_t__ DescUserControlMS; scalar_t__ DescUserControlLS; scalar_t__ DescStatusFlags; scalar_t__ DescStatusErrorFlags; scalar_t__ DescByteCount; } ;



void FUNC_0(struct kpc_dma_descriptor *VAR_0)
{
 if (!VAR_0)
  return;
 VAR_0->DescByteCount = 0;
 VAR_0->DescStatusErrorFlags = 0;
 VAR_0->DescStatusFlags = 0;
 VAR_0->DescUserControlLS = 0;
 VAR_0->DescUserControlMS = 0;
 VAR_0->DescCardAddrLS = 0;
 VAR_0->DescBufferByteCount = 0;
 VAR_0->DescCardAddrMS = 0;
 VAR_0->DescControlFlags = 0;
 VAR_0->DescSystemAddrLS = 0;
 VAR_0->DescSystemAddrMS = 0;
 VAR_0->acd = ((void*)0);
}
