
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct srp_rport_identifiers {int roles; int port_id; } ;
struct TYPE_12__ {int release; int parent; } ;
struct srp_rport {int reconnect_delay; int fast_io_fail_tmo; int dev_loss_tmo; TYPE_2__ dev; int dev_loss_work; int fast_io_fail_work; int reconnect_work; int roles; int port_id; int mutex; } ;
struct srp_internal {TYPE_1__* f; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; int transportt; struct device shost_gendev; } ;
struct TYPE_13__ {int next_port_id; } ;
struct TYPE_11__ {int* reconnect_delay; int* fast_io_fail_tmo; int* dev_loss_tmo; scalar_t__ reconnect; } ;


 int VAR_0 ;
 struct srp_rport* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct device*) ;
 struct srp_rport* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_11 (struct Scsi_Host*) ;
 struct srp_internal* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;

struct srp_rport *FUNC_17(struct Scsi_Host *VAR_6,
    struct srp_rport_identifiers *VAR_7)
{
 struct srp_rport *VAR_8;
 struct device *VAR_9 = &VAR_6->shost_gendev;
 struct srp_internal *VAR_10 = FUNC_12(VAR_6->transportt);
 int VAR_11, VAR_12;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_9(&VAR_8->mutex);

 FUNC_5(&VAR_8->dev);

 VAR_8->dev.parent = FUNC_6(VAR_9);
 VAR_8->dev.release = VAR_5;

 FUNC_8(VAR_8->port_id, VAR_7->port_id, sizeof(VAR_8->port_id));
 VAR_8->roles = VAR_7->roles;

 if (VAR_10->f->reconnect)
  VAR_8->reconnect_delay = VAR_10->f->reconnect_delay ?
   *VAR_10->f->reconnect_delay : 10;
 FUNC_1(&VAR_8->reconnect_work, VAR_4);
 VAR_8->fast_io_fail_tmo = VAR_10->f->fast_io_fail_tmo ?
  *VAR_10->f->fast_io_fail_tmo : 15;
 VAR_8->dev_loss_tmo = VAR_10->f->dev_loss_tmo ? *VAR_10->f->dev_loss_tmo : 60;
 FUNC_1(&VAR_8->fast_io_fail_work,
     VAR_3);
 FUNC_1(&VAR_8->dev_loss_work, VAR_2);

 VAR_11 = FUNC_2(&FUNC_11(VAR_6)->next_port_id);
 FUNC_3(&VAR_8->dev, "port-%d:%d", VAR_6->host_no, VAR_11);

 FUNC_16(&VAR_8->dev);

 VAR_12 = FUNC_4(&VAR_8->dev);
 if (VAR_12) {
  FUNC_15(&VAR_8->dev);
  FUNC_10(&VAR_8->dev);
  return FUNC_0(VAR_12);
 }

 FUNC_13(&VAR_8->dev);
 FUNC_14(&VAR_8->dev);

 return VAR_8;
}
