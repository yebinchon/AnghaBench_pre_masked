
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_fpga_tls {int rx_idr_spinlock; int rx_idr; int tx_idr_spinlock; int tx_idr; } ;
struct mlx5_core_dev {TYPE_1__* fpga; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct mlx5_fpga_tls* tls; } ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 void* FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,void*,int ,int ) ;
 int FUNC_3 () ;

void FUNC_4(struct mlx5_core_dev *VAR_0, u32 VAR_1,
       gfp_t VAR_2, bool VAR_3)
{
 struct mlx5_fpga_tls *VAR_4 = VAR_0->fpga->tls;
 void *VAR_5;

 if (VAR_3)
  VAR_5 = FUNC_1(&VAR_4->tx_idr,
        &VAR_4->tx_idr_spinlock,
        VAR_1);
 else
  VAR_5 = FUNC_1(&VAR_4->rx_idr,
        &VAR_4->rx_idr_spinlock,
        VAR_1);

 if (!VAR_5) {
  FUNC_0(VAR_0->fpga, "No flow information for swid %u\n",
         VAR_1);
  return;
 }

 FUNC_3();
 FUNC_2(VAR_0, VAR_5, VAR_1, VAR_2);
}
