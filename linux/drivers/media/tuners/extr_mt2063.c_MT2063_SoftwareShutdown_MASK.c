
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt2063_state {int* reg; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mt2063_state*,size_t,int*,int) ;

__attribute__((used)) static u32 FUNC_2(struct mt2063_state *VAR_2, u8 VAR_3)
{
 int VAR_4;

 FUNC_0(2, "\n");
 if (VAR_3 == 1)
  VAR_2->reg[VAR_1] |= 0x04;
 else
  VAR_2->reg[VAR_1] &= ~0x04;

 VAR_4 = FUNC_1(VAR_2,
       VAR_1,
       &VAR_2->reg[VAR_1], 1);

 if (VAR_3 != 1) {
  VAR_2->reg[VAR_0] =
      (VAR_2->reg[VAR_0] & 0x9F) | 0x40;
  VAR_4 |=
      FUNC_1(VAR_2,
        VAR_0,
        &VAR_2->reg[VAR_0],
        1);
  VAR_2->reg[VAR_0] =
      (VAR_2->reg[VAR_0] & 0x9F);
  VAR_4 |=
      FUNC_1(VAR_2,
        VAR_0,
        &VAR_2->reg[VAR_0],
        1);
 }

 return VAR_4;
}
