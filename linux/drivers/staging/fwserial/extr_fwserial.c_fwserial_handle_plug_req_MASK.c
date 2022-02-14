
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct virt_plug_params {int dummy; } ;
struct fwtty_port {int dummy; } ;
struct TYPE_4__ {struct virt_plug_params plug_req; } ;
struct fwtty_peer {int state; int lock; int unit; struct fwtty_port* port; int timer; int guid; TYPE_3__* serial; TYPE_1__ work_params; } ;
struct fwserial_mgmt_pkt {int dummy; } ;
struct TYPE_6__ {TYPE_2__* card; } ;
struct TYPE_5__ {int guid; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fwserial_mgmt_pkt*) ;
 int FUNC_2 (struct fwserial_mgmt_pkt*,struct fwtty_port*) ;
 struct fwtty_port* FUNC_3 (struct fwtty_peer*) ;
 int FUNC_4 (struct fwtty_port*,int) ;
 int FUNC_5 (struct fwtty_peer*,struct fwserial_mgmt_pkt*) ;
 int FUNC_6 (struct fwtty_peer*,struct virt_plug_params*) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (struct fwtty_port*) ;
 int FUNC_9 (struct fwserial_mgmt_pkt*) ;
 struct fwserial_mgmt_pkt* FUNC_10 (int,int ) ;
 struct fwtty_port* FUNC_11 (struct fwtty_peer*) ;
 int FUNC_12 (struct fwtty_peer*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct fwtty_peer* FUNC_15 (struct work_struct*,struct work_struct*) ;

__attribute__((used)) static void FUNC_16(struct work_struct *VAR_3)
{
 struct fwtty_peer *VAR_4 = FUNC_15(VAR_3, VAR_3);
 struct virt_plug_params *VAR_5 = &VAR_4->work_params.plug_req;
 struct fwtty_port *VAR_6;
 struct fwserial_mgmt_pkt *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_10(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return;

 VAR_6 = FUNC_3(VAR_4);

 FUNC_13(&VAR_4->lock);

 switch (VAR_4->state) {
 case 129:
  if (!VAR_6) {
   FUNC_7(&VAR_4->unit, "no more ports avail\n");
   FUNC_1(VAR_7);
  } else {
   VAR_4->port = VAR_6;
   FUNC_2(VAR_7, VAR_4->port);
   FUNC_12(VAR_4, VAR_0);

   VAR_6 = ((void*)0);
  }
  break;

 case 128:
  if (VAR_4->serial->card->guid > VAR_4->guid)
   goto cleanup;


  FUNC_0(&VAR_4->timer);
  FUNC_2(VAR_7, VAR_4->port);
  FUNC_12(VAR_4, VAR_0);
  break;

 default:
  FUNC_1(VAR_7);
 }

 FUNC_14(&VAR_4->lock);
 if (VAR_6)
  FUNC_4(VAR_6, 0);

 VAR_8 = FUNC_5(VAR_4, VAR_7);

 FUNC_13(&VAR_4->lock);
 if (VAR_4->state == VAR_0) {
  if (VAR_8 == VAR_2) {
   struct fwtty_port *VAR_9 = VAR_4->port;

   FUNC_6(VAR_4, VAR_5);
   FUNC_14(&VAR_4->lock);

   FUNC_8(VAR_9);
   FUNC_13(&VAR_4->lock);
  } else {
   FUNC_7(&VAR_4->unit, "PLUG_RSP error (%d)\n", VAR_8);
   VAR_6 = FUNC_11(VAR_4);
  }
 }
cleanup:
 FUNC_14(&VAR_4->lock);
 if (VAR_6)
  FUNC_4(VAR_6, 0);
 FUNC_9(VAR_7);
}
