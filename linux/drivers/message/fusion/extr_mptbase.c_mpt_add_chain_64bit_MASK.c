
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int dma_addr_t ;
struct TYPE_3__ {void* High; void* Low; } ;
struct TYPE_4__ {int Flags; TYPE_1__ Address; int NextChainOffset; int Length; } ;
typedef TYPE_2__ SGEChain64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, u8 VAR_3, u16 VAR_4, dma_addr_t VAR_5)
{
 SGEChain64_t *VAR_6 = (SGEChain64_t *) VAR_2;
 u32 VAR_7 = VAR_5 & 0xFFFFFFFF;

 VAR_6->Length = FUNC_0(VAR_4);
 VAR_6->Flags = (VAR_1 |
    VAR_0);

 VAR_6->NextChainOffset = VAR_3;

 VAR_6->Address.Low = FUNC_1(VAR_7);
 VAR_7 = (u32)(FUNC_2(VAR_5));
 VAR_6->Address.High = FUNC_1(VAR_7);
}
