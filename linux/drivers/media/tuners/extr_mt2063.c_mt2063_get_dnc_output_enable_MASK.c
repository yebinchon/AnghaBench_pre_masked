
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt2063_state {int* reg; } ;
typedef enum MT2063_DNC_Output_Enable { ____Placeholder_MT2063_DNC_Output_Enable } MT2063_DNC_Output_Enable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static u32 FUNC_1(struct mt2063_state *VAR_6,
     enum MT2063_DNC_Output_Enable *VAR_7)
{
 FUNC_0(2, "\n");

 if ((VAR_6->reg[VAR_4] & 0x03) == 0x03) {
  if ((VAR_6->reg[VAR_5] & 0x03) == 0x03)
   *VAR_7 = VAR_3;
  else
   *VAR_7 = VAR_1;
 } else {
  if ((VAR_6->reg[VAR_5] & 0x03) == 0x03)
   *VAR_7 = VAR_0;
  else
   *VAR_7 = VAR_2;
 }
 return 0;
}
