
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cxl_context {int kernelapi; } ;
struct cxl_afu {int dummy; } ;


 int VAR_0 ;
 struct cxl_context* FUNC_0 (struct cxl_afu*) ;
 struct cxl_context* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct cxl_afu*) ;
 struct cxl_context* FUNC_3 () ;
 int FUNC_4 (struct cxl_context*,struct cxl_afu*,int) ;
 struct cxl_afu* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct cxl_context*) ;

struct cxl_context *FUNC_7(struct pci_dev *VAR_1)
{
 struct cxl_afu *VAR_2;
 struct cxl_context *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_5(VAR_1);
 if (FUNC_2(VAR_2))
  return FUNC_0(VAR_2);

 VAR_3 = FUNC_3();
 if (!VAR_3)
  return FUNC_1(-VAR_0);

 VAR_3->kernelapi = 1;


 VAR_4 = FUNC_4(VAR_3, VAR_2, 0);
 if (VAR_4)
  goto err_ctx;

 return VAR_3;

err_ctx:
 FUNC_6(VAR_3);
 return FUNC_1(VAR_4);
}
