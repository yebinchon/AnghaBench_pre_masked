
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int Flags; } ;
struct TYPE_9__ {int Word; } ;
struct TYPE_11__ {int ProtocolFlags; int IOCCapabilities; TYPE_3__ FWVersion; } ;
struct TYPE_8__ {int ChipName; } ;
struct TYPE_7__ {int BiosVersion; } ;
struct MPT3SAS_ADAPTER {TYPE_6__ iounit_pg1; TYPE_5__ facts; int hide_ir_msg; TYPE_4__* pdev; TYPE_2__ manu_pg0; TYPE_1__ bios_pg3; } ;
struct TYPE_10__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct MPT3SAS_ADAPTER *VAR_13)
{
 int VAR_14 = 0;
 char VAR_15[16];
 u32 VAR_16;
 u32 VAR_17;

 VAR_17 = FUNC_2(VAR_13->bios_pg3.BiosVersion);
 FUNC_5(VAR_15, VAR_13->manu_pg0.ChipName, 16);
 FUNC_1(VAR_13, "%s: FWVersion(%02d.%02d.%02d.%02d), ChipRevision(0x%02x), BiosVersion(%02d.%02d.%02d.%02d)\n",
   VAR_15,
   (VAR_13->facts.FWVersion.Word & 0xFF000000) >> 24,
   (VAR_13->facts.FWVersion.Word & 0x00FF0000) >> 16,
   (VAR_13->facts.FWVersion.Word & 0x0000FF00) >> 8,
   VAR_13->facts.FWVersion.Word & 0x000000FF,
   VAR_13->pdev->revision,
   (VAR_17 & 0xFF000000) >> 24,
   (VAR_17 & 0x00FF0000) >> 16,
   (VAR_17 & 0x0000FF00) >> 8,
   VAR_17 & 0x000000FF);

 FUNC_0(VAR_13);

 if (VAR_13->facts.ProtocolFlags & VAR_9) {
  FUNC_4("%sNVMe", VAR_14 ? "," : "");
  VAR_14++;
 }

 FUNC_1(VAR_13, "Protocol=(");

 if (VAR_13->facts.ProtocolFlags & VAR_10) {
  FUNC_3("Initiator");
  VAR_14++;
 }

 if (VAR_13->facts.ProtocolFlags & VAR_11) {
  FUNC_3("%sTarget", VAR_14 ? "," : "");
  VAR_14++;
 }

 VAR_14 = 0;
 FUNC_3("), Capabilities=(");

 if (!VAR_13->hide_ir_msg) {
  if (VAR_13->facts.IOCCapabilities &
      VAR_4) {
   FUNC_3("Raid");
   VAR_14++;
  }
 }

 if (VAR_13->facts.IOCCapabilities & VAR_8) {
  FUNC_3("%sTLR", VAR_14 ? "," : "");
  VAR_14++;
 }

 if (VAR_13->facts.IOCCapabilities & VAR_5) {
  FUNC_3("%sMulticast", VAR_14 ? "," : "");
  VAR_14++;
 }

 if (VAR_13->facts.IOCCapabilities &
     VAR_0) {
  FUNC_3("%sBIDI Target", VAR_14 ? "," : "");
  VAR_14++;
 }

 if (VAR_13->facts.IOCCapabilities & VAR_2) {
  FUNC_3("%sEEDP", VAR_14 ? "," : "");
  VAR_14++;
 }

 if (VAR_13->facts.IOCCapabilities &
     VAR_6) {
  FUNC_3("%sSnapshot Buffer", VAR_14 ? "," : "");
  VAR_14++;
 }

 if (VAR_13->facts.IOCCapabilities &
     VAR_1) {
  FUNC_3("%sDiag Trace Buffer", VAR_14 ? "," : "");
  VAR_14++;
 }

 if (VAR_13->facts.IOCCapabilities &
     VAR_3) {
  FUNC_3("%sDiag Extended Buffer", VAR_14 ? "," : "");
  VAR_14++;
 }

 if (VAR_13->facts.IOCCapabilities &
     VAR_7) {
  FUNC_3("%sTask Set Full", VAR_14 ? "," : "");
  VAR_14++;
 }

 VAR_16 = FUNC_2(VAR_13->iounit_pg1.Flags);
 if (!(VAR_16 & VAR_12)) {
  FUNC_3("%sNCQ", VAR_14 ? "," : "");
  VAR_14++;
 }

 FUNC_3(")\n");
}
