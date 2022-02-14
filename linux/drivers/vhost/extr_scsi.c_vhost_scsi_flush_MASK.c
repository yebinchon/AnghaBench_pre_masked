
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_scsi_inflight {int comp; int kref; } ;
struct vhost_scsi {int vs_event_work; int dev; int vs_completion_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct vhost_scsi*,int) ;
 int FUNC_2 (struct vhost_scsi*,struct vhost_scsi_inflight**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vhost_scsi *VAR_2)
{
 struct vhost_scsi_inflight *VAR_3[VAR_0];
 int VAR_4;


 FUNC_2(VAR_2, VAR_3);






 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(&VAR_3[VAR_4]->kref, VAR_1);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_2, VAR_4);
 FUNC_3(&VAR_2->dev, &VAR_2->vs_completion_work);
 FUNC_3(&VAR_2->dev, &VAR_2->vs_event_work);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_4(&VAR_3[VAR_4]->comp);
}
