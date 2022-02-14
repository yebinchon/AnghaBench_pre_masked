
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ uval; int wval; scalar_t__ sval; } ;
struct sym_tcb {TYPE_3__** lunmp; TYPE_2__* lun0p; TYPE_1__ head; scalar_t__ to_reset; } ;
struct TYPE_8__ {scalar_t__ ramaddr; } ;
struct sym_hcb {int rv_scntl0; int myaddr; int rv_dmode; int rv_ctest5; int rv_dcntl; int rv_ctest3; int rv_ctest4; int features; int rv_stest2; int rv_ccntl0; int rv_ccntl1; int scsi_mode; scalar_t__ hcb_ba; scalar_t__ istat_sem; int scr_ram_seg; int scriptb_sz; int scriptb0; TYPE_4__ s; int scripta_sz; int scripta0; scalar_t__ ram_ba; int rv_scntl3; struct sym_tcb* target; scalar_t__* dmap_bah; int (* fw_patch ) (struct Scsi_Host*) ;scalar_t__ dqueueget; void** dqueue; scalar_t__ dqueue_ba; scalar_t__ squeueput; void** squeue; scalar_t__ idletask_ba; scalar_t__ squeue_ba; } ;
struct sym_data {struct sym_hcb* ncb; struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ device; int revision; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {scalar_t__ to_clear; } ;
struct TYPE_6__ {scalar_t__ to_clear; } ;


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
 unsigned long VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 unsigned long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct sym_hcb*,int ,int) ;
 int FUNC_3 (struct sym_hcb*,int ,scalar_t__) ;
 int FUNC_4 (struct sym_hcb*,scalar_t__) ;
 int FUNC_5 (struct sym_hcb*,int ,int ) ;
 int FUNC_6 (struct sym_hcb*,int ,int ) ;
 int FUNC_7 (struct sym_hcb*,int ,unsigned long) ;
 unsigned long VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 unsigned long VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_8 (struct sym_hcb*,int ) ;
 scalar_t__ FUNC_9 (struct sym_hcb*,int ) ;
 unsigned long VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 unsigned long VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 unsigned long VAR_38 ;
 void* FUNC_10 (scalar_t__) ;
 int VAR_39 ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
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
 int * VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (int ) ;
 struct sym_data* FUNC_15 (struct Scsi_Host*) ;
 int VAR_73 ;
 int FUNC_16 (struct Scsi_Host*) ;
 int FUNC_17 (struct sym_hcb*,int ) ;
 char* FUNC_18 (struct sym_hcb*) ;
 int FUNC_19 (struct sym_hcb*,int ) ;
 int FUNC_20 (struct sym_hcb*) ;
 int VAR_74 ;
 int FUNC_21 (struct sym_hcb*) ;
 int FUNC_22 (int) ;
 scalar_t__ FUNC_23 (struct sym_hcb*) ;

void FUNC_24(struct Scsi_Host *VAR_75, int VAR_76)
{
 struct sym_data *VAR_77 = FUNC_15(VAR_75);
 struct pci_dev *VAR_78 = VAR_77->pdev;
 struct sym_hcb *VAR_79 = VAR_77->ncb;
  int VAR_80;
 u32 VAR_81;




 if (VAR_76 == 1)
  FUNC_20(VAR_79);
 else {
  FUNC_2(VAR_79, VAR_69, VAR_37|VAR_2);
  FUNC_5(VAR_79, VAR_44, VAR_1);
 }




 VAR_81 = VAR_79->squeue_ba;
 for (VAR_80 = 0; VAR_80 < VAR_18*2; VAR_80 += 2) {
  VAR_79->squeue[VAR_80] = FUNC_10(VAR_79->idletask_ba);
  VAR_79->squeue[VAR_80+1] = FUNC_10(VAR_81 + (VAR_80+2)*4);
 }
 VAR_79->squeue[VAR_18*2-1] = FUNC_10(VAR_81);




 VAR_79->squeueput = 0;




 VAR_81 = VAR_79->dqueue_ba;
 for (VAR_80 = 0; VAR_80 < VAR_18*2; VAR_80 += 2) {
  VAR_79->dqueue[VAR_80] = 0;
  VAR_79->dqueue[VAR_80+1] = FUNC_10(VAR_81 + (VAR_80+2)*4);
 }
 VAR_79->dqueue[VAR_18*2-1] = FUNC_10(VAR_81);




 VAR_79->dqueueget = 0;






 VAR_79->fw_patch(VAR_75);




 FUNC_17(VAR_79, VAR_3);




 FUNC_2(VAR_79, VAR_53, 0x00);
 FUNC_0(VAR_79, VAR_54);
 FUNC_22(2000);

 FUNC_2(VAR_79, VAR_61, VAR_79->rv_scntl0 | 0xc0);

 FUNC_2(VAR_79, VAR_62, 0x00);

 FUNC_19(VAR_79, VAR_79->rv_scntl3);

 FUNC_2(VAR_79, VAR_60 , VAR_26|VAR_79->myaddr);
 FUNC_7(VAR_79, VAR_59, 1ul<<VAR_79->myaddr);
 FUNC_2(VAR_79, VAR_53 , VAR_30 );
 FUNC_2(VAR_79, VAR_49 , VAR_79->rv_dmode);
 FUNC_2(VAR_79, VAR_46, VAR_79->rv_ctest5);

 FUNC_2(VAR_79, VAR_47 , VAR_20|VAR_79->rv_dcntl);
 FUNC_2(VAR_79, VAR_44, VAR_79->rv_ctest3);
 FUNC_2(VAR_79, VAR_45, VAR_79->rv_ctest4);


 if (VAR_79->features & VAR_7)
  FUNC_2(VAR_79, VAR_68, VAR_79->rv_stest2);
 else
  FUNC_2(VAR_79, VAR_68, VAR_6|VAR_79->rv_stest2);

 FUNC_2(VAR_79, VAR_69, VAR_37);
 FUNC_2(VAR_79, VAR_71, 0x0c);




 if (VAR_78->device == VAR_23)
  FUNC_2(VAR_79, VAR_40, VAR_4);
 if (VAR_78->device == VAR_22 &&
     VAR_78->revision < 1)
  FUNC_2(VAR_79, VAR_67, FUNC_0(VAR_79, VAR_67) | 0x30);






 if (VAR_78->device == VAR_24)
  FUNC_2(VAR_79, VAR_43, (1<<5));
 else if (VAR_78->device == VAR_25)
  VAR_79->rv_ccntl0 |= VAR_5;






 if (VAR_79->features & (VAR_8|VAR_11)) {
  FUNC_2(VAR_79, VAR_41, VAR_79->rv_ccntl0);
  FUNC_2(VAR_79, VAR_42, VAR_79->rv_ccntl1);
 }
 if (VAR_79->features & VAR_11) {
  FUNC_3(VAR_79, VAR_57, FUNC_9(VAR_79, VAR_72));
  FUNC_3(VAR_79, VAR_58, FUNC_9(VAR_79, VAR_72));
 }





 if (VAR_79->features & VAR_9)
  FUNC_2(VAR_79, VAR_52, FUNC_0(VAR_79, VAR_52) & ~0x01);
 else if (VAR_79->features & VAR_10)
  FUNC_2(VAR_79, VAR_52, (FUNC_0(VAR_79, VAR_52) & ~0x41) | 0x20);




 FUNC_7(VAR_79, VAR_65 , VAR_34|VAR_15|VAR_17|VAR_29|VAR_38|VAR_27|VAR_21);
 FUNC_2(VAR_79, VAR_48 , VAR_19|VAR_0|VAR_33|VAR_31|VAR_16);






 if (VAR_79->features & (VAR_13|VAR_14)) {
  FUNC_6(VAR_79, VAR_65, VAR_28);
  if (VAR_76 == 0) {
   FUNC_0(VAR_79, VAR_54);
   FUNC_11(100);
   FUNC_1(VAR_79, VAR_66);
  }
  VAR_79->scsi_mode = FUNC_0(VAR_79, VAR_70) & VAR_32;
 }







 for (VAR_80=0;VAR_80<VAR_36;VAR_80++) {
  struct sym_tcb *VAR_82 = &VAR_79->target[VAR_80];

  VAR_82->to_reset = 0;
  VAR_82->head.sval = 0;
  VAR_82->head.wval = VAR_79->rv_scntl3;
  VAR_82->head.uval = 0;
  if (VAR_82->lun0p)
   VAR_82->lun0p->to_clear = 0;
  if (VAR_82->lunmp) {
   int VAR_83;

   for (VAR_83 = 1; VAR_83 < VAR_35; VAR_83++)
    if (VAR_82->lunmp[VAR_83])
     VAR_82->lunmp[VAR_83]->to_clear = 0;
  }
 }
 VAR_81 = FUNC_8(VAR_79, VAR_39);
 if (VAR_79->ram_ba) {
  if (VAR_74 >= 2)
   FUNC_13("%s: Downloading SCSI SCRIPTS.\n", FUNC_18(VAR_79));
  FUNC_12(VAR_79->s.ramaddr, VAR_79->scripta0, VAR_79->scripta_sz);
  if (VAR_79->features & VAR_12) {
   FUNC_12(VAR_79->s.ramaddr + 4096, VAR_79->scriptb0, VAR_79->scriptb_sz);
   VAR_81 = FUNC_14(VAR_79->scr_ram_seg);
   FUNC_3(VAR_79, VAR_56, VAR_81);
   FUNC_3(VAR_79, VAR_55, VAR_81);
   FUNC_3(VAR_79, VAR_64, VAR_81);
   VAR_81 = FUNC_9(VAR_79, VAR_73);
  }
 }

 VAR_79->istat_sem = 0;

 FUNC_3(VAR_79, VAR_51, VAR_79->hcb_ba);
 FUNC_4(VAR_79, VAR_81);




 if (VAR_76 != 0)
  FUNC_21(VAR_79);
}
