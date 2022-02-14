
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfp_repr {TYPE_4__* dst; TYPE_1__* port; } ;
struct TYPE_10__ {int ack; int requested_val; int lock; int wait_q; int portnum; } ;
struct nfp_flower_priv {int flower_ext_feats; TYPE_5__ mtu_conf; } ;
struct nfp_app {int cpp; struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int port_id; } ;
struct TYPE_8__ {TYPE_2__ port_info; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct nfp_flower_priv*) ;
 int FUNC_4 (struct nfp_repr*,int ,int,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct nfp_app *VAR_5, struct net_device *VAR_6,
      int VAR_7)
{
 struct nfp_flower_priv *VAR_8 = VAR_5->priv;
 struct nfp_repr *VAR_9 = FUNC_0(VAR_6);
 int VAR_10;


 if (VAR_9->port->type != VAR_4)
  return 0;

 if (!(VAR_8->flower_ext_feats & VAR_2)) {
  FUNC_2(VAR_5->cpp, "Physical port MTU setting not supported\n");
  return -VAR_0;
 }

 FUNC_6(&VAR_8->mtu_conf.lock);
 VAR_8->mtu_conf.ack = 0;
 VAR_8->mtu_conf.requested_val = VAR_7;
 VAR_8->mtu_conf.portnum = VAR_9->dst->u.port_info.port_id;
 FUNC_7(&VAR_8->mtu_conf.lock);

 VAR_10 = FUNC_4(VAR_9, FUNC_1(VAR_6), VAR_7,
          1);
 if (VAR_10) {
  FUNC_6(&VAR_8->mtu_conf.lock);
  VAR_8->mtu_conf.requested_val = 0;
  FUNC_7(&VAR_8->mtu_conf.lock);
  return VAR_10;
 }


 if (!FUNC_8(VAR_8->mtu_conf.wait_q,
    FUNC_3(VAR_8),
    VAR_3)) {
  FUNC_6(&VAR_8->mtu_conf.lock);
  VAR_8->mtu_conf.requested_val = 0;
  FUNC_7(&VAR_8->mtu_conf.lock);
  FUNC_5(VAR_5->cpp, "MTU change not verified with fw\n");
  return -VAR_1;
 }

 return 0;
}
