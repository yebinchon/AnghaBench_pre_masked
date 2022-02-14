
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int dvsec_tl_pos; } ;
struct ocxl_fn {int link; TYPE_1__ config; } ;


 int FUNC_0 (struct ocxl_fn*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pci_dev*,TYPE_1__*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ,int *) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct ocxl_fn*,struct pci_dev*) ;
 int FUNC_8 (struct ocxl_fn*) ;

__attribute__((used)) static int FUNC_9(struct ocxl_fn *VAR_0, struct pci_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_1->dev, "pci_enable_device failed: %d\n", VAR_2);
  return VAR_2;
 }
 VAR_2 = FUNC_2(VAR_1, &VAR_0->config);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_7(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_8(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_1, 0, &VAR_0->link);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1, VAR_0->config.dvsec_tl_pos);
 if (VAR_2) {
  FUNC_4(VAR_1, VAR_0->link);
  return VAR_2;
 }
 return 0;
}
