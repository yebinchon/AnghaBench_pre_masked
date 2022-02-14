
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct mlx5e_wqe_frag_info {scalar_t__ offset; TYPE_2__* di; } ;
struct mlx5e_rx_wqe_cyc {TYPE_1__* data; } ;
struct TYPE_8__ {scalar_t__ headroom; } ;
struct TYPE_10__ {int num_frags; } ;
struct TYPE_9__ {TYPE_5__ info; } ;
struct mlx5e_rq {TYPE_3__ buff; TYPE_4__ wqe; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_6__ {int addr; } ;


 int FUNC_0 (scalar_t__) ;
 struct mlx5e_wqe_frag_info* FUNC_1 (struct mlx5e_rq*,int ) ;
 int FUNC_2 (struct mlx5e_rq*,struct mlx5e_wqe_frag_info*) ;
 int FUNC_3 (struct mlx5e_rq*,struct mlx5e_wqe_frag_info*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mlx5e_rq *VAR_0, struct mlx5e_rx_wqe_cyc *VAR_1,
         u16 VAR_2)
{
 struct mlx5e_wqe_frag_info *VAR_3 = FUNC_1(VAR_0, VAR_2);
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->wqe.info.num_frags; VAR_5++, VAR_3++) {
  VAR_4 = FUNC_2(VAR_0, VAR_3);
  if (FUNC_4(VAR_4))
   goto free_frags;

  VAR_1->data[VAR_5].addr = FUNC_0(VAR_3->di->addr +
      VAR_3->offset + VAR_0->buff.headroom);
 }

 return 0;

free_frags:
 while (--VAR_5 >= 0)
  FUNC_3(VAR_0, --VAR_3, 1);

 return VAR_4;
}
