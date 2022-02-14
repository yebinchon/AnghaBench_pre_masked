
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_rtc {scalar_t__ base; int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,scalar_t__,int,int,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct sprd_rtc *VAR_11, bool VAR_12)
{
 int VAR_13;
 u32 VAR_14;

 VAR_13 = FUNC_1(VAR_11->regmap, VAR_11->base + VAR_10, &VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_14 &= ~VAR_0;
 if (VAR_12)
  VAR_14 |= VAR_1;
 else
  VAR_14 |= VAR_2 | VAR_7;

 VAR_13 = FUNC_3(VAR_11->regmap, VAR_11->base + VAR_8, VAR_14);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_2(VAR_11->regmap,
           VAR_11->base + VAR_4, VAR_14,
           (VAR_14 & VAR_9),
           VAR_5,
           VAR_6);
 if (VAR_13) {
  FUNC_0(VAR_11->dev, "failed to update SPG value:%d\n", VAR_13);
  return VAR_13;
 }

 return FUNC_3(VAR_11->regmap, VAR_11->base + VAR_3,
       VAR_9);
}
