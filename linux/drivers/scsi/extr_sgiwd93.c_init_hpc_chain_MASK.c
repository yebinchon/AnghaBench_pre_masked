
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ip22_hostdata {scalar_t__ dma; scalar_t__ cpu; } ;
struct TYPE_2__ {scalar_t__ pnext; int cntinfo; } ;
struct hpc_chunk {TYPE_1__ desc; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct ip22_hostdata *VAR_2)
{
 struct hpc_chunk *VAR_3 = (struct hpc_chunk *)VAR_2->cpu;
 dma_addr_t VAR_4 = VAR_2->dma;
 unsigned long VAR_5, VAR_6;

 VAR_5 = (unsigned long) VAR_3;
 VAR_6 = VAR_5 + VAR_1;
 while (VAR_5 < VAR_6) {
  VAR_3->desc.pnext = (u32) (VAR_4 + sizeof(struct hpc_chunk));
  VAR_3->desc.cntinfo = VAR_0;
  VAR_3++;
  VAR_4 += sizeof(struct hpc_chunk);
  VAR_5 += sizeof(struct hpc_chunk);
 };
 VAR_3--;
 VAR_3->desc.pnext = VAR_2->dma;
}
