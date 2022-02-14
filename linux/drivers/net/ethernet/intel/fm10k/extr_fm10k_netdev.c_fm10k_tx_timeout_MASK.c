
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; } ;
struct fm10k_ring {int dummy; } ;
struct fm10k_intfc {int num_tx_queues; struct fm10k_ring** tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fm10k_ring*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fm10k_ring*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 struct fm10k_intfc* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct fm10k_intfc*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct fm10k_intfc *VAR_4 = FUNC_3(VAR_3);
 bool VAR_5 = 0;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_4->num_tx_queues; VAR_6++) {
  struct fm10k_ring *VAR_7 = VAR_4->tx_ring[VAR_6];

  if (FUNC_0(VAR_7) && FUNC_1(VAR_7))
   VAR_5 = 1;
 }

 if (VAR_5) {
  FUNC_2(VAR_4);
 } else {
  FUNC_4(VAR_4, VAR_2, VAR_3,
      "Fake Tx hang detected with timeout of %d seconds\n",
      VAR_3->watchdog_timeo / VAR_0);


  if (VAR_3->watchdog_timeo < 16000)
   VAR_3->watchdog_timeo *= 2;
 }
}
