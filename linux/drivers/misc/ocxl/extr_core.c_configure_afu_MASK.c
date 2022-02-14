
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ocxl_afu {int config; TYPE_1__* fn; } ;
struct TYPE_2__ {int config; } ;


 int FUNC_0 (struct ocxl_afu*) ;
 int FUNC_1 (struct ocxl_afu*) ;
 int FUNC_2 (struct ocxl_afu*) ;
 int FUNC_3 (struct pci_dev*,int *,int *,int ) ;
 int FUNC_4 (struct ocxl_afu*) ;
 int FUNC_5 (struct ocxl_afu*) ;

__attribute__((used)) static int FUNC_6(struct ocxl_afu *VAR_0, u8 VAR_1, struct pci_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2, &VAR_0->fn->config, &VAR_0->config, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  goto err_free_actag;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  goto err_free_pasid;

 return 0;

err_free_pasid:
 FUNC_5(VAR_0);
err_free_actag:
 FUNC_4(VAR_0);
 return VAR_3;
}
