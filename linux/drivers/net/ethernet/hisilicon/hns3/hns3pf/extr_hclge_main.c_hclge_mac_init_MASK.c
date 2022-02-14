
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclge_mac {int user_fec_mode; scalar_t__ link; int autoneg; scalar_t__ support_autoneg; int duplex; int speed; } ;
struct TYPE_3__ {struct hclge_mac mac; } ;
struct hclge_dev {int support_sfp_query; TYPE_2__* pdev; int mps; TYPE_1__ hw; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclge_dev*) ;
 int FUNC_3 (struct hclge_dev*,int ,int ) ;
 int FUNC_4 (struct hclge_dev*,int ) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (struct hclge_dev*,int) ;
 int FUNC_7 (struct hclge_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct hclge_dev *VAR_2)
{
 struct hclge_mac *VAR_3 = &VAR_2->hw.mac;
 int VAR_4;

 VAR_2->support_sfp_query = 1;
 VAR_2->hw.mac.duplex = VAR_0;
 VAR_4 = FUNC_3(VAR_2, VAR_2->hw.mac.speed,
      VAR_2->hw.mac.duplex);
 if (VAR_4) {
  FUNC_1(&VAR_2->pdev->dev,
   "Config mac speed dup fail ret=%d\n", VAR_4);
  return VAR_4;
 }

 if (VAR_2->hw.mac.support_autoneg) {
  VAR_4 = FUNC_4(VAR_2, VAR_2->hw.mac.autoneg);
  if (VAR_4) {
   FUNC_1(&VAR_2->pdev->dev,
    "Config mac autoneg fail ret=%d\n", VAR_4);
   return VAR_4;
  }
 }

 VAR_3->link = 0;

 if (VAR_3->user_fec_mode & FUNC_0(VAR_1)) {
  VAR_4 = FUNC_6(VAR_2, VAR_3->user_fec_mode);
  if (VAR_4) {
   FUNC_1(&VAR_2->pdev->dev,
    "Fec mode init fail, ret = %d\n", VAR_4);
   return VAR_4;
  }
 }

 VAR_4 = FUNC_7(VAR_2, VAR_2->mps);
 if (VAR_4) {
  FUNC_1(&VAR_2->pdev->dev, "set mtu failed ret=%d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  FUNC_1(&VAR_2->pdev->dev,
   "allocate buffer fail, ret=%d\n", VAR_4);

 return VAR_4;
}
