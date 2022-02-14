
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct blogic_ccb {int allocgrp_size; struct blogic_ccb* next_all; struct blogic_ccb* next; int base_addr; int callback; scalar_t__ dma_handle; struct blogic_adapter* adapter; int status; scalar_t__ allocgrp_head; } ;
struct TYPE_2__ {int base_addr; } ;
struct blogic_adapter {int alloc_ccbs; struct blogic_ccb* all_ccbs; struct blogic_ccb* free_ccbs; TYPE_1__ fpinfo; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct blogic_adapter*) ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct blogic_adapter *VAR_2, void *VAR_3,
    int VAR_4, dma_addr_t VAR_5)
{
 struct blogic_ccb *VAR_6 = (struct blogic_ccb *) VAR_3;
 unsigned int VAR_7 = 0;
 FUNC_1(VAR_3, 0, VAR_4);
 VAR_6->allocgrp_head = VAR_5;
 VAR_6->allocgrp_size = VAR_4;
 while ((VAR_4 -= sizeof(struct blogic_ccb)) >= 0) {
  VAR_6->status = VAR_0;
  VAR_6->adapter = VAR_2;
  VAR_6->dma_handle = (u32) VAR_5 + VAR_7;
  if (FUNC_0(VAR_2)) {
   VAR_6->callback = VAR_1;
   VAR_6->base_addr = VAR_2->fpinfo.base_addr;
  }
  VAR_6->next = VAR_2->free_ccbs;
  VAR_6->next_all = VAR_2->all_ccbs;
  VAR_2->free_ccbs = VAR_6;
  VAR_2->all_ccbs = VAR_6;
  VAR_2->alloc_ccbs++;
  VAR_6++;
  VAR_7 += sizeof(struct blogic_ccb);
 }
}
