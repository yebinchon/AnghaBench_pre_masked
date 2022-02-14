
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_port {scalar_t__ magic; scalar_t__ tx_state; int slotcnt; int slot; int pers; scalar_t__ dcd; scalar_t__ dupmode; int send_queue; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct yam_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,struct yam_port*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct yam_port *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->magic != VAR_1 || VAR_3->tx_state != VAR_0 ||
     FUNC_2(&VAR_3->send_queue))
  return;


 if (VAR_3->dupmode) {

  FUNC_3(VAR_2, VAR_3);
  return;
 }
 if (VAR_3->dcd) {

  VAR_3->slotcnt = VAR_3->slot / 10;
  return;
 }

 if ((--VAR_3->slotcnt) > 0)
  return;

 VAR_3->slotcnt = VAR_3->slot / 10;


 if ((FUNC_1() % 256) > VAR_3->pers)
  return;

 FUNC_3(VAR_2, VAR_3);
}
