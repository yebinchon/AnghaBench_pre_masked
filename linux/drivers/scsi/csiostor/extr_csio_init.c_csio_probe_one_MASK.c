
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int dev; } ;
struct csio_lnode {int portid; } ;
struct csio_hw {int num_pports; int lock; TYPE_1__* pport; int fwrev; int fwrev_str; int flags; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct csio_hw* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct csio_hw*) ;
 int FUNC_6 (struct csio_hw*) ;
 int FUNC_7 (struct csio_hw*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct csio_lnode*) ;
 scalar_t__ FUNC_11 (struct csio_lnode*) ;
 int FUNC_12 (struct csio_hw*) ;
 int FUNC_13 (struct csio_hw*,int ) ;
 int FUNC_14 (struct csio_hw*) ;
 int FUNC_15 (struct pci_dev*,int*) ;
 int FUNC_16 (struct pci_dev*,int*) ;
 struct csio_lnode* FUNC_17 (struct csio_hw*,int *,int,int *) ;
 int FUNC_18 (int *,char*,...) ;
 int FUNC_19 (struct pci_dev*,struct csio_hw*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_24(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 struct csio_hw *VAR_9;
 struct csio_lnode *VAR_10;


 if (!FUNC_8((VAR_4->device & VAR_1)) &&
     !FUNC_9((VAR_4->device & VAR_1)))
  return -VAR_3;

 VAR_6 = FUNC_16(VAR_4, &VAR_7);
 if (VAR_6)
  goto err;

 VAR_9 = FUNC_4(VAR_4);
 if (!VAR_9) {
  VAR_6 = -VAR_3;
  goto err_pci_exit;
 }

 if (!FUNC_20(VAR_4))
  VAR_9->flags |= VAR_0;

 FUNC_19(VAR_4, VAR_9);

 VAR_6 = FUNC_6(VAR_9);
 if (VAR_6) {
  if (VAR_6 == -VAR_2) {
   FUNC_18(&VAR_4->dev,
    "Failed to start FW, continuing in debug mode.\n");
   return 0;
  }
  goto err_lnode_exit;
 }

 FUNC_23(VAR_9->fwrev_str, "%u.%u.%u.%u\n",
      FUNC_1(VAR_9->fwrev),
      FUNC_3(VAR_9->fwrev),
      FUNC_2(VAR_9->fwrev),
      FUNC_0(VAR_9->fwrev));

 for (VAR_8 = 0; VAR_8 < VAR_9->num_pports; VAR_8++) {
  VAR_10 = FUNC_17(VAR_9, &VAR_4->dev, 1, ((void*)0));
  if (!VAR_10) {
   VAR_6 = -VAR_3;
   break;
  }

  VAR_10->portid = VAR_9->pport[VAR_8].portid;

  FUNC_21(&VAR_9->lock);
  if (FUNC_11(VAR_10) != 0)
   VAR_6 = -VAR_3;
  FUNC_22(&VAR_9->lock);

  if (VAR_6)
   break;

  FUNC_10(VAR_10);
 }

 if (VAR_6)
  goto err_lnode_exit;

 return 0;

err_lnode_exit:
 FUNC_12(VAR_9);
 FUNC_21(&VAR_9->lock);
 FUNC_7(VAR_9);
 FUNC_22(&VAR_9->lock);
 FUNC_14(VAR_9);
 FUNC_13(VAR_9, 0);
 FUNC_5(VAR_9);
err_pci_exit:
 FUNC_15(VAR_4, &VAR_7);
err:
 FUNC_18(&VAR_4->dev, "probe of device failed: %d\n", VAR_6);
 return VAR_6;
}
