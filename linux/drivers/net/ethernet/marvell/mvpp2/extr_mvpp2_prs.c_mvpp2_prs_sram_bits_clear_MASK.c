
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_prs_entry {int* sram; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mvpp2_prs_entry *VAR_0, int VAR_1,
          u32 VAR_2)
{
 VAR_0->sram[FUNC_1(VAR_1)] &= ~(VAR_2 << (FUNC_0(VAR_1)));
}
