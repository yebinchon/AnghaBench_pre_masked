
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vscsiif_back_ring {int dummy; } ;
struct TYPE_2__ {int map_tag; int map_cpu; } ;
struct vscsibk_pend {int * grant_handles; TYPE_1__ se_cmd; } ;
struct v2p_entry {struct scsiback_tpg* tpg; } ;
struct se_session {scalar_t__ sess_cmd_map; int sess_tag_pool; } ;
struct scsiback_tpg {struct scsiback_nexus* tpg_nexus; } ;
struct scsiback_nexus {struct se_session* tvn_se_sess; } ;


 int VAR_0 ;
 struct vscsibk_pend* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vscsibk_pend*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static struct vscsibk_pend *FUNC_4(struct vscsiif_back_ring *VAR_3,
    struct v2p_entry *VAR_4)
{
 struct scsiback_tpg *VAR_5 = VAR_4->tpg;
 struct scsiback_nexus *VAR_6 = VAR_5->tpg_nexus;
 struct se_session *VAR_7 = VAR_6->tvn_se_sess;
 struct vscsibk_pend *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_3(&VAR_7->sess_tag_pool, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_2("Unable to obtain tag for vscsiif_request\n");
  return FUNC_0(-VAR_0);
 }

 VAR_8 = &((struct vscsibk_pend *)VAR_7->sess_cmd_map)[VAR_9];
 FUNC_1(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->se_cmd.map_tag = VAR_9;
 VAR_8->se_cmd.map_cpu = VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  VAR_8->grant_handles[VAR_11] = VAR_1;

 return VAR_8;
}
