
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int board_type; int cut_through; scalar_t__ port_type; int revision_id; } ;
struct TYPE_3__ {int * md_template; } ;
struct netxen_adapter {int driver_mismatch; scalar_t__ fw_version; scalar_t__ portnum; int msix_supported; int rss_supported; int max_rds_rings; scalar_t__ num_lro_rxd; TYPE_2__ ahw; int num_txd; int num_jumbo_rxd; int num_rxd; void* capabilities; struct pci_dev* pdev; TYPE_1__ mdump; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 void* FUNC_2 (struct netxen_adapter*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_17 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,int ,scalar_t__,scalar_t__,scalar_t__,char*) ;
 int FUNC_8 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int,char*) ;
 int FUNC_12 (struct netxen_adapter*,int,int*) ;
 int FUNC_13 (struct netxen_adapter*) ;
 int FUNC_14 (char*,int ,char*,char*,int ) ;
 int FUNC_15 (char*,char*) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_16(struct netxen_adapter *VAR_19)
{
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 char VAR_24[VAR_10];
 char VAR_25[32];
 int VAR_26, VAR_27, VAR_28, VAR_29;
 __le32 *VAR_30;
 struct pci_dev *VAR_31 = VAR_19->pdev;

 VAR_19->driver_mismatch = 0;

 VAR_30 = (__le32 *)&VAR_25;
 VAR_27 = VAR_15;
 for (VAR_26 = 0; VAR_26 < 8; VAR_26++) {
  VAR_29 = FUNC_12(VAR_19, VAR_27, &VAR_28);
  if (VAR_29) {
   FUNC_6(&VAR_31->dev, "error reading board info\n");
   VAR_19->driver_mismatch = 1;
   return;
  }
  VAR_30[VAR_26] = FUNC_5(VAR_28);
  VAR_27 += sizeof(u32);
 }

 VAR_20 = FUNC_2(VAR_19, VAR_7);
 VAR_21 = FUNC_2(VAR_19, VAR_8);
 VAR_22 = FUNC_2(VAR_19, VAR_9);
 VAR_23 = VAR_19->fw_version;
 VAR_19->fw_version = FUNC_1(VAR_20, VAR_21, VAR_22);


  if (FUNC_4(VAR_19->ahw.revision_id)) {
  if (VAR_19->mdump.md_template == ((void*)0) ||
    VAR_19->fw_version > VAR_23) {
   FUNC_9(VAR_19->mdump.md_template);
   VAR_19->mdump.md_template = ((void*)0);
   VAR_29 = FUNC_13(VAR_19);
   if (VAR_29)
    FUNC_6(&VAR_19->pdev->dev,
    "Failed to setup minidump rcode = %d\n", VAR_29);
  }
 }

 if (VAR_19->portnum == 0) {
  if (FUNC_11(VAR_19->ahw.board_type,
          VAR_24))
   FUNC_15(VAR_25, "Unknown");

  FUNC_14("%s: %s Board S/N %s  Chip rev 0x%x\n",
    FUNC_10(VAR_17),
    VAR_24, VAR_25, VAR_19->ahw.revision_id);
 }

 if (VAR_19->fw_version < FUNC_1(3, 4, 216)) {
  VAR_19->driver_mismatch = 1;
  FUNC_8(&VAR_31->dev, "firmware version %d.%d.%d unsupported\n",
    VAR_20, VAR_21, VAR_22);
  return;
 }

 if (FUNC_4(VAR_19->ahw.revision_id)) {
  VAR_26 = FUNC_2(VAR_19, VAR_14);
  VAR_19->ahw.cut_through = (VAR_26 & 0x8000) ? 1 : 0;
 }

 FUNC_7(&VAR_31->dev, "Driver v%s, firmware v%d.%d.%d [%s]\n",
   VAR_12, VAR_20, VAR_21, VAR_22,
   VAR_19->ahw.cut_through ? "cut-through" : "legacy");

 if (VAR_19->fw_version >= FUNC_1(4, 0, 222))
  VAR_19->capabilities = FUNC_2(VAR_19, VAR_0);

 if (VAR_19->ahw.port_type == VAR_13) {
  VAR_19->num_rxd = VAR_1;
  VAR_19->num_jumbo_rxd = VAR_4;
 } else if (VAR_19->ahw.port_type == VAR_11) {
  VAR_19->num_rxd = VAR_2;
  VAR_19->num_jumbo_rxd = VAR_5;
 }

 VAR_19->msix_supported = 0;
 if (FUNC_4(VAR_19->ahw.revision_id)) {
  VAR_19->msix_supported = !!VAR_18;
  VAR_19->rss_supported = !!VAR_18;
 } else {
  u32 VAR_32 = 0;
  FUNC_12(VAR_19,
    VAR_16, (int *)&VAR_32);
  VAR_32 = FUNC_0(VAR_32);

  if (VAR_32 >= FUNC_1(3, 4, 336)) {
   switch (VAR_19->ahw.board_type) {
   case 129:
   case 128:
    VAR_19->msix_supported = !!VAR_18;
    VAR_19->rss_supported = !!VAR_18;
    break;
   default:
    break;
   }
  }
 }

 VAR_19->num_txd = VAR_3;

 if (FUNC_3(VAR_19->ahw.revision_id)) {
  VAR_19->num_lro_rxd = VAR_6;
  VAR_19->max_rds_rings = 3;
 } else {
  VAR_19->num_lro_rxd = 0;
  VAR_19->max_rds_rings = 2;
 }
}
