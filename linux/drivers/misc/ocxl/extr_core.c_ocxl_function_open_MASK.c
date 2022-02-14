
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ max_afu_index; } ;
struct ocxl_fn {TYPE_1__ config; } ;


 int VAR_0 ;
 struct ocxl_fn* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocxl_fn*) ;
 scalar_t__ FUNC_2 (struct ocxl_fn*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct pci_dev*,struct ocxl_fn*,scalar_t__) ;
 struct ocxl_fn* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,TYPE_1__*,scalar_t__) ;
 int FUNC_8 () ;

struct ocxl_fn *FUNC_9(struct pci_dev *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 u8 VAR_4;
 struct ocxl_fn *VAR_5;

 if (!FUNC_8()) {
  FUNC_3(&VAR_1->dev, "Unsupported memory model (hash)\n");
  return FUNC_0(-VAR_0);
 }

 VAR_5 = FUNC_6(VAR_1);
 if (FUNC_1(VAR_5)) {
  FUNC_3(&VAR_1->dev, "function init failed: %li\n",
   FUNC_2(VAR_5));
  return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 <= VAR_5->config.max_afu_index; VAR_4++) {
  VAR_2 = FUNC_7(VAR_1, &VAR_5->config, VAR_4);
  if (VAR_2 > 0) {
   VAR_2 = FUNC_5(VAR_1, VAR_5, VAR_4);
   if (VAR_2) {
    FUNC_3(&VAR_1->dev,
     "Can't initialize AFU index %d\n", VAR_4);
    continue;
   }
   VAR_3++;
  }
 }
 FUNC_4(&VAR_1->dev, "%d AFU(s) configured\n", VAR_3);
 return VAR_5;
}
