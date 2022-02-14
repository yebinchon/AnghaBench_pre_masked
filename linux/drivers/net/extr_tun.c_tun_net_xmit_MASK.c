
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tun_struct {TYPE_2__* pcpu_stats; int txflt; int steering_prog; int * tfiles; } ;
struct TYPE_5__ {TYPE_3__* sk; } ;
struct tun_file {int flags; TYPE_1__ socket; int fasync; int tx_ring; } ;
struct sk_buff {int queue_mapping; int len; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_7__ {int (* sk_data_ready ) (TYPE_3__*) ;scalar_t__ sk_filter; } ;
struct TYPE_6__ {int tx_dropped; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int ,int ) ;
 struct tun_struct* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int *,struct sk_buff*) ;
 struct tun_file* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct tun_struct*,struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct tun_struct*,struct sk_buff*) ;
 int FUNC_20 (int ,struct tun_struct*,char*,int) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_22(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct tun_struct *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = VAR_7->queue_mapping;
 struct tun_file *VAR_11;
 int VAR_12 = VAR_7->len;

 FUNC_9();
 VAR_11 = FUNC_8(VAR_9->tfiles[VAR_10]);


 if (!VAR_11)
  goto drop;

 if (!FUNC_8(VAR_9->steering_prog))
  FUNC_19(VAR_9, VAR_7);

 FUNC_20(VAR_1, VAR_9, "tun_net_xmit %d\n", VAR_7->len);

 FUNC_0(!VAR_11);




 if (!FUNC_1(&VAR_9->txflt, VAR_7))
  goto drop;

 if (VAR_11->socket.sk->sk_filter &&
     FUNC_12(VAR_11->socket.sk, VAR_7))
  goto drop;

 VAR_12 = FUNC_11(VAR_9, VAR_7, VAR_12);
 if (VAR_12 == 0 || FUNC_6(VAR_7, VAR_12))
  goto drop;

 if (FUNC_21(FUNC_14(VAR_7, VAR_0)))
  goto drop;

 FUNC_16(VAR_7);




 FUNC_13(VAR_7);

 FUNC_5(VAR_7);

 if (FUNC_7(&VAR_11->tx_ring, VAR_7))
  goto drop;


 if (VAR_11->flags & VAR_6)
  FUNC_3(&VAR_11->fasync, VAR_5, VAR_4);
 VAR_11->socket.sk->sk_data_ready(VAR_11->socket.sk);

 FUNC_10();
 return VAR_2;

drop:
 FUNC_18(VAR_9->pcpu_stats->tx_dropped);
 FUNC_15(VAR_7);
 FUNC_2(VAR_7);
 FUNC_10();
 return VAR_3;
}
