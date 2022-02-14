
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_scsi_evt {int dummy; } ;
struct vhost_scsi {int vs_events_nr; } ;


 int FUNC_0 (struct vhost_scsi_evt*) ;

__attribute__((used)) static void FUNC_1(struct vhost_scsi *VAR_0, struct vhost_scsi_evt *VAR_1)
{
 VAR_0->vs_events_nr--;
 FUNC_0(VAR_1);
}
