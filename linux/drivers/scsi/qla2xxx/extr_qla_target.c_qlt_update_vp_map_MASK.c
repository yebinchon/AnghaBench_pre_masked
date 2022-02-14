
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int b24; } ;
struct scsi_qla_host {size_t vp_idx; TYPE_4__ d_id; TYPE_3__* hw; } ;
struct TYPE_6__ {int host_map; TYPE_1__* tgt_vp_map; } ;
struct TYPE_7__ {TYPE_2__ tgt; } ;
struct TYPE_5__ {struct scsi_qla_host* vha; } ;


 int VAR_0 ;
 int FUNC_0 () ;




 int FUNC_1 (int *,int ,struct scsi_qla_host*,int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,struct scsi_qla_host*) ;
 int FUNC_5 (int ,struct scsi_qla_host*,int,char*,struct scsi_qla_host*,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,struct scsi_qla_host*,int,char*,int ) ;
 int VAR_2 ;

void
FUNC_7(struct scsi_qla_host *VAR_3, int VAR_4)
{
 void *VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (!FUNC_0())
  return;

 VAR_6 = VAR_3->d_id.b24;

 switch (VAR_4) {
 case 128:
  VAR_3->hw->tgt.tgt_vp_map[VAR_3->vp_idx].vha = VAR_3;
  break;
 case 129:
  VAR_5 = FUNC_2(&VAR_3->hw->tgt.host_map, VAR_6);
  if (!VAR_5) {
   FUNC_5(VAR_1, VAR_3, 0xf018,
       "Save vha in host_map %p %06x\n", VAR_3, VAR_6);
   VAR_7 = FUNC_1(&VAR_3->hw->tgt.host_map,
    VAR_6, VAR_3, VAR_0);
   if (VAR_7)
    FUNC_6(VAR_2, VAR_3, 0xd03e,
        "Unable to insert s_id into host_map: %06x\n",
        VAR_6);
   return;
  }
  FUNC_5(VAR_1, VAR_3, 0xf019,
      "replace existing vha in host_map %p %06x\n", VAR_3, VAR_6);
  FUNC_4(&VAR_3->hw->tgt.host_map, VAR_6, VAR_3);
  break;
 case 130:
  VAR_3->hw->tgt.tgt_vp_map[VAR_3->vp_idx].vha = ((void*)0);
  break;
 case 131:
  FUNC_5(VAR_1, VAR_3, 0xf01a,
     "clear vha in host_map %p %06x\n", VAR_3, VAR_6);
  VAR_5 = FUNC_2(&VAR_3->hw->tgt.host_map, VAR_6);
  if (VAR_5)
   FUNC_3(&VAR_3->hw->tgt.host_map, VAR_6);
  VAR_3->d_id.b24 = 0;
  break;
 }
}
