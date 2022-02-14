
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt2063_state {int* reg; size_t rcvr_mode; } ;
typedef enum MT2063_DNC_Output_Enable { ____Placeholder_MT2063_DNC_Output_Enable } MT2063_DNC_Output_Enable ;


 int* VAR_0 ;
 int* VAR_1 ;




 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mt2063_state*,size_t,int) ;

__attribute__((used)) static u32 FUNC_2(struct mt2063_state *VAR_5,
     enum MT2063_DNC_Output_Enable VAR_6)
{
 int VAR_7 = 0;
 u8 VAR_8 = 0;

 FUNC_0(2, "\n");


 switch (VAR_6) {
 case 128:
  VAR_8 = (VAR_5->reg[VAR_2] & 0xFC) | 0x03;
  if (VAR_5->reg[VAR_2] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_2,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_4] & 0xFC) | 0x03;
  if (VAR_5->reg[VAR_4] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_4,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_3] & ~0x40);
  if (VAR_5->reg[VAR_3] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_3,
       VAR_8);

  break;
 case 131:
  VAR_8 = (VAR_5->reg[VAR_2] & 0xFC) | (VAR_0[VAR_5->rcvr_mode] & 0x03);
  if (VAR_5->reg[VAR_2] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_2,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_4] & 0xFC) | 0x03;
  if (VAR_5->reg[VAR_4] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_4,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_3] & ~0x40);
  if (VAR_5->reg[VAR_3] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_3,
       VAR_8);

  break;
 case 130:
  VAR_8 = (VAR_5->reg[VAR_2] & 0xFC) | 0x03;
  if (VAR_5->reg[VAR_2] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_2,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_4] & 0xFC) | (VAR_1[VAR_5->rcvr_mode] & 0x03);
  if (VAR_5->reg[VAR_4] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_4,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_3] | 0x40);
  if (VAR_5->reg[VAR_3] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_3,
       VAR_8);

  break;
 case 129:
  VAR_8 = (VAR_5->reg[VAR_2] & 0xFC) | (VAR_0[VAR_5->rcvr_mode] & 0x03);
  if (VAR_5->reg[VAR_2] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_2,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_4] & 0xFC) | (VAR_1[VAR_5->rcvr_mode] & 0x03);
  if (VAR_5->reg[VAR_4] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_4,
       VAR_8);

  VAR_8 = (VAR_5->reg[VAR_3] | 0x40);
  if (VAR_5->reg[VAR_3] !=
      VAR_8)
   VAR_7 |=
       FUNC_1(VAR_5,
       VAR_3,
       VAR_8);

  break;
 default:
  break;
 }

 return VAR_7;
}
