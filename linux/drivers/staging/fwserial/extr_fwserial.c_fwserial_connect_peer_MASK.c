
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_port {int dummy; } ;
struct fwtty_peer {scalar_t__ state; int lock; int timer; struct fwtty_port* port; int unit; } ;
struct fwserial_mgmt_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fwserial_mgmt_pkt*,struct fwtty_port*) ;
 struct fwtty_port* FUNC_2 (struct fwtty_peer*) ;
 int FUNC_3 (struct fwtty_port*,int) ;
 int FUNC_4 (struct fwtty_peer*,struct fwserial_mgmt_pkt*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct fwserial_mgmt_pkt*) ;
 struct fwserial_mgmt_pkt* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (struct fwtty_peer*) ;
 int FUNC_10 (struct fwtty_peer*,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct fwtty_peer *VAR_11)
{
 struct fwtty_port *VAR_12;
 struct fwserial_mgmt_pkt *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_3;

 VAR_12 = FUNC_2(VAR_11);
 if (!VAR_12) {
  FUNC_5(&VAR_11->unit, "avail ports in use\n");
  VAR_14 = -VAR_1;
  goto free_pkt;
 }

 FUNC_11(&VAR_11->lock);


 if (VAR_11->state != VAR_4) {
  VAR_14 = -VAR_1;
  goto release_port;
 }

 VAR_11->port = VAR_12;
 FUNC_10(VAR_11, VAR_5);

 FUNC_1(VAR_13, VAR_11->port);

 FUNC_8(&VAR_11->timer, VAR_10 + VAR_9);
 FUNC_12(&VAR_11->lock);

 VAR_15 = FUNC_4(VAR_11, VAR_13);

 FUNC_11(&VAR_11->lock);
 if (VAR_11->state == VAR_5 && VAR_15 != VAR_7) {
  if (VAR_15 == VAR_8)
   VAR_14 = -VAR_0;
  else
   VAR_14 = -VAR_2;
  goto cancel_timer;
 }
 FUNC_12(&VAR_11->lock);

 FUNC_6(VAR_13);
 return 0;

cancel_timer:
 FUNC_0(&VAR_11->timer);
 FUNC_9(VAR_11);
release_port:
 FUNC_12(&VAR_11->lock);
 FUNC_3(VAR_12, 0);
free_pkt:
 FUNC_6(VAR_13);
 return VAR_14;
}
