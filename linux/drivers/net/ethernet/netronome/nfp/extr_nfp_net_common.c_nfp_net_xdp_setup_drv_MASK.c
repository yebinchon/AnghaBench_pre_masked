
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_dp {scalar_t__ rx_dma_off; int rx_dma_dir; int num_tx_rings; struct bpf_prog* xdp_prog; } ;
struct TYPE_2__ {scalar_t__ rx_offset; scalar_t__ num_rx_rings; int xdp_prog; } ;
struct nfp_net {int xdp; TYPE_1__ dp; } ;
struct netdev_bpf {int extack; struct bpf_prog* prog; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct bpf_prog*) ;
 scalar_t__ VAR_4 ;
 struct nfp_net_dp* FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*,struct nfp_net_dp*,int ) ;
 int FUNC_3 (int *,struct netdev_bpf*) ;
 int FUNC_4 (int *,struct netdev_bpf*) ;

__attribute__((used)) static int FUNC_5(struct nfp_net *VAR_5, struct netdev_bpf *VAR_6)
{
 struct bpf_prog *VAR_7 = VAR_6->prog;
 struct nfp_net_dp *VAR_8;
 int VAR_9;

 if (!FUNC_3(&VAR_5->xdp, VAR_6))
  return -VAR_2;

 if (!VAR_7 == !VAR_5->dp.xdp_prog) {
  FUNC_0(VAR_5->dp.xdp_prog, VAR_7);
  FUNC_4(&VAR_5->xdp, VAR_6);
  return 0;
 }

 VAR_8 = FUNC_1(VAR_5);
 if (!VAR_8)
  return -VAR_3;

 VAR_8->xdp_prog = VAR_7;
 VAR_8->num_tx_rings += VAR_7 ? VAR_5->dp.num_rx_rings : -VAR_5->dp.num_rx_rings;
 VAR_8->rx_dma_dir = VAR_7 ? VAR_0 : VAR_1;
 VAR_8->rx_dma_off = VAR_7 ? VAR_4 - VAR_5->dp.rx_offset : 0;


 VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_6->extack);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_5->xdp, VAR_6);
 return 0;
}
