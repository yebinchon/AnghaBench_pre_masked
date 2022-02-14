
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct ntb_transport_qp {int dummy; } ;
struct ntb_netdev {int qp; } ;
struct TYPE_2__ {int tx_aborted_errors; int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct ntb_netdev* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_6(struct ntb_transport_qp *VAR_1, void *VAR_2,
      void *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_2;
 struct sk_buff *VAR_6;
 struct ntb_netdev *VAR_7 = FUNC_1(VAR_5);

 VAR_6 = VAR_3;
 if (!VAR_6 || !VAR_5)
  return;

 if (VAR_4 > 0) {
  VAR_5->stats.tx_packets++;
  VAR_5->stats.tx_bytes += VAR_6->len;
 } else {
  VAR_5->stats.tx_errors++;
  VAR_5->stats.tx_aborted_errors++;
 }

 FUNC_0(VAR_6);

 if (FUNC_4(VAR_7->qp) >= VAR_0) {



  FUNC_5();
  if (FUNC_2(VAR_5))
   FUNC_3(VAR_5);
 }
}
