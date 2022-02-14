
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct fwtty_port {int dummy; } ;
struct fwtty_peer {int state; int lock; int unit; int timer; int guid; TYPE_2__* serial; } ;
struct fwserial_mgmt_pkt {int dummy; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int guid; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fwserial_mgmt_pkt*) ;
 int FUNC_2 (struct fwserial_mgmt_pkt*) ;
 int FUNC_3 (struct fwtty_port*,int) ;
 int FUNC_4 (struct fwtty_peer*,struct fwserial_mgmt_pkt*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (struct fwserial_mgmt_pkt*) ;
 struct fwserial_mgmt_pkt* FUNC_7 (int,int ) ;
 struct fwtty_port* FUNC_8 (struct fwtty_peer*) ;
 int FUNC_9 (struct fwtty_peer*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct fwtty_peer* FUNC_12 (struct work_struct*,struct work_struct*) ;

__attribute__((used)) static void FUNC_13(struct work_struct *VAR_3)
{
 struct fwtty_peer *VAR_4 = FUNC_12(VAR_3, VAR_3);
 struct fwtty_port *VAR_5 = ((void*)0);
 struct fwserial_mgmt_pkt *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return;

 FUNC_10(&VAR_4->lock);

 switch (VAR_4->state) {
 case 129:
  FUNC_2(VAR_6);
  FUNC_9(VAR_4, VAR_0);
  break;

 case 128:
  if (VAR_4->serial->card->guid > VAR_4->guid)
   goto cleanup;


  FUNC_0(&VAR_4->timer);
  FUNC_2(VAR_6);
  FUNC_9(VAR_4, VAR_0);
  break;

 default:
  FUNC_1(VAR_6);
 }

 FUNC_11(&VAR_4->lock);

 VAR_7 = FUNC_4(VAR_4, VAR_6);

 FUNC_10(&VAR_4->lock);
 if (VAR_4->state == VAR_0) {
  if (VAR_7 != VAR_2)
   FUNC_5(&VAR_4->unit, "UNPLUG_RSP error (%d)\n",
      VAR_7);
  VAR_5 = FUNC_8(VAR_4);
 }
cleanup:
 FUNC_11(&VAR_4->lock);
 if (VAR_5)
  FUNC_3(VAR_5, 1);
 FUNC_6(VAR_6);
}
