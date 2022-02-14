
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct vscsifrnt_info {int pause; int waiting_pause; int wq_pause; int wq_sync; scalar_t__ wait_ring_available; scalar_t__ callers; struct Scsi_Host* host; } ;
struct Scsi_Host {int host_lock; } ;


 struct vscsifrnt_info* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct xenbus_device *VAR_0)
{
 struct vscsifrnt_info *VAR_1 = FUNC_0(&VAR_0->dev);
 struct Scsi_Host *VAR_2 = VAR_1->host;
 int VAR_3 = 0;


 FUNC_1(VAR_2->host_lock);
 VAR_1->pause = 1;
 while (VAR_1->callers && !VAR_3) {
  VAR_1->waiting_pause = 1;
  VAR_1->wait_ring_available = 0;
  FUNC_2(VAR_2->host_lock);
  FUNC_4(&VAR_1->wq_sync);
  VAR_3 = FUNC_3(VAR_1->wq_pause,
            !VAR_1->waiting_pause);
  FUNC_1(VAR_2->host_lock);
 }
 FUNC_2(VAR_2->host_lock);
 return VAR_3;
}
