
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct ocxl_fn_config {int max_pasid_log; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2, struct ocxl_fn_config *VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_5) {




  FUNC_1(&VAR_2->dev, "Function doesn't require any PASID\n");
  VAR_3->max_pasid_log = -1;
  goto out;
 }
 FUNC_3(VAR_2, VAR_5 + VAR_1, &VAR_4);
 VAR_3->max_pasid_log = FUNC_0(VAR_4, 8, 12);

out:
 FUNC_1(&VAR_2->dev, "PASID capability:\n");
 FUNC_1(&VAR_2->dev, "  Max PASID log = %d\n", VAR_3->max_pasid_log);
}
