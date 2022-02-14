
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ requested_val; scalar_t__ portnum; int ack; int lock; int wait_q; } ;
struct nfp_flower_priv {TYPE_1__ mtu_conf; } ;
struct nfp_flower_cmsg_portmod {int info; int mtu; int portnum; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nfp_flower_cmsg_portmod* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool
FUNC_6(struct nfp_app *VAR_1, struct sk_buff *VAR_2)
{
 struct nfp_flower_priv *VAR_3 = VAR_1->priv;
 struct nfp_flower_cmsg_portmod *VAR_4;

 VAR_4 = FUNC_2(VAR_2);

 if (!(VAR_4->info & VAR_0))
  return 0;

 FUNC_3(&VAR_3->mtu_conf.lock);
 if (!VAR_3->mtu_conf.requested_val ||
     VAR_3->mtu_conf.portnum != FUNC_1(VAR_4->portnum) ||
     FUNC_0(VAR_4->mtu) != VAR_3->mtu_conf.requested_val) {

  FUNC_4(&VAR_3->mtu_conf.lock);
  return 0;
 }

 VAR_3->mtu_conf.ack = 1;
 VAR_3->mtu_conf.requested_val = 0;
 FUNC_5(&VAR_3->mtu_conf.wait_q);
 FUNC_4(&VAR_3->mtu_conf.lock);

 return 1;
}
