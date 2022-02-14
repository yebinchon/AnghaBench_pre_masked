
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cxl_ctx; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct cxl_context {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 struct cxl_context* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct cxl_context*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct cxl_context *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2) {
  if (VAR_2->status == VAR_0) {
   FUNC_2(&VAR_1->dev, "Default context started\n");
   return;
  }
  VAR_1->dev.archdata.cxl_ctx = ((void*)0);
  FUNC_1(VAR_2);
 }
}
