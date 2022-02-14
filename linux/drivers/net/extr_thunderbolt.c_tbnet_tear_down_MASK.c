
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ring; } ;
struct tbnet {int login_sent; int login_received; int connection_lock; scalar_t__ login_retries; int dev; int xd; TYPE_1__ tx_ring; TYPE_1__ rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tbnet*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct tbnet*) ;

__attribute__((used)) static void FUNC_10(struct tbnet *VAR_2, bool VAR_3)
{
 FUNC_3(VAR_2->dev);
 FUNC_4(VAR_2->dev);

 FUNC_5(VAR_2);

 FUNC_0(&VAR_2->connection_lock);

 if (VAR_2->login_sent && VAR_2->login_received) {
  int VAR_4 = VAR_1;

  while (VAR_3 && VAR_4-- > 0) {
   int VAR_5 = FUNC_9(VAR_2);
   if (VAR_5 != -VAR_0)
    break;
  }

  FUNC_6(VAR_2->rx_ring.ring);
  FUNC_6(VAR_2->tx_ring.ring);
  FUNC_8(&VAR_2->rx_ring);
  FUNC_8(&VAR_2->tx_ring);

  if (FUNC_7(VAR_2->xd))
   FUNC_2(VAR_2->dev, "failed to disable DMA paths\n");
 }

 VAR_2->login_retries = 0;
 VAR_2->login_sent = 0;
 VAR_2->login_received = 0;

 FUNC_1(&VAR_2->connection_lock);
}
