
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct sym_hcb {int istat_sem; int rv_ctest3; } ;
struct sym_data {struct pci_dev* pdev; struct sym_hcb* ncb; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct sym_hcb*,int ) ;
 scalar_t__ FUNC_1 (struct sym_hcb*,int ) ;
 int VAR_11 ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 () ;
 int FUNC_4 (struct sym_hcb*,int ,int) ;
 int FUNC_5 () ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (char*,...) ;
 struct sym_data* FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct sym_hcb*) ;
 int FUNC_10 (struct sym_hcb*,int) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (struct sym_hcb*) ;
 int FUNC_13 (struct sym_hcb*) ;
 int FUNC_14 (struct sym_hcb*) ;
 int FUNC_15 (struct Scsi_Host*,int,int) ;
 char* FUNC_16 (struct sym_hcb*) ;
 int FUNC_17 (struct sym_hcb*) ;
 int FUNC_18 (struct Scsi_Host*,int) ;
 int FUNC_19 (struct sym_hcb*) ;
 scalar_t__ FUNC_20 (int) ;

irqreturn_t FUNC_21(struct Scsi_Host *VAR_35)
{
 struct sym_data *VAR_36 = FUNC_8(VAR_35);
 struct sym_hcb *VAR_37 = VAR_36->ncb;
 struct pci_dev *VAR_38 = VAR_36->pdev;
 u_char VAR_39, VAR_40;
 u_char VAR_41;
 u_short VAR_42;
 VAR_39 = FUNC_0(VAR_37, VAR_31);
 if (VAR_39 & VAR_11) {
  FUNC_4(VAR_37, VAR_31, (VAR_39 & VAR_20) | VAR_11 | VAR_37->istat_sem);
  VAR_39 |= FUNC_0(VAR_37, VAR_31);
  if (VAR_5 & VAR_6) FUNC_7 ("F ");
  FUNC_19(VAR_37);
 }

 if (!(VAR_39 & (VAR_21|VAR_7)))
  return (VAR_39 & VAR_11) ? VAR_12 : VAR_13;
 VAR_42 = 0;
 VAR_41 = 0;
 VAR_40 = VAR_39;
 do {
  if (VAR_40 & VAR_21)
   VAR_42 |= FUNC_2(VAR_37, VAR_33);
  if (VAR_40 & VAR_7)
   VAR_41 |= FUNC_0(VAR_37, VAR_30);
  VAR_40 = FUNC_0(VAR_37, VAR_31);
  VAR_39 |= VAR_40;



  if (FUNC_20(VAR_42 == 0xffff && VAR_41 == 0xff)) {
   if (FUNC_6(VAR_38))
    return VAR_13;
  }
 } while (VAR_40 & (VAR_21|VAR_7));

 if (VAR_5 & VAR_6)
  FUNC_7 ("<%d|%x:%x|%x:%x>",
   (int)FUNC_0(VAR_37, VAR_32),
   VAR_41,VAR_42,
   (unsigned)FUNC_1(VAR_37, VAR_29),
   (unsigned)FUNC_1(VAR_37, VAR_28));






 FUNC_3();
 if (!(VAR_42 & (VAR_24|VAR_8|VAR_9|VAR_19|VAR_26|VAR_18|VAR_17)) &&
     !(VAR_41 & (VAR_15|VAR_1|VAR_0|VAR_10))) {
  if (VAR_42 & VAR_16) FUNC_10 (VAR_37, VAR_42);
  else if (VAR_42 & VAR_14) FUNC_9 (VAR_37);
  else if (VAR_41 & VAR_22) FUNC_12(VAR_37);
  else if (VAR_41 & VAR_23) FUNC_5();
  else goto unknown_int;
  return VAR_12;
 }
 if (VAR_42 & VAR_17) {
  FUNC_7("%s: SCSI BUS reset detected.\n", FUNC_16(VAR_37));
  FUNC_18(VAR_35, 1);
  return VAR_12;
 }

 FUNC_4(VAR_37, VAR_27, VAR_37->rv_ctest3 | VAR_3);
 FUNC_4(VAR_37, VAR_34, VAR_25|VAR_4);

 if (!(VAR_42 & (VAR_8|VAR_9|VAR_19)) &&
     !(VAR_41 & (VAR_15|VAR_1|VAR_0|VAR_10))) {
  if (VAR_42 & VAR_18) FUNC_11(VAR_35);
  else if (VAR_42 & VAR_24) FUNC_13 (VAR_37);
  else if (VAR_42 & VAR_26) FUNC_14 (VAR_37);
  else goto unknown_int;
  return VAR_12;
 }
 FUNC_15(VAR_35, VAR_42, VAR_41);

 if ((VAR_42 & (VAR_8|VAR_9|VAR_19)) ||
  (VAR_41 & (VAR_15|VAR_1|VAR_0|VAR_10))) {
  FUNC_17(VAR_37);
  return VAR_12;
 }

unknown_int:




 FUNC_7( "%s: unknown interrupt(s) ignored, "
  "ISTAT=0x%x DSTAT=0x%x SIST=0x%x\n",
  FUNC_16(VAR_37), VAR_39, VAR_41, VAR_42);
 return VAR_13;
}
