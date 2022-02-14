
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fwnode; int pd_transmit; int set_roles; int set_pd_rx; int start_toggling; int set_current_limit; int set_vconn; int set_polarity; int get_cc; int set_cc; int set_vbus; int get_vbus; int init; } ;
struct wcove_typec {TYPE_2__ tcpc; int tcpm; TYPE_1__* dev; int guid; int regmap; int lock; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct intel_soc_pmic {int irq_chip_data_chgr; int regmap; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct intel_soc_pmic* FUNC_5 (int ) ;
 struct wcove_typec* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int *,int ,int ,char*,struct wcove_typec*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct wcove_typec*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_16 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
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

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_19)
{
 struct intel_soc_pmic *VAR_20 = FUNC_5(VAR_19->dev.parent);
 struct wcove_typec *VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_21 = FUNC_6(&VAR_19->dev, sizeof(*VAR_21), VAR_2);
 if (!VAR_21)
  return -VAR_1;

 FUNC_11(&VAR_21->lock);
 VAR_21->dev = &VAR_19->dev;
 VAR_21->regmap = VAR_20->regmap;

 VAR_22 = FUNC_12(VAR_19, 0);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_14(VAR_20->irq_chip_data_chgr, VAR_22);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_23 = FUNC_10(VAR_4, &VAR_21->guid);
 if (VAR_23)
  return VAR_23;

 if (!FUNC_3(FUNC_0(&VAR_19->dev), &VAR_21->guid, 0, 0x1f)) {
  FUNC_4(&VAR_19->dev, "Missing _DSM functions\n");
  return -VAR_0;
 }

 VAR_21->tcpc.init = VAR_7;
 VAR_21->tcpc.get_vbus = VAR_6;
 VAR_21->tcpc.set_vbus = VAR_15;
 VAR_21->tcpc.set_cc = VAR_10;
 VAR_21->tcpc.get_cc = VAR_5;
 VAR_21->tcpc.set_polarity = VAR_13;
 VAR_21->tcpc.set_vconn = VAR_16;
 VAR_21->tcpc.set_current_limit = VAR_11;
 VAR_21->tcpc.start_toggling = VAR_17;

 VAR_21->tcpc.set_pd_rx = VAR_12;
 VAR_21->tcpc.set_roles = VAR_14;
 VAR_21->tcpc.pd_transmit = VAR_8;

 VAR_21->tcpc.fwnode = FUNC_8(VAR_9, ((void*)0));
 if (FUNC_1(VAR_21->tcpc.fwnode))
  return FUNC_2(VAR_21->tcpc.fwnode);

 VAR_21->tcpm = FUNC_15(VAR_21->dev, &VAR_21->tcpc);
 if (FUNC_1(VAR_21->tcpm)) {
  FUNC_9(VAR_21->tcpc.fwnode);
  return FUNC_2(VAR_21->tcpm);
 }

 VAR_23 = FUNC_7(&VAR_19->dev, VAR_22, ((void*)0),
     VAR_18, VAR_3,
     "wcove_typec", VAR_21);
 if (VAR_23) {
  FUNC_16(VAR_21->tcpm);
  FUNC_9(VAR_21->tcpc.fwnode);
  return VAR_23;
 }

 FUNC_13(VAR_19, VAR_21);
 return 0;
}
