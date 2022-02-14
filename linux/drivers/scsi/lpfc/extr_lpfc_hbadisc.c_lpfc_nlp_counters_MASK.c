
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_unused_cnt; int fc_plogi_cnt; int fc_adisc_cnt; int fc_reglogin_cnt; int fc_prli_cnt; int fc_unmap_cnt; int fc_map_cnt; int fc_npr_cnt; } ;
struct Scsi_Host {int host_lock; } ;
 struct Scsi_Host* FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_vport *VAR_0, int VAR_1, int VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;

 FUNC_1(VAR_3->host_lock, VAR_4);
 switch (VAR_1) {
 case 128:
  VAR_0->fc_unused_cnt += VAR_2;
  break;
 case 132:
  VAR_0->fc_plogi_cnt += VAR_2;
  break;
 case 135:
  VAR_0->fc_adisc_cnt += VAR_2;
  break;
 case 130:
  VAR_0->fc_reglogin_cnt += VAR_2;
  break;
 case 131:
  VAR_0->fc_prli_cnt += VAR_2;
  break;
 case 129:
  VAR_0->fc_unmap_cnt += VAR_2;
  break;
 case 134:
  VAR_0->fc_map_cnt += VAR_2;
  break;
 case 133:
  if (VAR_0->fc_npr_cnt == 0 && VAR_2 == -1)
   VAR_0->fc_npr_cnt = 0;
  else
   VAR_0->fc_npr_cnt += VAR_2;
  break;
 }
 FUNC_2(VAR_3->host_lock, VAR_4);
}
