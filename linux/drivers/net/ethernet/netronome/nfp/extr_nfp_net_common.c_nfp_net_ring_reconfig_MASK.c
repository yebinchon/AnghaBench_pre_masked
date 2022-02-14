
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_dp {int num_r_vecs; int netdev; int num_stack_tx_rings; scalar_t__ num_rx_rings; scalar_t__ xdp_prog; int num_tx_rings; int fl_bufsz; } ;
struct TYPE_2__ {int num_r_vecs; } ;
struct nfp_net {int * r_vecs; TYPE_1__ dp; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (struct nfp_net_dp*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_net_dp*) ;
 int FUNC_4 (struct nfp_net*,struct nfp_net_dp*,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nfp_net*,int *) ;
 int FUNC_6 (struct nfp_net*) ;
 int FUNC_7 (struct nfp_net*) ;
 int FUNC_8 (struct nfp_net*,struct nfp_net_dp*) ;
 int FUNC_9 (struct nfp_net*,struct nfp_net_dp*) ;
 int FUNC_10 (struct nfp_net*) ;
 int FUNC_11 (struct nfp_net*,int *,int) ;
 int FUNC_12 (struct nfp_net_dp*) ;
 int FUNC_13 (struct nfp_net*,struct nfp_net_dp*) ;
 int FUNC_14 (struct nfp_net_dp*) ;
 int FUNC_15 (struct nfp_net*,struct nfp_net_dp*) ;
 int FUNC_16 (struct nfp_net*,char*,int,int) ;

int FUNC_17(struct nfp_net *VAR_0, struct nfp_net_dp *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_1->fl_bufsz = FUNC_3(VAR_1);

 VAR_1->num_stack_tx_rings = VAR_1->num_tx_rings;
 if (VAR_1->xdp_prog)
  VAR_1->num_stack_tx_rings -= VAR_1->num_rx_rings;

 VAR_1->num_r_vecs = FUNC_1(VAR_1->num_rx_rings, VAR_1->num_stack_tx_rings);

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  goto exit_free_dp;

 if (!FUNC_2(VAR_1->netdev)) {
  FUNC_8(VAR_0, VAR_1);
  VAR_4 = 0;
  goto exit_free_dp;
 }


 for (VAR_3 = VAR_0->dp.num_r_vecs; VAR_3 < VAR_1->num_r_vecs; VAR_3++) {
  VAR_4 = FUNC_11(VAR_0, &VAR_0->r_vecs[VAR_3], VAR_3);
  if (VAR_4) {
   VAR_1->num_r_vecs = VAR_3;
   goto err_cleanup_vecs;
  }
 }

 VAR_4 = FUNC_13(VAR_0, VAR_1);
 if (VAR_4)
  goto err_cleanup_vecs;

 VAR_4 = FUNC_15(VAR_0, VAR_1);
 if (VAR_4)
  goto err_free_rx;


 FUNC_7(VAR_0);
 FUNC_6(VAR_0);

 VAR_4 = FUNC_9(VAR_0, VAR_1);
 if (VAR_4) {
  int VAR_5;

  FUNC_6(VAR_0);


  VAR_5 = FUNC_9(VAR_0, VAR_1);
  if (VAR_5)
   FUNC_16(VAR_0, "Can't restore ring config - FW communication failed (%d,%d)\n",
          VAR_4, VAR_5);
 }
 for (VAR_3 = VAR_1->num_r_vecs - 1; VAR_3 >= VAR_0->dp.num_r_vecs; VAR_3--)
  FUNC_5(VAR_0, &VAR_0->r_vecs[VAR_3]);

 FUNC_12(VAR_1);
 FUNC_14(VAR_1);

 FUNC_10(VAR_0);
exit_free_dp:
 FUNC_0(VAR_1);

 return VAR_4;

err_free_rx:
 FUNC_12(VAR_1);
err_cleanup_vecs:
 for (VAR_3 = VAR_1->num_r_vecs - 1; VAR_3 >= VAR_0->dp.num_r_vecs; VAR_3--)
  FUNC_5(VAR_0, &VAR_0->r_vecs[VAR_3]);
 FUNC_0(VAR_1);
 return VAR_4;
}
