
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int cqn; } ;
struct mlx5_cqwq {scalar_t__ cc; } ;
struct TYPE_5__ {int mdev; TYPE_1__ mcq; struct mlx5_cqwq wq; } ;
struct mlx5e_txqsq {TYPE_2__ cq; int sqn; TYPE_3__* channel; } ;
struct mlx5_err_cqe {int vendor_err_synd; int syndrome; } ;
struct mlx5_cqe64 {int dummy; } ;
struct TYPE_6__ {int netdev; } ;


 int FUNC_0 (struct mlx5_cqe64*) ;
 int FUNC_1 (struct mlx5_cqwq*,scalar_t__) ;
 int FUNC_2 (int ,struct mlx5_err_cqe*) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_txqsq *VAR_0,
     struct mlx5_err_cqe *VAR_1)
{
 struct mlx5_cqwq *VAR_2 = &VAR_0->cq.wq;
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_2->cc - 1);

 FUNC_3(VAR_0->channel->netdev,
     "Error cqe on cqn 0x%x, ci 0x%x, sqn 0x%x, opcode 0x%x, syndrome 0x%x, vendor syndrome 0x%x\n",
     VAR_0->cq.mcq.cqn, VAR_3, VAR_0->sqn,
     FUNC_0((struct mlx5_cqe64 *)VAR_1),
     VAR_1->syndrome, VAR_1->vendor_err_synd);
 FUNC_2(VAR_0->cq.mdev, VAR_1);
}
