
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mii_bus {struct hclge_dev* priv; } ;
struct hclge_mdio_cfg_cmd {int data_wr; int ctrl_bit; int phyad; int phyid; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct mii_bus *VAR_12, int VAR_13, int VAR_14,
       u16 VAR_15)
{
 struct hclge_mdio_cfg_cmd *VAR_16;
 struct hclge_dev *VAR_17 = VAR_12->priv;
 struct hclge_desc VAR_18;
 int VAR_19;

 if (FUNC_6(VAR_11, &VAR_17->state))
  return 0;

 FUNC_3(&VAR_18, VAR_10, 0);

 VAR_16 = (struct hclge_mdio_cfg_cmd *)VAR_18.data;

 FUNC_5(VAR_16->phyid, VAR_6,
   VAR_7, (u32)VAR_13);
 FUNC_5(VAR_16->phyad, VAR_8,
   VAR_9, (u32)VAR_14);

 FUNC_4(VAR_16->ctrl_bit, VAR_3, 1);
 FUNC_5(VAR_16->ctrl_bit, VAR_4,
   VAR_5, 1);
 FUNC_5(VAR_16->ctrl_bit, VAR_1,
   VAR_2, VAR_0);

 VAR_16->data_wr = FUNC_0(VAR_15);

 VAR_19 = FUNC_2(&VAR_17->hw, &VAR_18, 1);
 if (VAR_19) {
  FUNC_1(&VAR_17->pdev->dev,
   "mdio write fail when sending cmd, status is %d.\n",
   VAR_19);
  return VAR_19;
 }

 return 0;
}
