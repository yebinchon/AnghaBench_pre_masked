
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int topo; struct pci_dev* pdev; } ;
struct amd_ntb_dev {int db_count; scalar_t__ db_valid_mask; TYPE_1__ ntb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct amd_ntb_dev*) ;
 int FUNC_2 (struct amd_ntb_dev*) ;
 int FUNC_3 (struct amd_ntb_dev*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct amd_ntb_dev *VAR_0)
{
 struct pci_dev *VAR_1;
 int VAR_2 = 0;

 VAR_1 = VAR_0->ntb.pdev;

 VAR_0->ntb.topo = FUNC_1(VAR_0);
 FUNC_4(&VAR_1->dev, "AMD NTB topo is %s\n",
  FUNC_6(VAR_0->ntb.topo));

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_5(&VAR_1->dev, "fail to init isr.\n");
  return VAR_2;
 }

 VAR_0->db_valid_mask = FUNC_0(VAR_0->db_count) - 1;

 return 0;
}
