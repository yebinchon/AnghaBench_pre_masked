
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_scsi_cmd {void* tvc_prot_sgl; void* tvc_upages; void* tvc_sgl; } ;
struct se_session {scalar_t__ sess_cmd_map; } ;
struct se_portal_group {int dummy; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct se_session*) ;

__attribute__((used)) static int FUNC_3(struct se_portal_group *VAR_6,
          struct se_session *VAR_7, void *VAR_8)
{
 struct vhost_scsi_cmd *VAR_9;
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9 = &((struct vhost_scsi_cmd *)VAR_7->sess_cmd_map)[VAR_10];

  VAR_9->tvc_sgl = FUNC_0(VAR_4,
       sizeof(struct scatterlist),
       VAR_1);
  if (!VAR_9->tvc_sgl) {
   FUNC_1("Unable to allocate tv_cmd->tvc_sgl\n");
   goto out;
  }

  VAR_9->tvc_upages = FUNC_0(VAR_5,
          sizeof(struct page *),
          VAR_1);
  if (!VAR_9->tvc_upages) {
   FUNC_1("Unable to allocate tv_cmd->tvc_upages\n");
   goto out;
  }

  VAR_9->tvc_prot_sgl = FUNC_0(VAR_3,
            sizeof(struct scatterlist),
            VAR_1);
  if (!VAR_9->tvc_prot_sgl) {
   FUNC_1("Unable to allocate tv_cmd->tvc_prot_sgl\n");
   goto out;
  }
 }
 return 0;
out:
 FUNC_2(VAR_7);
 return -VAR_0;
}
