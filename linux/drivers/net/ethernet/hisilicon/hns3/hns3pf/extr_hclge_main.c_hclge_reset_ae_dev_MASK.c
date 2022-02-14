
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hnae3_ae_dev {struct pci_dev* pdev; struct hclge_dev* priv; } ;
struct hclge_dev {scalar_t__ roce_client; int vf_vlan_full; int vlan_table; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct hclge_dev*) ;
 int FUNC_3 (struct hclge_dev*,int) ;
 int FUNC_4 (struct hclge_dev*,int) ;
 int FUNC_5 (struct hclge_dev*,int) ;
 int FUNC_6 (struct hclge_dev*,int ,int ) ;
 int FUNC_7 (struct hclge_dev*) ;
 int FUNC_8 (struct hclge_dev*) ;
 int FUNC_9 (struct hclge_dev*) ;
 int FUNC_10 (struct hclge_dev*) ;
 int FUNC_11 (struct hclge_dev*) ;
 int FUNC_12 (struct hclge_dev*) ;
 int FUNC_13 (struct hclge_dev*) ;
 int FUNC_14 (struct hclge_dev*) ;
 int FUNC_15 (struct hclge_dev*,int) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(struct hnae3_ae_dev *VAR_4)
{
 struct hclge_dev *VAR_5 = VAR_4->priv;
 struct pci_dev *VAR_6 = VAR_4->pdev;
 int VAR_7;

 FUNC_17(VAR_1, &VAR_5->state);

 FUNC_14(VAR_5);
 FUNC_16(VAR_5->vlan_table, 0, sizeof(VAR_5->vlan_table));
 FUNC_16(VAR_5->vf_vlan_full, 0, sizeof(VAR_5->vf_vlan_full));

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "Cmd queue init failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_10(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "Map tqp error, ret = %d.\n", VAR_7);
  return VAR_7;
 }

 FUNC_11(VAR_5);

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "Mac init error, ret = %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_6(VAR_5, VAR_3, VAR_2);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "Enable tso fail, ret =%d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_5, 1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "VLAN init fail, ret =%d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_15(VAR_5, 1);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "tm init hw fail, ret =%d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_13(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "Rss init fail, ret =%d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "fd table init fail, ret=%d\n", VAR_7);
  return VAR_7;
 }




 VAR_7 = FUNC_4(VAR_5, 1);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev,
   "fail(%d) to re-enable NIC hw error interrupts\n",
   VAR_7);
  return VAR_7;
 }

 if (VAR_5->roce_client) {
  VAR_7 = FUNC_5(VAR_5, 1);
  if (VAR_7) {
   FUNC_0(&VAR_6->dev,
    "fail(%d) to re-enable roce ras interrupts\n",
    VAR_7);
   return VAR_7;
  }
 }

 FUNC_12(VAR_5);

 FUNC_1(&VAR_6->dev, "Reset done, %s driver initialization finished.\n",
   VAR_0);

 return 0;
}
