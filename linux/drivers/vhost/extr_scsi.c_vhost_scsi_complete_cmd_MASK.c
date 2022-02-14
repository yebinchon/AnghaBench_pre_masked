
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_scsi_cmd {int tvc_completion_list; struct vhost_scsi* tvc_vhost; } ;
struct vhost_scsi {int vs_completion_work; int dev; int vs_completion_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct vhost_scsi_cmd *VAR_0)
{
 struct vhost_scsi *VAR_1 = VAR_0->tvc_vhost;

 FUNC_0(&VAR_0->tvc_completion_list, &VAR_1->vs_completion_list);

 FUNC_1(&VAR_1->dev, &VAR_1->vs_completion_work);
}
