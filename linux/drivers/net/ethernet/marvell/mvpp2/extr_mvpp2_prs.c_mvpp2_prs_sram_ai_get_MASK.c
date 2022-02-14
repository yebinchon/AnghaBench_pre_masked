
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mvpp2_prs_entry {int* sram; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct mvpp2_prs_entry *VAR_1)
{
 u8 VAR_2;

 int VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_0(VAR_0);

 VAR_2 = (VAR_1->sram[VAR_3] >> VAR_4) |
        (VAR_1->sram[VAR_3 + 1] << (32 - VAR_4));

 return VAR_2;
}
