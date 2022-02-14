
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct iavf_hw {int dummy; } ;
struct TYPE_2__ {int minor; int major; } ;
struct iavf_adapter {scalar_t__ state; TYPE_1__ pf_version; struct iavf_hw hw; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct iavf_hw*) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (struct iavf_adapter*) ;
 int FUNC_5 (struct iavf_hw*) ;
 int FUNC_6 (struct iavf_adapter*) ;

__attribute__((used)) static int FUNC_7(struct iavf_adapter *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->pdev;
 struct iavf_hw *VAR_9 = &VAR_7->hw;
 int VAR_10 = -VAR_0;

 FUNC_0(VAR_7->state != VAR_5);

 if (!FUNC_2(VAR_9)) {
  FUNC_1(&VAR_8->dev, "Admin queue command never completed\n");
  FUNC_5(VAR_9);
  VAR_7->state = VAR_6;
  goto err;
 }


 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10) {
  if (VAR_10 == VAR_1)
   VAR_10 = FUNC_3(VAR_7);
  else
   FUNC_1(&VAR_8->dev, "Unsupported PF API version %d.%d, expected %d.%d\n",
    VAR_7->pf_version.major,
    VAR_7->pf_version.minor,
    VAR_2,
    VAR_3);
  goto err;
 }
 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "Unable to send config request (%d)\n",
   VAR_10);
  goto err;
 }
 VAR_7->state = VAR_4;

err:
 return VAR_10;
}
