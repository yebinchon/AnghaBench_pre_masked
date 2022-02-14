
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slg51000 {int dev; int * rdev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ereg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_1__* VAR_18 ;
 int FUNC_3 (struct regmap*,int ,int*,int) ;
 int FUNC_4 (struct regmap*,int ,unsigned int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_19, void *VAR_20)
{
 struct slg51000 *VAR_21 = VAR_20;
 struct regmap *VAR_22 = VAR_21->regmap;
 enum { R0 = 0, R1, R2, REG_MAX };
 u8 VAR_23[VAR_10][REG_MAX];
 int VAR_24, VAR_25, VAR_26 = VAR_1;
 unsigned int VAR_27, VAR_28;


 for (VAR_25 = 0; VAR_25 < VAR_10; VAR_25++) {
  VAR_24 = FUNC_3(VAR_22, VAR_18[VAR_25].ereg, VAR_23[VAR_25], REG_MAX);
  if (VAR_24 < 0) {
   FUNC_0(VAR_21->dev,
    "Failed to read event registers(%d)\n", VAR_24);
   return VAR_1;
  }
 }

 VAR_24 = FUNC_4(VAR_22, VAR_12, &VAR_27);
 if (VAR_24 < 0) {
  FUNC_0(VAR_21->dev,
   "Failed to read otp event registers(%d)\n", VAR_24);
  return VAR_1;
 }

 VAR_24 = FUNC_4(VAR_22, VAR_13, &VAR_28);
 if (VAR_24 < 0) {
  FUNC_0(VAR_21->dev,
   "Failed to read otp mask register(%d)\n", VAR_24);
  return VAR_1;
 }

 if ((VAR_27 & VAR_4) &&
     !(VAR_28 & VAR_7)) {
  FUNC_1(VAR_21->dev,
    "OTP has been read or OTP crc is not zero\n");
  VAR_26 = VAR_0;
 }

 for (VAR_25 = 0; VAR_25 < VAR_11; VAR_25++) {
  if (!(VAR_23[VAR_25][R2] & VAR_9) &&
      (VAR_23[VAR_25][R0] & VAR_6)) {
   FUNC_5(VAR_21->rdev[VAR_25]);
   FUNC_6(VAR_21->rdev[VAR_25],
         VAR_2, ((void*)0));
   FUNC_7(VAR_21->rdev[VAR_25]);

   if (VAR_23[VAR_25][R1] & VAR_16)
    FUNC_2(VAR_21->dev,
      "Over-current limit(ldo%d)\n", VAR_25 + 1);
   VAR_26 = VAR_0;
  }
 }

 if (!(VAR_23[VAR_14][R2] & VAR_8) &&
     (VAR_23[VAR_14][R0] & VAR_5)) {
  for (VAR_25 = 0; VAR_25 < VAR_11; VAR_25++) {
   if (!(VAR_23[VAR_25][R1] & VAR_16) &&
       (VAR_23[VAR_25][R1] & VAR_17)) {
    FUNC_5(VAR_21->rdev[VAR_25]);
    FUNC_6(VAR_21->rdev[VAR_25],
            VAR_3, ((void*)0));
    FUNC_7(VAR_21->rdev[VAR_25]);
   }
  }
  VAR_26 = VAR_0;
  if (VAR_23[VAR_14][R1] &
      VAR_15)
   FUNC_2(VAR_21->dev, "High temperature warning!\n");
 }

 return VAR_26;
}
