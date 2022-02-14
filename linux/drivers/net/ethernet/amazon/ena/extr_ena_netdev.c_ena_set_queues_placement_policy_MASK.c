
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct ena_llq_configurations {int dummy; } ;
struct ena_com_dev {int supported_features; scalar_t__ tx_mem_queue_type; int mem_bar; } ;
struct ena_admin_feature_llq_desc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct ena_com_dev*,struct ena_admin_feature_llq_desc*,struct ena_llq_configurations*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_5,
        struct ena_com_dev *VAR_6,
        struct ena_admin_feature_llq_desc *VAR_7,
        struct ena_llq_configurations *VAR_8)
{
 bool VAR_9;
 int VAR_10;
 u32 VAR_11;

 VAR_11 = 1 << VAR_1;
 if (!(VAR_6->supported_features & VAR_11)) {
  FUNC_1(&VAR_5->dev,
   "LLQ is not supported Fallback to host mode policy.\n");
  VAR_6->tx_mem_queue_type = VAR_2;
  return 0;
 }

 VAR_9 = FUNC_6(VAR_5, VAR_4) & FUNC_0(VAR_3);

 VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8);
 if (FUNC_7(VAR_10)) {
  FUNC_1(&VAR_5->dev,
   "Failed to configure the device mode.  Fallback to host mode policy.\n");
  VAR_6->tx_mem_queue_type = VAR_2;
  return 0;
 }


 if (VAR_6->tx_mem_queue_type == VAR_2)
  return 0;

 if (!VAR_9) {
  FUNC_1(&VAR_5->dev,
   "ENA device does not expose LLQ bar. Fallback to host mode policy.\n");
  VAR_6->tx_mem_queue_type = VAR_2;
  return 0;
 }

 VAR_6->mem_bar = FUNC_2(&VAR_5->dev,
        FUNC_5(VAR_5, VAR_3),
        FUNC_4(VAR_5, VAR_3));

 if (!VAR_6->mem_bar)
  return -VAR_0;

 return 0;
}
