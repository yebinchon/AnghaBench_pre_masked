
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct dpaa2_eth_priv {int num_channels; struct dpaa2_eth_channel** channel; int xdp_prog; } ;
struct TYPE_2__ {int prog; } ;
struct dpaa2_eth_channel {TYPE_1__ xdp; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_2 (struct bpf_prog*,int) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (struct bpf_prog*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct dpaa2_eth_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct dpaa2_eth_priv*,int ,int) ;
 int FUNC_10 (struct dpaa2_eth_priv*,int) ;
 struct bpf_prog* FUNC_11 (int *,struct bpf_prog*) ;
 int FUNC_12 (struct dpaa2_eth_priv*,int ) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_1, struct bpf_prog *VAR_2)
{
 struct dpaa2_eth_priv *VAR_3 = FUNC_7(VAR_1);
 struct dpaa2_eth_channel *VAR_4;
 struct bpf_prog *VAR_5;
 bool VAR_6, VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2 && !FUNC_12(VAR_3, VAR_1->mtu))
  return -VAR_0;

 if (VAR_2) {
  VAR_2 = FUNC_2(VAR_2, VAR_3->num_channels);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
 }

 VAR_6 = FUNC_8(VAR_1);
 VAR_7 = (!!VAR_3->xdp_prog != !!VAR_2);

 if (VAR_6)
  FUNC_6(VAR_1);






 if (VAR_7) {
  VAR_9 = FUNC_9(VAR_3, VAR_1->mtu, !!VAR_2);
  if (VAR_9)
   goto out_err;
  VAR_9 = FUNC_10(VAR_3, !!VAR_2);
  if (VAR_9)
   goto out_err;
 }

 VAR_5 = FUNC_11(&VAR_3->xdp_prog, VAR_2);
 if (VAR_5)
  FUNC_3(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_3->num_channels; VAR_8++) {
  VAR_4 = VAR_3->channel[VAR_8];
  VAR_5 = FUNC_11(&VAR_4->xdp.prog, VAR_2);
  if (VAR_5)
   FUNC_3(VAR_5);
 }

 if (VAR_6) {
  VAR_9 = FUNC_5(VAR_1);
  if (VAR_9)
   return VAR_9;
 }

 return 0;

out_err:
 if (VAR_2)
  FUNC_4(VAR_2, VAR_3->num_channels);
 if (VAR_6)
  FUNC_5(VAR_1);

 return VAR_9;
}
