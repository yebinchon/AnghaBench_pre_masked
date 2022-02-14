
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct lpfc_vport {int cfg_devloss_tmo; struct lpfc_hba* phba; } ;
struct TYPE_2__ {int * sli3_ring; } ;
struct lpfc_hba {TYPE_1__ sli; } ;
typedef scalar_t__ lpfc_ctx_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,char*,int) ;
 int FUNC_1 (struct lpfc_vport*,int *,int ,int ,scalar_t__) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,scalar_t__) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_vport *VAR_9, uint16_t VAR_10,
   uint64_t VAR_11, lpfc_ctx_cmd VAR_12)
{
 struct lpfc_hba *VAR_13 = VAR_9->phba;
 unsigned long VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_15)
  FUNC_1(VAR_9,
     &VAR_13->sli.sli3_ring[VAR_6],
     VAR_10, VAR_11, VAR_12);
 VAR_14 = FUNC_3(2 * VAR_9->cfg_devloss_tmo * 1000) + VAR_8;
 while (FUNC_5(VAR_14, VAR_8) && VAR_15) {
  FUNC_4(FUNC_3(20));
  VAR_15 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);
 }
 if (VAR_15) {
  FUNC_0(VAR_9, VAR_1, VAR_2,
   "0724 I/O flush failure for context %s : cnt x%x\n",
   ((VAR_12 == VAR_4) ? "LUN" :
    ((VAR_12 == VAR_5) ? "TGT" :
     ((VAR_12 == VAR_3) ? "HOST" : "Unknown"))),
   VAR_15);
  return VAR_0;
 }
 return VAR_7;
}
