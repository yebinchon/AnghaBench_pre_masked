
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hnae3_ae_dev {scalar_t__ hw_err_reset_req; struct hclge_dev* priv; } ;
struct hclge_dev {int state; TYPE_1__* pdev; int hw; } ;
struct device {int dummy; } ;
typedef int pci_ers_result_t ;
struct TYPE_2__ {int revision; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct hclge_dev*) ;
 int FUNC_2 (struct hnae3_ae_dev*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

pci_ers_result_t FUNC_5(struct hnae3_ae_dev *VAR_8)
{
 struct hclge_dev *VAR_9 = VAR_8->priv;
 struct device *VAR_10 = &VAR_9->pdev->dev;
 u32 VAR_11;

 if (!FUNC_4(VAR_4, &VAR_9->state)) {
  FUNC_0(VAR_10,
   "Can't recover - RAS error reported during dev init\n");
  return VAR_6;
 }

 VAR_11 = FUNC_3(&VAR_9->hw, VAR_0);

 if (VAR_11 & VAR_1 ||
     VAR_11 & VAR_2)
  VAR_8->hw_err_reset_req = 0;
 else
  goto out;


 if (VAR_11 & VAR_1) {
  FUNC_0(VAR_10,
   "HNS Non-Fatal RAS error(status=0x%x) identified\n",
   VAR_11);
  FUNC_1(VAR_9);
 }


 if (VAR_9->pdev->revision >= 0x21 &&
     VAR_11 & VAR_2) {
  FUNC_0(VAR_10, "ROCEE Non-Fatal RAS error identified\n");
  FUNC_2(VAR_8);
 }

 if (FUNC_4(VAR_3, &VAR_9->state))
  goto out;

 if (VAR_8->hw_err_reset_req)
  return VAR_5;

out:
 return VAR_7;
}
