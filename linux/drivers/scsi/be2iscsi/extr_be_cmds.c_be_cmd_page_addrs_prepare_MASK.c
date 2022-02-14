
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct phys_addr {void* hi; void* lo; } ;
struct be_dma_mem {int size; int va; int dma; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct phys_addr *VAR_1, u32 VAR_2,
       struct be_dma_mem *VAR_3)
{
 int VAR_4, VAR_5;
 u64 VAR_6 = (u64) VAR_3->dma;

 VAR_5 = FUNC_2(FUNC_0(VAR_3->va, VAR_3->size), VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_1[VAR_4].lo = FUNC_1(VAR_6 & 0xFFFFFFFF);
  VAR_1[VAR_4].hi = FUNC_1(FUNC_3(VAR_6));
  VAR_6 += VAR_0;
 }
}
