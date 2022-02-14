
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; int dev; } ;
struct hclgevf_dev {int state; struct pci_dev* pdev; int last_reset_time; int reset_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct hclgevf_dev*) ;
 int FUNC_4 (struct hclgevf_dev*) ;
 int FUNC_5 (struct hclgevf_dev*) ;
 int FUNC_6 (struct hclgevf_dev*) ;
 int FUNC_7 (struct hclgevf_dev*,int) ;
 int FUNC_8 (struct hclgevf_dev*) ;
 int FUNC_9 (struct hclgevf_dev*) ;
 int FUNC_10 (struct hclgevf_dev*) ;
 int FUNC_11 (struct hclgevf_dev*) ;
 int FUNC_12 (struct hclgevf_dev*) ;
 int FUNC_13 (struct hclgevf_dev*) ;
 int FUNC_14 (struct hclgevf_dev*) ;
 int FUNC_15 (struct hclgevf_dev*) ;
 int FUNC_16 (struct hclgevf_dev*) ;
 int FUNC_17 (struct hclgevf_dev*) ;
 int FUNC_18 (struct hclgevf_dev*,int) ;
 int FUNC_19 (struct hclgevf_dev*) ;
 int FUNC_20 (struct hclgevf_dev*) ;
 int FUNC_21 (struct hclgevf_dev*) ;
 int VAR_3 ;
 int FUNC_22 (int ,int *) ;

__attribute__((used)) static int FUNC_23(struct hclgevf_dev *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pdev;
 int VAR_6;

 VAR_6 = FUNC_13(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "PCI initialization failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "Cmd queue init failed: %d\n", VAR_6);
  goto err_cmd_queue_init;
 }

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto err_cmd_init;


 VAR_6 = FUNC_15(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_4->pdev->dev,
   "Query vf status error, ret = %d.\n", VAR_6);
  goto err_cmd_init;
 }

 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "failed(%d) to init MSI/MSI-X\n", VAR_6);
  goto err_cmd_init;
 }

 FUNC_19(VAR_4);
 VAR_4->reset_level = VAR_2;

 VAR_6 = FUNC_11(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "failed(%d) to init Misc IRQ(vector0)\n",
   VAR_6);
  goto err_misc_irq_init;
 }

 FUNC_22(VAR_1, &VAR_4->state);

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "failed(%d) to fetch configuration\n", VAR_6);
  goto err_config;
 }

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "failed(%d) to allocate TQPs\n", VAR_6);
  goto err_config;
 }

 VAR_6 = FUNC_17(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "failed(%d) to set handle info\n", VAR_6);
  goto err_config;
 }

 VAR_6 = FUNC_7(VAR_4, 1);
 if (VAR_6)
  goto err_config;






 if (VAR_5->revision >= 0x21) {
  VAR_6 = FUNC_18(VAR_4, 1);
  if (VAR_6)
   goto err_config;
 }


 VAR_6 = FUNC_16(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_4->pdev->dev,
   "failed(%d) to initialize RSS\n", VAR_6);
  goto err_config;
 }

 VAR_6 = FUNC_10(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_4->pdev->dev,
   "failed(%d) to initialize VLAN config\n", VAR_6);
  goto err_config;
 }

 VAR_4->last_reset_time = VAR_3;
 FUNC_2(&VAR_4->pdev->dev, "finished initializing %s driver\n",
   VAR_0);

 return 0;

err_config:
 FUNC_12(VAR_4);
err_misc_irq_init:
 FUNC_20(VAR_4);
 FUNC_21(VAR_4);
err_cmd_init:
 FUNC_6(VAR_4);
err_cmd_queue_init:
 FUNC_14(VAR_4);
 FUNC_0(VAR_1, &VAR_4->state);
 return VAR_6;
}
