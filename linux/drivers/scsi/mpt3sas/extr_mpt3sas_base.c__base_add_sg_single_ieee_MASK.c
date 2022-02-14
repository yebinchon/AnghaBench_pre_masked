
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_2__ {int Address; int Length; void* NextChainOffset; void* Flags; } ;
typedef TYPE_1__ Mpi25IeeeSgeChain64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, u8 VAR_1, u8 VAR_2, u32 VAR_3,
 dma_addr_t VAR_4)
{
 Mpi25IeeeSgeChain64_t *VAR_5 = VAR_0;

 VAR_5->Flags = VAR_1;
 VAR_5->NextChainOffset = VAR_2;
 VAR_5->Length = FUNC_0(VAR_3);
 VAR_5->Address = FUNC_1(VAR_4);
}
