
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mtu; int ctrl; scalar_t__ netdev; int fl_bufsz; int rx_dma_dir; } ;
struct nfp_net {scalar_t__ max_mtu; int cap; TYPE_1__ dp; scalar_t__ tx_bar; scalar_t__ qcp_cfg; TYPE_2__* app; } ;
struct TYPE_4__ {scalar_t__ ctrl_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct nfp_net*) ;
 int FUNC_6 (struct nfp_net*) ;
 int FUNC_7 (struct nfp_net*) ;
 int FUNC_8 (struct nfp_net*) ;
 int FUNC_9 (struct nfp_net*,int) ;
 int FUNC_10 (struct nfp_net*) ;
 int FUNC_11 (struct nfp_net*) ;
 int FUNC_12 (struct nfp_net*) ;
 int FUNC_13 (struct nfp_net*,int ,int ) ;
 int FUNC_14 (struct nfp_net*,int ,int ) ;
 int FUNC_15 (scalar_t__) ;

int FUNC_16(struct nfp_net *VAR_14)
{
 int VAR_15;

 VAR_14->dp.rx_dma_dir = VAR_0;

 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15)
  return VAR_15;


 if (!FUNC_6(VAR_14) && VAR_14->app->ctrl_mtu) {
  VAR_14->dp.mtu = FUNC_0(VAR_14->app->ctrl_mtu, VAR_14->max_mtu);
 } else if (VAR_14->max_mtu < VAR_12) {
  VAR_14->dp.mtu = VAR_14->max_mtu;
 } else {
  VAR_14->dp.mtu = VAR_12;
 }
 VAR_14->dp.fl_bufsz = FUNC_4(&VAR_14->dp);

 if (FUNC_1(VAR_14->app))
  VAR_14->dp.ctrl |= VAR_14->cap & VAR_2;

 if (VAR_14->cap & VAR_7) {
  FUNC_10(VAR_14);
  VAR_14->dp.ctrl |= VAR_14->cap & VAR_6 ?:
      VAR_5;
 }


 if (VAR_14->cap & VAR_4)
  VAR_14->dp.ctrl |= VAR_4;


 if (VAR_14->cap & VAR_3) {
  FUNC_5(VAR_14);
  VAR_14->dp.ctrl |= VAR_3;
 }


 VAR_14->qcp_cfg = VAR_14->tx_bar + VAR_13;


 FUNC_13(VAR_14, VAR_1, 0);
 FUNC_14(VAR_14, VAR_9, 0);
 FUNC_14(VAR_14, VAR_8, 0);
 VAR_15 = FUNC_9(VAR_14, VAR_11 |
       VAR_10);
 if (VAR_15)
  return VAR_15;

 if (VAR_14->dp.netdev) {
  FUNC_7(VAR_14);

  VAR_15 = FUNC_3(VAR_14);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_11(VAR_14);
  if (VAR_15)
   goto err_clean_mbox;
 }

 FUNC_12(VAR_14);

 if (!VAR_14->dp.netdev)
  return 0;
 return FUNC_15(VAR_14->dp.netdev);

err_clean_mbox:
 FUNC_2(VAR_14);
 return VAR_15;
}
