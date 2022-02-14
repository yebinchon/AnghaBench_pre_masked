
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct phy {TYPE_1__ dev; } ;
struct hix5hd2_priv {scalar_t__ base; scalar_t__ peri_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int*,int) ;
 struct hix5hd2_priv* FUNC_4 (struct phy*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int,int ,int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_32)
{
 struct hix5hd2_priv *VAR_33 = FUNC_4(VAR_32);
 u32 VAR_34, VAR_35[2];
 int VAR_36;

 if (VAR_33->peri_ctrl) {
  VAR_36 = FUNC_3(VAR_32->dev.of_node,
       "hisilicon,power-reg",
       &VAR_35[0], 2);
  if (VAR_36) {
   FUNC_1(&VAR_32->dev, "Fail read hisilicon,power-reg\n");
   return VAR_36;
  }

  FUNC_6(VAR_33->peri_ctrl, VAR_35[0],
       FUNC_0(VAR_35[1]), FUNC_0(VAR_35[1]));
 }


 VAR_34 = FUNC_5(VAR_33->base + VAR_23);
 VAR_34 &= ~(VAR_10 | VAR_22);
 VAR_34 |= VAR_9 << VAR_11 |
        VAR_21 | VAR_13;
 FUNC_7(VAR_34, VAR_33->base + VAR_23);
 FUNC_2(20);
 VAR_34 &= ~VAR_13;
 FUNC_7(VAR_34, VAR_33->base + VAR_23);

 VAR_34 = FUNC_5(VAR_33->base + VAR_25);
 VAR_34 &= ~VAR_6;
 VAR_34 |= VAR_4 << VAR_5 |
        VAR_2 << VAR_3 |
        VAR_0 << VAR_1;
 FUNC_7(VAR_34, VAR_33->base + VAR_25);

 VAR_34 = FUNC_5(VAR_33->base + VAR_26);
 VAR_34 &= ~VAR_20;
 VAR_34 |= VAR_18 << VAR_19 |
        VAR_16 << VAR_17 |
        VAR_14 << VAR_15;
 FUNC_7(VAR_34, VAR_33->base + VAR_26);


 VAR_34 = FUNC_5(VAR_33->base + VAR_24);
 VAR_34 &= ~VAR_31;
 VAR_34 |= VAR_28 << VAR_8 |
        VAR_28 << VAR_12 |
        VAR_28 << VAR_7 | VAR_27;
 FUNC_7(VAR_34, VAR_33->base + VAR_24);

 FUNC_2(20);
 VAR_34 &= ~VAR_31;
 VAR_34 |= VAR_30 << VAR_8 |
        VAR_30 << VAR_12 |
        VAR_30 << VAR_7 | VAR_27;
 FUNC_7(VAR_34, VAR_33->base + VAR_24);

 VAR_34 &= ~(VAR_31 | VAR_27);
 VAR_34 |= VAR_29 << VAR_8 |
        VAR_29 << VAR_12 |
        VAR_29 << VAR_7;
 FUNC_7(VAR_34, VAR_33->base + VAR_24);

 return 0;
}
