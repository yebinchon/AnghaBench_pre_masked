
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int device; } ;
struct hl_device {scalar_t__ asic_type; int disabled; int dma_mask; int id; int id_control; struct pci_dev* pdev; int timeout_jiffies; scalar_t__ pldm; int reset_on_lockup; int major; } ;
typedef enum hl_asic_type { ____Placeholder_hl_asic_type } hl_asic_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,struct hl_device*,int,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct hl_device*) ;
 struct hl_device* FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int VAR_11 ;
 int FUNC_10 (struct hl_device*) ;
 int VAR_12 ;

int FUNC_11(struct hl_device **VAR_13, struct pci_dev *VAR_14,
  enum hl_asic_type VAR_15, int VAR_16)
{
 struct hl_device *VAR_17;
 int VAR_18, VAR_19, VAR_20 = 0;

 *VAR_13 = ((void*)0);

 VAR_17 = FUNC_5(sizeof(*VAR_17), VAR_5);
 if (!VAR_17)
  return -VAR_3;




 if (VAR_14) {
  VAR_17->asic_type = FUNC_1(VAR_14->device);
  if (VAR_17->asic_type == VAR_0) {
   FUNC_0(&VAR_14->dev, "Unsupported ASIC\n");
   VAR_18 = -VAR_2;
   goto free_hdev;
  }
 } else {
  VAR_17->asic_type = VAR_15;
 }

 VAR_17->major = VAR_10;
 VAR_17->reset_on_lockup = VAR_11;
 VAR_17->pldm = 0;

 FUNC_10(VAR_17);

 if (VAR_12)
  VAR_17->timeout_jiffies = FUNC_6(VAR_12 * 1000);
 else
  VAR_17->timeout_jiffies = VAR_7;

 VAR_17->disabled = 1;
 VAR_17->pdev = VAR_14;


 VAR_17->dma_mask = 32;

 FUNC_7(&VAR_9);




 VAR_19 = FUNC_2(&VAR_8, VAR_17, 0, VAR_6,
    VAR_5);

 if (VAR_19 >= 0)
  VAR_20 = FUNC_2(&VAR_8, VAR_17, VAR_19 + 1,
     VAR_19 + 2, VAR_5);

 FUNC_8(&VAR_9);

 if ((VAR_19 < 0) || (VAR_20 < 0)) {
  if ((VAR_19 == -VAR_4) || (VAR_20 == -VAR_4))
   FUNC_9("too many devices in the system\n");

  if (VAR_19 >= 0) {
   FUNC_7(&VAR_9);
   FUNC_3(&VAR_8, VAR_19);
   FUNC_8(&VAR_9);
  }

  VAR_18 = -VAR_1;
  goto free_hdev;
 }

 VAR_17->id = VAR_19;
 VAR_17->id_control = VAR_20;

 *VAR_13 = VAR_17;

 return 0;

free_hdev:
 FUNC_4(VAR_17);
 return VAR_18;
}
