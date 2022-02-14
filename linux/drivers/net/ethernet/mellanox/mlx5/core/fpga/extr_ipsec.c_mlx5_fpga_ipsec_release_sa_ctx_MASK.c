
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cmd; } ;
struct TYPE_6__ {TYPE_1__ ipsec_sa_v1; } ;
struct mlx5_fpga_ipsec_sa_ctx {int hash; TYPE_3__ hw_sa; TYPE_2__* dev; } ;
struct mlx5_fpga_ipsec {int sa_hash_lock; int sa_hash; } ;
struct mlx5_fpga_device {struct mlx5_fpga_ipsec* ipsec; } ;
struct TYPE_5__ {struct mlx5_fpga_device* fpga; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_fpga_ipsec*) ;
 int FUNC_2 (struct mlx5_fpga_device*,TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct mlx5_fpga_ipsec_sa_ctx *VAR_3)
{
 struct mlx5_fpga_device *VAR_4 = VAR_3->dev->fpga;
 struct mlx5_fpga_ipsec *VAR_5 = VAR_4->ipsec;
 int VAR_6 = FUNC_1(VAR_4->ipsec) ?
   VAR_1 :
   VAR_0;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, &VAR_3->hw_sa, VAR_6);
 VAR_3->hw_sa.ipsec_sa_v1.cmd = 0;
 if (VAR_7) {
  FUNC_0(VAR_7);
  return;
 }

 FUNC_3(&VAR_5->sa_hash_lock);
 FUNC_0(FUNC_5(&VAR_5->sa_hash, &VAR_3->hash,
           VAR_2));
 FUNC_4(&VAR_5->sa_hash_lock);
}
