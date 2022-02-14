
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int ctrl; unsigned int num_tx_rings; unsigned int num_rx_rings; int mtu; int fl_bufsz; int rx_dma_off; TYPE_1__* netdev; int * rx_rings; int * tx_rings; } ;
struct nfp_net {int rss_cfg; int cap; TYPE_2__ dp; int vxlan_usecnt; int vxlan_ports; } ;
struct TYPE_3__ {int dev_addr; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*,int) ;
 int FUNC_4 (struct nfp_net*) ;
 int FUNC_5 (struct nfp_net*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (struct nfp_net*,int *,unsigned int) ;
 int FUNC_8 (struct nfp_net*,int *,unsigned int) ;
 int FUNC_9 (struct nfp_net*,int ) ;
 int FUNC_10 (struct nfp_net*,int ,int) ;
 int FUNC_11 (struct nfp_net*,int ,int) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct nfp_net *VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20 = 0;
 unsigned int VAR_21;
 int VAR_22;

 VAR_19 = VAR_17->dp.ctrl;

 if (VAR_17->dp.ctrl & VAR_4) {
  FUNC_5(VAR_17);
  FUNC_4(VAR_17);
  FUNC_10(VAR_17, VAR_8, VAR_17->rss_cfg);
  VAR_20 |= VAR_15;
 }

 if (VAR_17->dp.ctrl & VAR_2) {
  FUNC_2(VAR_17);
  VAR_20 |= VAR_12;
 }

 for (VAR_21 = 0; VAR_21 < VAR_17->dp.num_tx_rings; VAR_21++)
  FUNC_8(VAR_17, &VAR_17->dp.tx_rings[VAR_21], VAR_21);
 for (VAR_21 = 0; VAR_21 < VAR_17->dp.num_rx_rings; VAR_21++)
  FUNC_7(VAR_17, &VAR_17->dp.rx_rings[VAR_21], VAR_21);

 FUNC_11(VAR_17, VAR_10, VAR_17->dp.num_tx_rings == 64 ?
    0xffffffffffffffffULL : ((u64)1 << VAR_17->dp.num_tx_rings) - 1);

 FUNC_11(VAR_17, VAR_9, VAR_17->dp.num_rx_rings == 64 ?
    0xffffffffffffffffULL : ((u64)1 << VAR_17->dp.num_rx_rings) - 1);

 if (VAR_17->dp.netdev)
  FUNC_9(VAR_17, VAR_17->dp.netdev->dev_addr);

 FUNC_10(VAR_17, VAR_7, VAR_17->dp.mtu);

 VAR_18 = VAR_17->dp.fl_bufsz - VAR_17->dp.rx_dma_off - VAR_16;
 FUNC_10(VAR_17, VAR_6, VAR_18);


 VAR_19 |= VAR_1;
 VAR_20 |= VAR_11;
 VAR_20 |= VAR_13;
 VAR_20 |= VAR_14;
 if (VAR_17->cap & VAR_3)
  VAR_19 |= VAR_3;

 FUNC_10(VAR_17, VAR_0, VAR_19);
 VAR_22 = FUNC_3(VAR_17, VAR_20);
 if (VAR_22) {
  FUNC_1(VAR_17);
  return VAR_22;
 }

 VAR_17->dp.ctrl = VAR_19;

 for (VAR_21 = 0; VAR_21 < VAR_17->dp.num_rx_rings; VAR_21++)
  FUNC_6(&VAR_17->dp, &VAR_17->dp.rx_rings[VAR_21]);




 if (VAR_17->dp.ctrl & VAR_5) {
  FUNC_0(&VAR_17->vxlan_ports, 0, sizeof(VAR_17->vxlan_ports));
  FUNC_0(&VAR_17->vxlan_usecnt, 0, sizeof(VAR_17->vxlan_usecnt));
  FUNC_12(VAR_17->dp.netdev);
 }

 return 0;
}
