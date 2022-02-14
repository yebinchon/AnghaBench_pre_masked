
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tls_crypto_info {int dummy; } ;
struct mlx5_fpga_tls {int rx_idr_spinlock; int rx_idr; int tx_idr_spinlock; int tx_idr; } ;
struct mlx5_core_dev {TYPE_1__* fpga; } ;
struct TYPE_2__ {struct mlx5_fpga_tls* tls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int,int) ;
 int FUNC_1 (struct mlx5_core_dev*,void*,struct tls_crypto_info*,int,int) ;
 int FUNC_2 (int *,int *,void*) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_2 ;

int FUNC_4(struct mlx5_core_dev *VAR_3, void *VAR_4,
      struct tls_crypto_info *VAR_5,
      u32 VAR_6, u32 *VAR_7,
      bool VAR_8)
{
 struct mlx5_fpga_tls *VAR_9 = VAR_3->fpga->tls;
 int VAR_10 = -VAR_1;
 u32 VAR_11;

 if (VAR_8)
  VAR_10 = FUNC_2(&VAR_9->tx_idr,
            &VAR_9->tx_idr_spinlock, VAR_4);
 else
  VAR_10 = FUNC_2(&VAR_9->rx_idr,
            &VAR_9->rx_idr_spinlock, VAR_4);

 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = VAR_10;
 FUNC_0(VAR_2, VAR_4, VAR_8, VAR_8 ? 1 : 0);

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_11,
          VAR_6);
 if (VAR_10 && VAR_10 != -VAR_0)
  goto free_swid;

 *VAR_7 = VAR_11;
 return 0;
free_swid:
 if (VAR_8)
  FUNC_3(&VAR_9->tx_idr,
        &VAR_9->tx_idr_spinlock, VAR_11);
 else
  FUNC_3(&VAR_9->rx_idr,
        &VAR_9->rx_idr_spinlock, VAR_11);

 return VAR_10;
}
