
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_7__ {int tx_errors; } ;
struct net_device {TYPE_3__ stats; int needed_headroom; } ;
struct TYPE_5__ {int daddr; int saddr; } ;
struct gtp_pktinfo {int gtph_port; TYPE_4__* rt; TYPE_2__* iph; TYPE_1__ fl4; int sk; int dev; } ;
typedef int netdev_tx_t ;
struct TYPE_8__ {int dst; } ;
struct TYPE_6__ {int tos; int daddr; int saddr; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,struct gtp_pktinfo*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int *,int *) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (TYPE_4__*,int ,struct sk_buff*,int ,int ,int ,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_2->protocol);
 struct gtp_pktinfo VAR_5;
 int VAR_6;


 if (FUNC_7(VAR_2, VAR_3->needed_headroom))
  goto tx_err;

 FUNC_8(VAR_2);


 FUNC_5();
 switch (VAR_4) {
 case 128:
  VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 FUNC_6();

 if (VAR_6 < 0)
  goto tx_err;

 switch (VAR_4) {
 case 128:
  FUNC_3(VAR_5.dev, "gtp -> IP src: %pI4 dst: %pI4\n",
      &VAR_5.iph->saddr, &VAR_5.iph->daddr);
  FUNC_9(VAR_5.rt, VAR_5.sk, VAR_2,
        VAR_5.fl4.saddr, VAR_5.fl4.daddr,
        VAR_5.iph->tos,
        FUNC_2(&VAR_5.rt->dst),
        0,
        VAR_5.gtph_port, VAR_5.gtph_port,
        1, 0);
  break;
 }

 return VAR_1;
tx_err:
 VAR_3->stats.tx_errors++;
 FUNC_0(VAR_2);
 return VAR_1;
}
