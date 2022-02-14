
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5e_xdp_info_fifo {int dummy; } ;
struct TYPE_7__ {struct mlx5e_xdp_info_fifo xdpi_fifo; } ;
struct mlx5e_xdpsq {int pdev; TYPE_3__ db; } ;
struct mlx5e_xdp_wqe_info {scalar_t__ num_pkts; } ;
struct TYPE_6__ {int di; int rq; } ;
struct TYPE_5__ {TYPE_4__* xdpf; int dma_addr; } ;
struct mlx5e_xdp_info {int mode; TYPE_2__ page; TYPE_1__ frame; } ;
struct TYPE_8__ {int len; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int) ;
 struct mlx5e_xdp_info FUNC_3 (struct mlx5e_xdp_info_fifo*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct mlx5e_xdpsq *VAR_1,
      struct mlx5e_xdp_wqe_info *VAR_2,
      u32 *VAR_3,
      bool VAR_4)
{
 struct mlx5e_xdp_info_fifo *VAR_5 = &VAR_1->db.xdpi_fifo;
 u16 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_pkts; VAR_6++) {
  struct mlx5e_xdp_info VAR_7 = FUNC_3(VAR_5);

  switch (VAR_7.mode) {
  case 130:

   FUNC_1(VAR_1->pdev, VAR_7.frame.dma_addr,
      VAR_7.frame.xdpf->len, VAR_0);
   FUNC_4(VAR_7.frame.xdpf);
   break;
  case 129:

   FUNC_2(VAR_7.page.rq, &VAR_7.page.di, VAR_4);
   break;
  case 128:

   (*VAR_3)++;
   break;
  default:
   FUNC_0(1);
  }
 }
}
