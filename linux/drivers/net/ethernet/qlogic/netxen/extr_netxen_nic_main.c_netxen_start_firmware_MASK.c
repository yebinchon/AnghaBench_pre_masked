
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ port_type; int revision_id; } ;
struct netxen_adapter {scalar_t__ need_fw_reset; TYPE_1__ ahw; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct netxen_adapter*,int ) ;
 int FUNC_2 (struct netxen_adapter*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct netxen_adapter*) ;
 int FUNC_8 (struct netxen_adapter*,int) ;
 int FUNC_9 (struct netxen_adapter*) ;
 int FUNC_10 (struct netxen_adapter*) ;
 int FUNC_11 (struct netxen_adapter*) ;
 int FUNC_12 (struct netxen_adapter*) ;
 int FUNC_13 (struct netxen_adapter*) ;
 int FUNC_14 (struct netxen_adapter*) ;
 int FUNC_15 (struct netxen_adapter*,int ) ;
 int FUNC_16 (struct netxen_adapter*) ;
 int FUNC_17 (struct netxen_adapter*) ;
 int FUNC_18 (struct netxen_adapter*) ;
 int FUNC_19 (struct netxen_adapter*) ;
 int FUNC_20 (struct netxen_adapter*) ;
 int FUNC_21 (struct netxen_adapter*) ;

__attribute__((used)) static int
FUNC_22(struct netxen_adapter *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 struct pci_dev *VAR_17 = VAR_13->pdev;


 VAR_15 = FUNC_20(VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_7(VAR_13);

 if (VAR_15 < 0)
  return VAR_15;

 if (!VAR_15)
  goto wait_init;

 VAR_16 = FUNC_1(VAR_13, FUNC_0(0x1fc));

 VAR_15 = FUNC_8(VAR_13, VAR_16);
 if (VAR_15) {
  FUNC_5(&VAR_17->dev, "error in init HW init sequence\n");
  return VAR_15;
 }

 FUNC_18(VAR_13);

 VAR_15 = FUNC_13(VAR_13);
 if (VAR_15 < 0)
  goto err_out;
 if (VAR_15 == 0)
  goto pcie_strap_init;

 if (VAR_16 != 0x55555555) {
  FUNC_2(VAR_13, VAR_0, 0);
  FUNC_16(VAR_13);
  FUNC_6(1);
 }

 FUNC_2(VAR_13, VAR_1, 0x55555555);
 FUNC_2(VAR_13, VAR_6, 0);
 FUNC_2(VAR_13, VAR_7, 0);

 if (FUNC_4(VAR_13->ahw.revision_id))
  FUNC_19(VAR_13);

 VAR_15 = FUNC_12(VAR_13);
 if (VAR_15)
  goto err_out;

 FUNC_17(VAR_13);

 if (FUNC_3(VAR_13->ahw.revision_id)) {


  VAR_14 = 0x7654;
  if (VAR_13->ahw.port_type == VAR_5)
   VAR_14 |= 0x0f000000;
  FUNC_2(VAR_13, VAR_3, VAR_14);

 }

 VAR_15 = FUNC_11(VAR_13);
 if (VAR_15)
  goto err_out;




 VAR_14 = (VAR_10 << 16)
  | ((VAR_11 << 8))
  | (VAR_12);
 FUNC_2(VAR_13, VAR_2, VAR_14);

pcie_strap_init:
 if (FUNC_4(VAR_13->ahw.revision_id))
  FUNC_14(VAR_13);

wait_init:

 VAR_15 = FUNC_15(VAR_13, VAR_4);
 if (VAR_15) {
  FUNC_10(VAR_13);
  goto err_out;
 }

 FUNC_2(VAR_13, VAR_8, VAR_9);

 FUNC_21(VAR_13);

 FUNC_9(VAR_13);

 VAR_13->need_fw_reset = 0;



err_out:
 FUNC_17(VAR_13);
 return VAR_15;
}
