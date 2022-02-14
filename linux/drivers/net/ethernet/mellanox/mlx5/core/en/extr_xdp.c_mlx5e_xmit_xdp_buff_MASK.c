
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdp_frame {void* data; int len; } ;
struct xdp_buff {TYPE_2__* rxq; } ;
struct mlx5e_xdpsq {int (* xmit_xdp_frame ) (struct mlx5e_xdpsq*,struct mlx5e_xdp_xmit_data*,struct mlx5e_xdp_info*,int ) ;int pdev; } ;
struct mlx5e_xdp_xmit_data {void* data; void* dma_addr; int len; } ;
struct mlx5e_dma_info {int addr; } ;
struct TYPE_8__ {struct mlx5e_dma_info di; struct mlx5e_rq* rq; } ;
struct TYPE_7__ {void* dma_addr; struct xdp_frame* xdpf; } ;
struct mlx5e_xdp_info {TYPE_4__ page; int mode; TYPE_3__ frame; } ;
struct mlx5e_rq {int flags; } ;
typedef void* dma_addr_t ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ mem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 struct xdp_frame* FUNC_1 (struct xdp_buff*) ;
 void* FUNC_2 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*,int ,int ) ;
 int FUNC_5 (struct mlx5e_xdpsq*,struct mlx5e_xdp_xmit_data*,struct mlx5e_xdp_info*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct xdp_frame*) ;

__attribute__((used)) static inline bool
FUNC_8(struct mlx5e_xdpsq *VAR_5, struct mlx5e_rq *VAR_6,
      struct mlx5e_dma_info *VAR_7, struct xdp_buff *VAR_8)
{
 struct mlx5e_xdp_xmit_data VAR_9;
 struct mlx5e_xdp_info VAR_10;
 struct xdp_frame *VAR_11;
 dma_addr_t VAR_12;

 VAR_11 = FUNC_1(VAR_8);
 if (FUNC_6(!VAR_11))
  return 0;

 VAR_9.data = VAR_11->data;
 VAR_9.len = VAR_11->len;

 if (VAR_8->rxq->mem.type == VAR_1) {
  FUNC_0(VAR_2, VAR_6->flags);

  VAR_10.mode = VAR_3;

  VAR_12 = FUNC_2(VAR_5->pdev, VAR_9.data, VAR_9.len,
       VAR_0);
  if (FUNC_3(VAR_5->pdev, VAR_12)) {
   FUNC_7(VAR_11);
   return 0;
  }

  VAR_9.dma_addr = VAR_12;
  VAR_10.frame.xdpf = VAR_11;
  VAR_10.frame.dma_addr = VAR_12;
 } else {






  VAR_10.mode = VAR_4;

  VAR_12 = VAR_7->addr + (VAR_11->data - (void *)VAR_11);
  FUNC_4(VAR_5->pdev, VAR_12, VAR_9.len,
        VAR_0);

  VAR_9.dma_addr = VAR_12;
  VAR_10.page.rq = VAR_6;
  VAR_10.page.di = *VAR_7;
 }

 return VAR_5->xmit_xdp_frame(VAR_5, &VAR_9, &VAR_10, 0);
}
