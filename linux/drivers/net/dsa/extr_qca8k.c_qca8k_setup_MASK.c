
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qca8k_priv {TYPE_2__* port_sts; int regmap; int reg_mutex; } ;
struct dsa_switch {TYPE_1__* ports; int dev; scalar_t__ priv; } ;
struct TYPE_4__ {int enabled; } ;
struct TYPE_3__ {int dn; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *,struct qca8k_priv*,int *) ;
 scalar_t__ FUNC_10 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_11 (struct dsa_switch*,int) ;
 int FUNC_12 (struct dsa_switch*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct qca8k_priv*) ;
 int FUNC_18 (struct qca8k_priv*) ;
 int FUNC_19 (struct qca8k_priv*,int,int) ;
 int FUNC_20 (struct qca8k_priv*,int ,int ) ;
 int VAR_19 ;
 int FUNC_21 (struct qca8k_priv*,int ,int,int) ;
 int FUNC_22 (struct qca8k_priv*,size_t,int) ;
 int FUNC_23 (struct qca8k_priv*) ;
 int FUNC_24 (struct qca8k_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_25(struct dsa_switch *VAR_20)
{
 struct qca8k_priv *VAR_21 = (struct qca8k_priv *)VAR_20->priv;
 int VAR_22, VAR_23, VAR_24 = -1;
 u32 VAR_25;


 if (!FUNC_10(VAR_20, 0)) {
  FUNC_15("port 0 is not the CPU port\n");
  return -VAR_0;
 }

 FUNC_13(&VAR_21->reg_mutex);


 VAR_21->regmap = FUNC_9(VAR_20->dev, ((void*)0), VAR_21,
     &VAR_19);
 if (FUNC_1(VAR_21->regmap))
  FUNC_16("regmap initialization failed");

 VAR_22 = FUNC_23(VAR_21);
 if (VAR_22)
  return VAR_22;


 VAR_24 = FUNC_14(VAR_20->ports[VAR_1].dn);
 if (VAR_24 < 0) {
  FUNC_15("Can't find phy-mode for master device\n");
  return VAR_24;
 }
 VAR_22 = FUNC_22(VAR_21, VAR_1, VAR_24);
 if (VAR_22 < 0)
  return VAR_22;


 VAR_25 = VAR_15 | VAR_16 |
        VAR_14 | VAR_13;
 FUNC_24(VAR_21, FUNC_7(VAR_1), VAR_25);
 FUNC_20(VAR_21, VAR_17,
        VAR_2);
 FUNC_19(VAR_21, VAR_1, 1);
 VAR_21->port_sts[VAR_1].enabled = 1;


 FUNC_18(VAR_21);


 FUNC_24(VAR_21, FUNC_6(VAR_1),
      VAR_8 << VAR_10 |
      VAR_8 << VAR_9);


 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++)
  FUNC_21(VAR_21, FUNC_3(VAR_23),
     VAR_12, 0);


 for (VAR_23 = 1; VAR_23 < VAR_7; VAR_23++)
  if (FUNC_11(VAR_20, VAR_23))
   FUNC_19(VAR_21, VAR_23, 0);


 FUNC_24(VAR_21, VAR_18,
      FUNC_0(0) << VAR_4 |
      FUNC_0(0) << VAR_3 |
      FUNC_0(0) << VAR_5 |
      FUNC_0(0) << VAR_6);


 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++) {

  if (FUNC_10(VAR_20, VAR_23)) {
   FUNC_21(VAR_21, FUNC_3(VAR_1),
      VAR_12, FUNC_12(VAR_20));
  }


  if (FUNC_11(VAR_20, VAR_23)) {
   int VAR_26 = 16 * (VAR_23 % 2);

   FUNC_21(VAR_21, FUNC_3(VAR_23),
      VAR_12,
      FUNC_0(VAR_1));


   FUNC_20(VAR_21, FUNC_3(VAR_23),
          VAR_11);




   FUNC_21(VAR_21, FUNC_2(VAR_23),
      0xffff << VAR_26, 1 << VAR_26);
   FUNC_24(VAR_21, FUNC_8(VAR_23),
        FUNC_4(1) |
        FUNC_5(1));
  }
 }


 FUNC_17(VAR_21);

 return 0;
}
