
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct mxs_phy {TYPE_1__ phy; struct regmap* regmap_anatop; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct regmap*,int ,int*) ;
 int FUNC_2 (struct regmap*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mxs_phy *VAR_12)
{
 struct regmap *VAR_13 = VAR_12->regmap_anatop;
 int VAR_14, VAR_15 = 0;
 u32 VAR_16;


 FUNC_1(VAR_13, VAR_7, &VAR_16);
 if (!(VAR_16 & VAR_8)) {
  FUNC_0(VAR_12->phy.dev, "vbus is not valid\n");
  return -VAR_9;
 }


 FUNC_2(VAR_13, VAR_2,
    VAR_3);




 FUNC_2(VAR_13, VAR_4,
   VAR_1 |
   VAR_0);


 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  FUNC_1(VAR_13, VAR_5, &VAR_16);
  if (VAR_16 & VAR_6) {
   VAR_15++;
   if (VAR_15 > 5)

    break;
   else
    FUNC_3(5000, 10000);
  } else {
   VAR_15 = 0;
   FUNC_3(5000, 6000);
  }
 }

 if (VAR_14 == VAR_11) {
  FUNC_0(VAR_12->phy.dev,
   "Data pin can't make good contact.\n");

  FUNC_2(VAR_13, VAR_4,
    VAR_3 |
    VAR_0);
  return -VAR_10;
 }

 return 0;
}
