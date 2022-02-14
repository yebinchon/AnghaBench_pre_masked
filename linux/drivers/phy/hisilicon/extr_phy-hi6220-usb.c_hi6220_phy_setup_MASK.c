
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct hi6220_priv {int dev; struct regmap* reg; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct regmap*,int ,int,int) ;
 int FUNC_2 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hi6220_priv *VAR_12, bool VAR_13)
{
 struct regmap *VAR_14 = VAR_12->reg;
 u32 VAR_15, VAR_16;
 int VAR_17;

 if (VAR_13) {
  VAR_15 = VAR_7 | VAR_5;
  VAR_16 = VAR_15 | VAR_6;
  VAR_17 = FUNC_1(VAR_14, VAR_10, VAR_16, VAR_15);
  if (VAR_17)
   goto out;

  VAR_15 = VAR_3 | VAR_4 |
         VAR_0;
  VAR_16 = VAR_15 | VAR_2 | VAR_1;
  VAR_17 = FUNC_1(VAR_14, VAR_9, VAR_16, VAR_15);
  if (VAR_17)
   goto out;

  VAR_17 = FUNC_2(VAR_14, VAR_11, VAR_8);
  if (VAR_17)
   goto out;
 } else {
  VAR_15 = VAR_2;
  VAR_16 = VAR_15;
  VAR_17 = FUNC_1(VAR_14, VAR_9, VAR_16, VAR_15);
  if (VAR_17)
   goto out;
 }

 return 0;
out:
 FUNC_0(VAR_12->dev, "failed to setup phy ret: %d\n", VAR_17);
 return VAR_17;
}
