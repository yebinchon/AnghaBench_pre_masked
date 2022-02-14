
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {void* asq_buf_size; void* arq_buf_size; void* num_asq_entries; void* num_arq_entries; } ;
struct iavf_hw {TYPE_1__ aq; } ;
struct iavf_adapter {scalar_t__ state; int flags; struct iavf_hw hw; struct pci_dev* pdev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct iavf_hw*) ;
 int FUNC_4 (struct iavf_hw*) ;
 int FUNC_5 (struct iavf_adapter*) ;
 int FUNC_6 (struct iavf_hw*) ;
 int FUNC_7 (struct iavf_hw*) ;

__attribute__((used)) static int FUNC_8(struct iavf_adapter *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev;
 struct iavf_hw *VAR_8 = &VAR_6->hw;
 int VAR_9;

 FUNC_0(VAR_6->state != VAR_5);


 VAR_6->flags &= ~VAR_1;
 VAR_6->flags &= ~VAR_2;
 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9) {
  FUNC_1(&VAR_7->dev, "Failed to set MAC type (%d)\n", VAR_9);
  goto err;
 }

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9) {
  FUNC_2(&VAR_7->dev, "Device is still in reset (%d), retrying\n",
    VAR_9);
  goto err;
 }
 VAR_8->aq.num_arq_entries = VAR_0;
 VAR_8->aq.num_asq_entries = VAR_0;
 VAR_8->aq.arq_buf_size = VAR_3;
 VAR_8->aq.asq_buf_size = VAR_3;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9) {
  FUNC_1(&VAR_7->dev, "Failed to init Admin Queue (%d)\n", VAR_9);
  goto err;
 }
 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9) {
  FUNC_1(&VAR_7->dev, "Unable to send to PF (%d)\n", VAR_9);
  FUNC_7(VAR_8);
  goto err;
 }
 VAR_6->state = VAR_4;
err:
 return VAR_9;
}
