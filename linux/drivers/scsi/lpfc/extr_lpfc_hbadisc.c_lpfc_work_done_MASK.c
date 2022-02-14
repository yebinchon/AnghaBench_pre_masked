
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int work_port_events; int work_port_lock; } ;
struct lpfc_sli_ring {int flag; } ;
struct TYPE_2__ {int fcf_flag; } ;
struct lpfc_hba {int work_ha; scalar_t__ pci_dev_grp; int hba_flag; int max_vports; scalar_t__ link_state; int link_flag; scalar_t__ sli_rev; int hbalock; int HCregaddr; int data_flags; struct lpfc_vport* pport; TYPE_1__ fcf; } ;


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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct lpfc_vport** FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,char*,int,int,int ) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 struct lpfc_sli_ring* FUNC_12 (struct lpfc_hba*) ;
 int FUNC_13 (struct lpfc_hba*) ;
 int FUNC_14 (struct lpfc_hba*) ;
 int FUNC_15 (struct lpfc_hba*) ;
 int FUNC_16 (struct lpfc_hba*) ;
 int FUNC_17 (struct lpfc_hba*) ;
 int FUNC_18 (struct lpfc_hba*) ;
 int FUNC_19 (struct lpfc_hba*,struct lpfc_sli_ring*,int) ;
 int FUNC_20 (struct lpfc_hba*,int ) ;
 int FUNC_21 (struct lpfc_hba*) ;
 int FUNC_22 (struct lpfc_hba*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int,int ) ;

__attribute__((used)) static void
FUNC_28(struct lpfc_hba *VAR_28)
{
 struct lpfc_sli_ring *VAR_29;
 uint32_t VAR_30, VAR_31, VAR_32, VAR_33;
 struct lpfc_vport **VAR_34;
 struct lpfc_vport *VAR_35;
 int VAR_36;

 FUNC_25(&VAR_28->hbalock);
 VAR_30 = VAR_28->work_ha;
 VAR_28->work_ha = 0;
 FUNC_26(&VAR_28->hbalock);


 if (VAR_28->pci_dev_grp == VAR_16)
  FUNC_17(VAR_28);

 if (VAR_30 & VAR_3)

  FUNC_7(VAR_28);

 if (VAR_30 & VAR_5)
  FUNC_18(VAR_28);

 if (VAR_30 & VAR_4)
  FUNC_8(VAR_28);


 if (VAR_28->pci_dev_grp == VAR_16) {
  if (VAR_28->hba_flag & VAR_8)
   FUNC_9(VAR_28);
  if (VAR_28->hba_flag & VAR_1)
   FUNC_15(VAR_28);
  if (VAR_28->hba_flag & VAR_0)
   FUNC_14(VAR_28);
  if (VAR_28->hba_flag & VAR_7) {
   FUNC_25(&VAR_28->hbalock);
   VAR_28->hba_flag &= ~VAR_7;
   FUNC_26(&VAR_28->hbalock);
   FUNC_20(VAR_28, VAR_13);
  }
  if (VAR_28->fcf.fcf_flag & VAR_2)
   FUNC_16(VAR_28);
 }

 VAR_34 = FUNC_0(VAR_28);
 if (VAR_34 != ((void*)0))
  for (VAR_36 = 0; VAR_36 <= VAR_28->max_vports; VAR_36++) {




   if (VAR_34[VAR_36] == ((void*)0) && VAR_36 == 0)
    VAR_35 = VAR_28->pport;
   else
    VAR_35 = VAR_34[VAR_36];
   if (VAR_35 == ((void*)0))
    break;
   FUNC_25(&VAR_35->work_port_lock);
   VAR_33 = VAR_35->work_port_events;
   VAR_35->work_port_events &= ~VAR_33;
   FUNC_26(&VAR_35->work_port_lock);
   if (VAR_33 & VAR_22)
    FUNC_4(VAR_35);
   if (VAR_33 & VAR_23)
    FUNC_6(VAR_35);
   if (VAR_33 & VAR_25)
    FUNC_10(VAR_28);
   if (VAR_33 & VAR_26)
    FUNC_11(VAR_28);
   if (VAR_33 & VAR_24)
    FUNC_21(VAR_28);
   if (VAR_33 & VAR_27)
    FUNC_13(VAR_28);
   if (VAR_33 & VAR_21)
    FUNC_2(VAR_35);
  }
 FUNC_3(VAR_28, VAR_34);

 VAR_29 = FUNC_12(VAR_28);
 VAR_31 = (VAR_30 & (VAR_6 << (4*VAR_14)));
 VAR_31 >>= (4*VAR_14);
 if (VAR_29 && (VAR_31 & VAR_6 ||
        VAR_29->flag & VAR_12 ||
        VAR_28->hba_flag & VAR_9)) {
  if (VAR_29->flag & VAR_19) {
   VAR_29->flag |= VAR_12;

   if (!(VAR_28->hba_flag & VAR_9))
    FUNC_24(VAR_11, &VAR_28->data_flags);
  } else {
   if (VAR_28->link_state >= VAR_15 ||
       VAR_28->link_flag & VAR_20) {
    VAR_29->flag &= ~VAR_12;
    FUNC_19(VAR_28, VAR_29,
        (VAR_31 &
        VAR_6));
   }
  }
  if (VAR_28->sli_rev == VAR_18)
   FUNC_5(VAR_28);



  if (VAR_28->sli_rev <= VAR_17) {
   FUNC_25(&VAR_28->hbalock);
   VAR_32 = FUNC_23(VAR_28->HCregaddr);
   if (!(VAR_32 & (VAR_10 << VAR_14))) {
    FUNC_1(VAR_28,
     "WRK Enable ring: cntl:x%x hacopy:x%x",
     VAR_32, VAR_30, 0);

    VAR_32 |= (VAR_10 << VAR_14);
    FUNC_27(VAR_32, VAR_28->HCregaddr);
    FUNC_23(VAR_28->HCregaddr);
   } else {
    FUNC_1(VAR_28,
     "WRK Ring ok:     cntl:x%x hacopy:x%x",
     VAR_32, VAR_30, 0);
   }
   FUNC_26(&VAR_28->hbalock);
  }
 }
 FUNC_22(VAR_28);
}
