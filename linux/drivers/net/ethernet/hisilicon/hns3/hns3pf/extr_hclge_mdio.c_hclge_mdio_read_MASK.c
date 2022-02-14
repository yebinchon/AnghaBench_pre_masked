
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mii_bus {struct hclge_dev* priv; } ;
struct hclge_mdio_cfg_cmd {int data_rd; int sta; int ctrl_bit; int phyad; int phyid; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; int state; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mii_bus *VAR_14, int VAR_15, int VAR_16)
{
 struct hclge_mdio_cfg_cmd *VAR_17;
 struct hclge_dev *VAR_18 = VAR_14->priv;
 struct hclge_desc VAR_19;
 int VAR_20;

 if (FUNC_7(VAR_13, &VAR_18->state))
  return 0;

 FUNC_2(&VAR_19, VAR_12, 1);

 VAR_17 = (struct hclge_mdio_cfg_cmd *)VAR_19.data;

 FUNC_5(VAR_17->phyid, VAR_7,
   VAR_8, (u32)VAR_15);
 FUNC_5(VAR_17->phyad, VAR_9,
   VAR_10, (u32)VAR_16);

 FUNC_4(VAR_17->ctrl_bit, VAR_4, 1);
 FUNC_5(VAR_17->ctrl_bit, VAR_5,
   VAR_6, 1);
 FUNC_5(VAR_17->ctrl_bit, VAR_2,
   VAR_3, VAR_1);


 VAR_20 = FUNC_1(&VAR_18->hw, &VAR_19, 1);
 if (VAR_20) {
  FUNC_0(&VAR_18->pdev->dev,
   "mdio read fail when get data, status is %d.\n",
   VAR_20);
  return VAR_20;
 }

 if (FUNC_3(FUNC_6(VAR_17->sta), VAR_11)) {
  FUNC_0(&VAR_18->pdev->dev, "mdio read data error\n");
  return -VAR_0;
 }

 return FUNC_6(VAR_17->data_rd);
}
