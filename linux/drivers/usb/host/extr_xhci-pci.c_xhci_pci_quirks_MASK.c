
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int quirks; int hci_version; int limit_active_eps; } ;
struct pci_dev {scalar_t__ vendor; int device; int revision; } ;
struct device {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 struct pci_dev* FUNC_0 (struct device*) ;
 int VAR_65 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct xhci_hcd*,int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_66, struct xhci_hcd *VAR_67)
{
 struct pci_dev *VAR_68 = FUNC_0(VAR_66);


 if (VAR_68->vendor == VAR_31 &&
   (VAR_68->device == VAR_8 ||
    VAR_68->device == VAR_7)) {
  if (VAR_68->device == VAR_8 &&
    VAR_68->revision == 0x0) {
   VAR_67->quirks |= VAR_52;
   FUNC_2(VAR_67, VAR_65,
    "QUIRK: Fresco Logic xHC needs configure"
    " endpoint cmd after reset endpoint");
  }
  if (VAR_68->device == VAR_8 &&
    VAR_68->revision == 0x4) {
   VAR_67->quirks |= VAR_55;
   FUNC_2(VAR_67, VAR_65,
    "QUIRK: Fresco Logic xHC revision %u"
    "must be suspended extra slowly",
    VAR_68->revision);
  }
  if (VAR_68->device == VAR_8)
   VAR_67->quirks |= VAR_42;




  VAR_67->quirks |= VAR_41;
  FUNC_2(VAR_67, VAR_65,
    "QUIRK: Fresco Logic revision %u "
    "has broken MSI implementation",
    VAR_68->revision);
  VAR_67->quirks |= VAR_62;
 }

 if (VAR_68->vendor == VAR_31 &&
   VAR_68->device == VAR_6)
  VAR_67->quirks |= VAR_42;

 if (VAR_68->vendor == VAR_33)
  VAR_67->quirks |= VAR_50;

 if (VAR_68->vendor == VAR_26 && VAR_67->hci_version == 0x96)
  VAR_67->quirks |= VAR_37;


 if (VAR_68->vendor == VAR_26 && FUNC_1())
  VAR_67->quirks |= VAR_38;

 if (VAR_68->vendor == VAR_26 &&
  (VAR_68->device == 0x15e0 ||
   VAR_68->device == 0x15e1 ||
   VAR_68->device == 0x43bb))
  VAR_67->quirks |= VAR_60;

 if (VAR_68->vendor == VAR_26 &&
     (VAR_68->device == 0x15e0 || VAR_68->device == 0x15e1))
  VAR_67->quirks |= VAR_56;

 if (VAR_68->vendor == VAR_26)
  VAR_67->quirks |= VAR_62;

 if ((VAR_68->vendor == VAR_26) &&
  ((VAR_68->device == VAR_3) ||
  (VAR_68->device == VAR_2) ||
  (VAR_68->device == VAR_1) ||
  (VAR_68->device == VAR_0)))
  VAR_67->quirks |= VAR_63;

 if (VAR_68->vendor == VAR_32) {
  VAR_67->quirks |= VAR_48;
  VAR_67->quirks |= VAR_45;
  VAR_67->quirks |= VAR_40;
 }
 if (VAR_68->vendor == VAR_32 &&
   VAR_68->device == VAR_19) {
  VAR_67->quirks |= VAR_44;
  VAR_67->limit_active_eps = 64;
  VAR_67->quirks |= VAR_61;
  VAR_67->quirks |= VAR_57;
 }
 if (VAR_68->vendor == VAR_32 &&
  (VAR_68->device == VAR_18 ||
   VAR_68->device == VAR_25)) {
  VAR_67->quirks |= VAR_57;
  VAR_67->quirks |= VAR_58;
 }
 if (VAR_68->vendor == VAR_32 &&
  (VAR_68->device == VAR_21 ||
   VAR_68->device == VAR_20 ||
   VAR_68->device == VAR_16 ||
   VAR_68->device == VAR_15 ||
   VAR_68->device == VAR_14 ||
   VAR_68->device == VAR_13 ||
   VAR_68->device == VAR_17)) {
  VAR_67->quirks |= VAR_51;
 }
 if (VAR_68->vendor == VAR_32 &&
     VAR_68->device == VAR_16)
  VAR_67->quirks |= VAR_59;
 if (VAR_68->vendor == VAR_32 &&
     (VAR_68->device == VAR_16 ||
      VAR_68->device == VAR_21 ||
      VAR_68->device == VAR_13))
  VAR_67->quirks |= VAR_46;
 if (VAR_68->vendor == VAR_32 &&
     (VAR_68->device == VAR_16 ||
      VAR_68->device == VAR_21 ||
      VAR_68->device == VAR_20 ||
      VAR_68->device == VAR_13 ||
      VAR_68->device == VAR_17))
  VAR_67->quirks |= VAR_49;

 if (VAR_68->vendor == VAR_32 &&
     (VAR_68->device == VAR_9 ||
      VAR_68->device == VAR_10 ||
      VAR_68->device == VAR_11 ||
      VAR_68->device == VAR_12 ||
      VAR_68->device == VAR_22 ||
      VAR_68->device == VAR_23 ||
      VAR_68->device == VAR_24))
  VAR_67->quirks |= VAR_43;

 if (VAR_68->vendor == VAR_30 &&
   VAR_68->device == VAR_5) {
  VAR_67->quirks |= VAR_53;
  VAR_67->quirks |= VAR_62;
  VAR_67->quirks |= VAR_42;
 }
 if (VAR_68->vendor == VAR_34 &&
     VAR_68->device == 0x0014) {
  VAR_67->quirks |= VAR_62;
  VAR_67->quirks |= VAR_64;
 }
 if (VAR_68->vendor == VAR_34 &&
     VAR_68->device == 0x0015) {
  VAR_67->quirks |= VAR_53;
  VAR_67->quirks |= VAR_64;
 }
 if (VAR_68->vendor == VAR_36)
  VAR_67->quirks |= VAR_53;


 if (VAR_68->vendor == VAR_36 &&
   VAR_68->device == 0x3432)
  VAR_67->quirks |= VAR_42;

 if (VAR_68->vendor == VAR_27 &&
   VAR_68->device == 0x1042)
  VAR_67->quirks |= VAR_42;
 if (VAR_68->vendor == VAR_27 &&
   VAR_68->device == 0x1142)
  VAR_67->quirks |= VAR_62;

 if (VAR_68->vendor == VAR_27 &&
  VAR_68->device == VAR_4)
  VAR_67->quirks |= VAR_39;

 if (VAR_68->vendor == VAR_35 && VAR_68->device == 0x8241)
  VAR_67->quirks |= VAR_47;

 if ((VAR_68->vendor == VAR_28 ||
      VAR_68->vendor == VAR_29) &&
      VAR_68->device == 0x9026)
  VAR_67->quirks |= VAR_54;

 if (VAR_67->quirks & VAR_53)
  FUNC_2(VAR_67, VAR_65,
    "QUIRK: Resetting on resume");
}
