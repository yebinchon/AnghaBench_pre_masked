
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* Address; void* FlagsLength; } ;
typedef TYPE_1__ Mpi2SGESimple32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_3, u32 VAR_4, dma_addr_t VAR_5)
{
 Mpi2SGESimple32_t *VAR_6 = VAR_3;

 VAR_4 |= (VAR_0 |
     VAR_2) << VAR_1;
 VAR_6->FlagsLength = FUNC_0(VAR_4);
 VAR_6->Address = FUNC_0(VAR_5);
}
