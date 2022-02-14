
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mvpp2_prs_entry {int* tcam; } ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct mvpp2_prs_entry *VAR_0, int VAR_1,
        u16 VAR_2)
{
 u16 VAR_3;

 VAR_3 = VAR_0->tcam[FUNC_0(VAR_1)] & 0xffff;
 return VAR_3 == VAR_2;
}
