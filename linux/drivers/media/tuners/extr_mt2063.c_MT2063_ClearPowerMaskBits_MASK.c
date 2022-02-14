
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt2063_state {int * reg; } ;
typedef enum MT2063_Mask_Bits { ____Placeholder_MT2063_Mask_Bits } MT2063_Mask_Bits ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mt2063_state*,size_t,int *,int) ;

__attribute__((used)) static u32 FUNC_2(struct mt2063_state *VAR_3,
         enum MT2063_Mask_Bits VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(2, "\n");
 VAR_4 = (enum MT2063_Mask_Bits)(VAR_4 & VAR_0);
 if ((VAR_4 & 0xFF00) != 0) {
  VAR_3->reg[VAR_2] &= ~(u8) (VAR_4 >> 8);
  VAR_5 |=
      FUNC_1(VAR_3,
        VAR_2,
        &VAR_3->reg[VAR_2], 1);
 }
 if ((VAR_4 & 0xFF) != 0) {
  VAR_3->reg[VAR_1] &= ~(u8) (VAR_4 & 0xFF);
  VAR_5 |=
      FUNC_1(VAR_3,
        VAR_1,
        &VAR_3->reg[VAR_1], 1);
 }

 return VAR_5;
}
