
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int of_node; } ;
struct ulpi {TYPE_2__ dev; } ;
struct reset_control {int dummy; } ;
typedef struct reset_control regulator ;
struct TYPE_11__ {int notifier_call; } ;
struct qcom_usb_hs_phy {struct reset_control* phy; TYPE_1__ vbus_notify; struct reset_control* vbus_edev; struct reset_control* reset; struct reset_control* v3p3; struct reset_control* v1p8; struct reset_control* sleep_clk; struct reset_control* ref_clk; TYPE_8__* init_seq; struct ulpi* ulpi; } ;
struct phy_provider {int dummy; } ;
typedef struct reset_control clk ;
struct TYPE_13__ {scalar_t__ val; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int FUNC_2 (struct phy_provider*) ;
 struct reset_control* FUNC_3 (TYPE_2__*,char*) ;
 TYPE_8__* FUNC_4 (TYPE_2__*,int,int,int ) ;
 struct qcom_usb_hs_phy* FUNC_5 (TYPE_2__*,int,int ) ;
 struct phy_provider* FUNC_6 (TYPE_2__*,int ) ;
 struct reset_control* FUNC_7 (TYPE_2__*,int ,int *) ;
 struct reset_control* FUNC_8 (TYPE_2__*,char*) ;
 struct reset_control* FUNC_9 (TYPE_2__*,char*) ;
 struct reset_control* FUNC_10 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int *,int) ;
 int FUNC_13 (struct reset_control*,struct qcom_usb_hs_phy*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (struct ulpi*,struct qcom_usb_hs_phy*) ;

__attribute__((used)) static int FUNC_15(struct ulpi *VAR_7)
{
 struct qcom_usb_hs_phy *VAR_8;
 struct phy_provider *VAR_9;
 struct clk *VAR_10;
 struct regulator *VAR_11;
 struct reset_control *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = FUNC_5(&VAR_7->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;
 FUNC_14(VAR_7, VAR_8);
 VAR_8->ulpi = VAR_7;

 VAR_13 = FUNC_11(VAR_7->dev.of_node, "qcom,init-seq");
 if (VAR_13 < 0)
  VAR_13 = 0;
 VAR_8->init_seq = FUNC_4(&VAR_7->dev, (VAR_13 / 2) + 1,
        sizeof(*VAR_8->init_seq), VAR_3);
 if (!VAR_8->init_seq)
  return -VAR_1;
 VAR_14 = FUNC_12(VAR_7->dev.of_node, "qcom,init-seq",
     (u8 *)VAR_8->init_seq, VAR_13);
 if (VAR_14 && VAR_13)
  return VAR_14;

 VAR_8->init_seq[VAR_13 / 2].addr = VAR_8->init_seq[VAR_13 / 2].val = 0;

 VAR_8->ref_clk = VAR_10 = FUNC_3(&VAR_7->dev, "ref");
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_8->sleep_clk = VAR_10 = FUNC_3(&VAR_7->dev, "sleep");
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_8->v1p8 = VAR_11 = FUNC_8(&VAR_7->dev, "v1p8");
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_8->v3p3 = VAR_11 = FUNC_8(&VAR_7->dev, "v3p3");
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_8->reset = VAR_12 = FUNC_9(&VAR_7->dev, "por");
 if (FUNC_0(VAR_12)) {
  if (FUNC_1(VAR_12) == -VAR_2)
   return FUNC_1(VAR_12);
  VAR_8->reset = ((void*)0);
 }

 VAR_8->phy = FUNC_7(&VAR_7->dev, VAR_7->dev.of_node,
        &VAR_5);
 if (FUNC_0(VAR_8->phy))
  return FUNC_1(VAR_8->phy);

 VAR_8->vbus_edev = FUNC_10(&VAR_7->dev, 0);
 if (FUNC_0(VAR_8->vbus_edev)) {
  if (FUNC_1(VAR_8->vbus_edev) != -VAR_0)
   return FUNC_1(VAR_8->vbus_edev);
  VAR_8->vbus_edev = ((void*)0);
 }

 VAR_8->vbus_notify.notifier_call = VAR_6;
 FUNC_13(VAR_8->phy, VAR_8);

 VAR_9 = FUNC_6(&VAR_7->dev, VAR_4);
 return FUNC_2(VAR_9);
}
