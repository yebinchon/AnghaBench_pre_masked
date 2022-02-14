
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pci_dev* pdev; } ;
struct qtnf_pcie_topaz_state {TYPE_2__* bda; TYPE_1__ base; } ;
struct pci_dev {int dev; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {int bda_bootstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct qtnf_pcie_topaz_state*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_6(struct qtnf_pcie_topaz_state *VAR_2,
    const char *VAR_3)
{
 const struct firmware *VAR_4;
 struct pci_dev *VAR_5 = VAR_2->base.pdev;
 int VAR_6;

 if (FUNC_3(&VAR_2->bda->bda_bootstate,
       VAR_0,
       VAR_1)) {
  FUNC_0("%s: card is not ready\n", VAR_3);
  return -1;
 }

 FUNC_1("starting firmware upload: %s\n", VAR_3);

 VAR_6 = FUNC_5(&VAR_4, VAR_3, &VAR_5->dev);
 if (VAR_6 < 0) {
  FUNC_0("%s: request_firmware error %d\n", VAR_3, VAR_6);
  return -1;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_4->data, VAR_4->size);
 FUNC_4(VAR_4);

 if (VAR_6)
  FUNC_0("%s: FW upload error\n", VAR_3);

 return VAR_6;
}
