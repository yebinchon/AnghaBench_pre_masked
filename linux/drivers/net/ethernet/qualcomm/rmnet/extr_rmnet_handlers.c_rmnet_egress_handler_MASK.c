
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {struct net_device* dev; int sk; } ;
struct rmnet_priv {TYPE_2__* pcpu_stats; int mux_id; struct net_device* real_dev; } ;
struct rmnet_port {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int tx_drops; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct rmnet_priv* FUNC_2 (struct net_device*) ;
 struct rmnet_port* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct rmnet_port*,int ,struct net_device*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct sk_buff *VAR_0)
{
 struct net_device *VAR_1;
 struct rmnet_port *VAR_2;
 struct rmnet_priv *VAR_3;
 u8 VAR_4;

 FUNC_6(VAR_0->sk, 8);

 VAR_1 = VAR_0->dev;
 VAR_3 = FUNC_2(VAR_1);
 VAR_0->dev = VAR_3->real_dev;
 VAR_4 = VAR_3->mux_id;

 VAR_2 = FUNC_3(VAR_0->dev);
 if (!VAR_2)
  goto drop;

 if (FUNC_4(VAR_0, VAR_2, VAR_4, VAR_1))
  goto drop;

 FUNC_5(VAR_0, VAR_1);

 FUNC_0(VAR_0);
 return;

drop:
 FUNC_7(VAR_3->pcpu_stats->stats.tx_drops);
 FUNC_1(VAR_0);
}
