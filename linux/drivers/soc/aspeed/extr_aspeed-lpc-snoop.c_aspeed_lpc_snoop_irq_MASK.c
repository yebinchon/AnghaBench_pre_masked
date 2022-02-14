
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct aspeed_lpc_snoop {int * chan; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_10, void *VAR_11)
{
 struct aspeed_lpc_snoop *VAR_12 = VAR_11;
 u32 VAR_13, VAR_14;

 if (FUNC_1(VAR_12->regmap, VAR_0, &VAR_13))
  return VAR_4;


 VAR_13 &= (VAR_1 | VAR_2);
 if (!VAR_13)
  return VAR_4;


 FUNC_2(VAR_12->regmap, VAR_0, VAR_13);


 FUNC_1(VAR_12->regmap, VAR_5, &VAR_14);

 if (VAR_13 & VAR_1) {
  u8 VAR_15 = (VAR_14 & VAR_6) >> VAR_7;

  FUNC_0(&VAR_12->chan[0], VAR_15);
 }
 if (VAR_13 & VAR_2) {
  u8 VAR_16 = (VAR_14 & VAR_8) >> VAR_9;

  FUNC_0(&VAR_12->chan[1], VAR_16);
 }

 return VAR_3;
}
