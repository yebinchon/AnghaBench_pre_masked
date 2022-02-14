
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int device; } ;
struct lpfc_vport {int cfg_devloss_tmo; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,struct lpfc_rport_data*) ;
 struct lpfc_rport_data* FUNC_2 (int ) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_vport *VAR_6, struct scsi_cmnd *VAR_7)
{
 struct lpfc_rport_data *VAR_8;
 struct lpfc_nodelist *VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_2(VAR_7->device);
 if (!VAR_8) {
  FUNC_1(VAR_6, VAR_1, VAR_2,
   "0797 Tgt Map rport failure: rdata x%px\n", VAR_8);
  return VAR_0;
 }
 VAR_9 = VAR_8->pnode;




 VAR_10 = FUNC_3(2 * VAR_6->cfg_devloss_tmo * 1000) + VAR_5;
 while (FUNC_5(VAR_10, VAR_5)) {
  if (!VAR_9 || !FUNC_0(VAR_9))
   return VAR_0;
  if (VAR_9->nlp_state == VAR_3)
   return VAR_4;
  FUNC_4(FUNC_3(500));
  VAR_8 = FUNC_2(VAR_7->device);
  if (!VAR_8)
   return VAR_0;
  VAR_9 = VAR_8->pnode;
 }
 if (!VAR_9 || !FUNC_0(VAR_9) ||
     (VAR_9->nlp_state != VAR_3))
  return VAR_0;
 return VAR_4;
}
