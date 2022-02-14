
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int cfg_prot_mask; int cfg_prot_guard; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_1 (struct Scsi_Host*,int) ;
 int FUNC_2 (struct Scsi_Host*,int) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_8, struct Scsi_Host *VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;

 if (VAR_8->cfg_prot_mask && VAR_8->cfg_prot_guard) {
  FUNC_0(VAR_8, VAR_1, VAR_2,
    "1478 Registering BlockGuard with the "
    "SCSI layer\n");

  VAR_10 = VAR_8->cfg_prot_mask;
  VAR_11 = VAR_8->cfg_prot_guard;


  VAR_8->cfg_prot_mask &= (VAR_3 |
   VAR_6 |
   VAR_7);
  VAR_8->cfg_prot_guard &= (VAR_5 |
      VAR_4);


  if (VAR_8->cfg_prot_mask == VAR_7)
   VAR_8->cfg_prot_mask |= VAR_3;

  if (VAR_8->cfg_prot_mask && VAR_8->cfg_prot_guard) {
   if ((VAR_10 != VAR_8->cfg_prot_mask) ||
    (VAR_11 != VAR_8->cfg_prot_guard))
    FUNC_0(VAR_8, VAR_0, VAR_2,
     "1475 Registering BlockGuard with the "
     "SCSI layer: mask %d  guard %d\n",
     VAR_8->cfg_prot_mask,
     VAR_8->cfg_prot_guard);

   FUNC_2(VAR_9, VAR_8->cfg_prot_mask);
   FUNC_1(VAR_9, VAR_8->cfg_prot_guard);
  } else
   FUNC_0(VAR_8, VAR_0, VAR_2,
    "1479 Not Registering BlockGuard with the SCSI "
    "layer, Bad protection parameters: %d %d\n",
    VAR_10, VAR_11);
 }
}
