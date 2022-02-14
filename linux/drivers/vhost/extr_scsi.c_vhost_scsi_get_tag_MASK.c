
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct vhost_virtqueue {int dummy; } ;
struct vhost_scsi_tpg {struct vhost_scsi_nexus* tpg_nexus; } ;
struct vhost_scsi_nexus {struct se_session* tvn_se_sess; } ;
struct TYPE_2__ {int map_tag; int map_cpu; } ;
struct vhost_scsi_cmd {int tvc_data_direction; int tvc_cdb; int inflight; struct vhost_scsi_nexus* tvc_nexus; int tvc_exp_data_len; int tvc_task_attr; int tvc_lun; int tvc_tag; TYPE_1__ tvc_se_cmd; struct page** tvc_upages; struct scatterlist* tvc_prot_sgl; struct scatterlist* tvc_sgl; } ;
struct se_session {scalar_t__ sess_cmd_map; int sess_tag_pool; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vhost_scsi_cmd* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned char*,int ) ;
 int FUNC_2 (struct vhost_scsi_cmd*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (struct vhost_virtqueue*) ;

__attribute__((used)) static struct vhost_scsi_cmd *
FUNC_6(struct vhost_virtqueue *VAR_3, struct vhost_scsi_tpg *VAR_4,
     unsigned char *VAR_5, u64 VAR_6, u16 VAR_7, u8 VAR_8,
     u32 VAR_9, int VAR_10)
{
 struct vhost_scsi_cmd *VAR_11;
 struct vhost_scsi_nexus *VAR_12;
 struct se_session *VAR_13;
 struct scatterlist *VAR_14, *VAR_15;
 struct page **VAR_16;
 int VAR_17, VAR_18;

 VAR_12 = VAR_4->tpg_nexus;
 if (!VAR_12) {
  FUNC_3("Unable to locate active struct vhost_scsi_nexus\n");
  return FUNC_0(-VAR_0);
 }
 VAR_13 = VAR_12->tvn_se_sess;

 VAR_17 = FUNC_4(&VAR_13->sess_tag_pool, &VAR_18);
 if (VAR_17 < 0) {
  FUNC_3("Unable to obtain tag for vhost_scsi_cmd\n");
  return FUNC_0(-VAR_1);
 }

 VAR_11 = &((struct vhost_scsi_cmd *)VAR_13->sess_cmd_map)[VAR_17];
 VAR_14 = VAR_11->tvc_sgl;
 VAR_15 = VAR_11->tvc_prot_sgl;
 VAR_16 = VAR_11->tvc_upages;
 FUNC_2(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->tvc_sgl = VAR_14;
 VAR_11->tvc_prot_sgl = VAR_15;
 VAR_11->tvc_upages = VAR_16;
 VAR_11->tvc_se_cmd.map_tag = VAR_17;
 VAR_11->tvc_se_cmd.map_cpu = VAR_18;
 VAR_11->tvc_tag = VAR_6;
 VAR_11->tvc_lun = VAR_7;
 VAR_11->tvc_task_attr = VAR_8;
 VAR_11->tvc_exp_data_len = VAR_9;
 VAR_11->tvc_data_direction = VAR_10;
 VAR_11->tvc_nexus = VAR_12;
 VAR_11->inflight = FUNC_5(VAR_3);

 FUNC_1(VAR_11->tvc_cdb, VAR_5, VAR_2);

 return VAR_11;
}
