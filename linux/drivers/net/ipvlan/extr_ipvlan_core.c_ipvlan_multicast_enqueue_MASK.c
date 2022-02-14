
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; TYPE_2__* dev; } ;
struct TYPE_5__ {int lock; } ;
struct ipvl_port {TYPE_1__ backlog; int wq; } ;
struct TYPE_7__ {int tx_pkt; } ;
struct TYPE_6__ {int rx_dropped; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ipvl_port *VAR_2,
         struct sk_buff *VAR_3, bool VAR_4)
{
 if (VAR_3->protocol == FUNC_4(VAR_0)) {
  FUNC_5(VAR_3);
  return;
 }






 FUNC_0(VAR_3)->tx_pkt = VAR_4;

 FUNC_8(&VAR_2->backlog.lock);
 if (FUNC_7(&VAR_2->backlog) < VAR_1) {
  if (VAR_3->dev)
   FUNC_3(VAR_3->dev);
  FUNC_1(&VAR_2->backlog, VAR_3);
  FUNC_9(&VAR_2->backlog.lock);
  FUNC_6(&VAR_2->wq);
 } else {
  FUNC_9(&VAR_2->backlog.lock);
  FUNC_2(&VAR_3->dev->rx_dropped);
  FUNC_5(VAR_3);
 }
}
