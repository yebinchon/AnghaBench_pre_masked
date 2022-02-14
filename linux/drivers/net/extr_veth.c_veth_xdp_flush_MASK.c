
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_xdp_tx_bq {int dummy; } ;
struct veth_rq {int xdp_prog; } ;
struct veth_priv {struct veth_rq* rq; int peer; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct veth_rq*) ;
 struct veth_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct net_device* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 size_t FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,struct veth_xdp_tx_bq*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_0, struct veth_xdp_tx_bq *VAR_1)
{
 struct veth_priv *VAR_2, *VAR_3 = FUNC_1(VAR_0);
 struct net_device *VAR_4;
 struct veth_rq *VAR_5;

 FUNC_4();
 FUNC_8(VAR_0, VAR_1);
 VAR_4 = FUNC_3(VAR_3->peer);
 if (FUNC_6(!VAR_4))
  goto out;

 VAR_2 = FUNC_1(VAR_4);
 VAR_5 = &VAR_2->rq[FUNC_7(VAR_4)];

 if (FUNC_6(!FUNC_2(VAR_5->xdp_prog)))
  goto out;

 FUNC_0(VAR_5);
out:
 FUNC_5();
}
