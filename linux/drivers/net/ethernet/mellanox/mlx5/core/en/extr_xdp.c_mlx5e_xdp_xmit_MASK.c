
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xdp_frame {int len; int data; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ wqe; } ;
struct mlx5e_xdpsq {TYPE_4__ mpwqe; int pdev; int (* xmit_xdp_frame ) (struct mlx5e_xdpsq*,struct mlx5e_xdp_xmit_data*,struct mlx5e_xdp_info*,int ) ;} ;
struct mlx5e_xdp_xmit_data {int len; int dma_addr; int data; } ;
struct TYPE_7__ {int dma_addr; struct xdp_frame* xdpf; } ;
struct mlx5e_xdp_info {TYPE_3__ frame; int mode; } ;
struct TYPE_6__ {int num; TYPE_1__** c; } ;
struct mlx5e_priv {TYPE_2__ channels; } ;
struct TYPE_5__ {struct mlx5e_xdpsq xdpsq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct mlx5e_xdpsq*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_xdpsq*) ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct mlx5e_xdpsq*,struct mlx5e_xdp_xmit_data*,struct mlx5e_xdp_info*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct xdp_frame*) ;

int FUNC_11(struct net_device *VAR_7, int VAR_8, struct xdp_frame **VAR_9,
     u32 VAR_10)
{
 struct mlx5e_priv *VAR_11 = FUNC_6(VAR_7);
 struct mlx5e_xdpsq *VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15;


 if (FUNC_9(!FUNC_4(VAR_11)))
  return -VAR_2;

 if (FUNC_9(VAR_10 & ~VAR_5))
  return -VAR_1;

 VAR_14 = FUNC_7();

 if (FUNC_9(VAR_14 >= VAR_11->channels.num))
  return -VAR_3;

 VAR_12 = &VAR_11->channels.c[VAR_14]->xdpsq;

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  struct xdp_frame *VAR_16 = VAR_9[VAR_15];
  struct mlx5e_xdp_xmit_data VAR_17;
  struct mlx5e_xdp_info VAR_18;

  VAR_17.data = VAR_16->data;
  VAR_17.len = VAR_16->len;
  VAR_17.dma_addr = FUNC_0(VAR_12->pdev, VAR_17.data,
       VAR_17.len, VAR_0);

  if (FUNC_9(FUNC_1(VAR_12->pdev, VAR_17.dma_addr))) {
   FUNC_10(VAR_16);
   VAR_13++;
   continue;
  }

  VAR_18.mode = VAR_4;
  VAR_18.frame.xdpf = VAR_16;
  VAR_18.frame.dma_addr = VAR_17.dma_addr;

  if (FUNC_9(!VAR_12->xmit_xdp_frame(VAR_12, &VAR_17, &VAR_18, 0))) {
   FUNC_2(VAR_12->pdev, VAR_17.dma_addr,
      VAR_17.len, VAR_0);
   FUNC_10(VAR_16);
   VAR_13++;
  }
 }

 if (VAR_10 & VAR_6) {
  if (VAR_12->mpwqe.wqe)
   FUNC_3(VAR_12);
  FUNC_5(VAR_12);
 }

 return VAR_8 - VAR_13;
}
