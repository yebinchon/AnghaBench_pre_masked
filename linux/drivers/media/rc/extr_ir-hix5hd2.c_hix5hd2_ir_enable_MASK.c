
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hix5hd2_ir_priv {int clock; scalar_t__ regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hix5hd2_ir_priv *VAR_3, bool VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 0;

 if (VAR_3->regmap) {
  FUNC_2(VAR_3->regmap, VAR_0, &VAR_5);
  if (VAR_4) {
   VAR_5 &= ~VAR_2;
   VAR_5 |= VAR_1;
  } else {
   VAR_5 &= ~VAR_1;
   VAR_5 |= VAR_2;
  }
  FUNC_3(VAR_3->regmap, VAR_0, VAR_5);
 } else {
  if (VAR_4)
   VAR_6 = FUNC_1(VAR_3->clock);
  else
   FUNC_0(VAR_3->clock);
 }
 return VAR_6;
}
