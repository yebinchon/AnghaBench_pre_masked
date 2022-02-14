
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_scsi_tpg {int tv_tpg_mutex; struct vhost_scsi_nexus* tpg_nexus; int se_tpg; } ;
struct vhost_scsi_nexus {int tvn_se_sess; } ;
struct vhost_scsi_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vhost_scsi_nexus*) ;
 struct vhost_scsi_nexus* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int,int,unsigned char*,struct vhost_scsi_nexus*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct vhost_scsi_tpg *VAR_7,
    const char *VAR_8)
{
 struct vhost_scsi_nexus *VAR_9;

 FUNC_3(&VAR_7->tv_tpg_mutex);
 if (VAR_7->tpg_nexus) {
  FUNC_4(&VAR_7->tv_tpg_mutex);
  FUNC_5("tpg->tpg_nexus already exists\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  FUNC_4(&VAR_7->tv_tpg_mutex);
  FUNC_6("Unable to allocate struct vhost_scsi_nexus\n");
  return -VAR_1;
 }





 VAR_9->tvn_se_sess = FUNC_7(&VAR_7->se_tpg,
     VAR_5,
     sizeof(struct vhost_scsi_cmd),
     VAR_3 | VAR_4,
     (unsigned char *)VAR_8, VAR_9,
     VAR_6);
 if (FUNC_0(VAR_9->tvn_se_sess)) {
  FUNC_4(&VAR_7->tv_tpg_mutex);
  FUNC_1(VAR_9);
  return -VAR_1;
 }
 VAR_7->tpg_nexus = VAR_9;

 FUNC_4(&VAR_7->tv_tpg_mutex);
 return 0;
}
