
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vhost_scsi_target {int vhost_wwpn; } ;
struct TYPE_3__ {int vqs; int mutex; } ;
struct vhost_scsi {TYPE_1__ dev; int vs_vhost_wwpn; } ;
struct inode {int dummy; } ;
struct file {struct vhost_scsi* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vhost_scsi*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct vhost_scsi*,struct vhost_scsi_target*) ;
 int FUNC_8 (struct vhost_scsi*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0, struct file *VAR_1)
{
 struct vhost_scsi *VAR_2 = VAR_1->private_data;
 struct vhost_scsi_target VAR_3;

 FUNC_3(&VAR_2->dev.mutex);
 FUNC_2(VAR_3.vhost_wwpn, VAR_2->vs_vhost_wwpn, sizeof(VAR_3.vhost_wwpn));
 FUNC_4(&VAR_2->dev.mutex);
 FUNC_7(VAR_2, &VAR_3);
 FUNC_6(&VAR_2->dev);
 FUNC_5(&VAR_2->dev);

 FUNC_8(VAR_2);
 FUNC_0(VAR_2->dev.vqs);
 FUNC_1(VAR_2);
 return 0;
}
