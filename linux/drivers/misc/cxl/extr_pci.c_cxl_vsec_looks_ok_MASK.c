
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct cxl {int vsec_status; scalar_t__ ps_size; TYPE_1__* native; int slices; int caia_major; } ;
struct TYPE_2__ {scalar_t__ ps_off; int afu_desc_size; int afu_desc_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct cxl *VAR_5, struct pci_dev *VAR_6)
{
 if (VAR_5->vsec_status & VAR_0)
  return -VAR_2;

 if (VAR_5->vsec_status & VAR_1) {
  FUNC_1(&VAR_6->dev, "ABORTING: CXL requires unsupported features\n");
  return -VAR_3;
 }

 if (!FUNC_0(VAR_5)) {
  FUNC_2(&VAR_6->dev, "Ignoring card. PSL type is not supported (caia version: %d)\n",
    VAR_5->caia_major);
  return -VAR_4;
 }

 if (!VAR_5->slices) {


  FUNC_1(&VAR_6->dev, "ABORTING: Device has no AFUs\n");
  return -VAR_3;
 }

 if (!VAR_5->native->afu_desc_off || !VAR_5->native->afu_desc_size) {
  FUNC_1(&VAR_6->dev, "ABORTING: VSEC shows no AFU descriptors\n");
  return -VAR_3;
 }

 if (VAR_5->ps_size > FUNC_3(VAR_6) - VAR_5->native->ps_off) {
  FUNC_1(&VAR_6->dev, "ABORTING: Problem state size larger than "
       "available in BAR2: 0x%llx > 0x%llx\n",
    VAR_5->ps_size, FUNC_3(VAR_6) - VAR_5->native->ps_off);
  return -VAR_3;
 }

 return 0;
}
