
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct gve_tx_ring {int wake_queue; int netdev_txq; int stop_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct gve_tx_ring*,int) ;
 int FUNC_1 (struct gve_tx_ring*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct gve_tx_ring *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_2(FUNC_0(VAR_1, VAR_3)))
  return 0;


 VAR_1->stop_queue++;
 FUNC_4(VAR_1->netdev_txq);
 FUNC_5();
 if (FUNC_2(!FUNC_0(VAR_1, VAR_3)))
  return -VAR_0;

 FUNC_3(VAR_1->netdev_txq);
 VAR_1->wake_queue++;
 return 0;
}
