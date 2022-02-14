
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_fpga_dma_buf {int complete; TYPE_1__* sg; } ;
struct mlx5_core_dev {TYPE_3__* fpga; } ;
struct TYPE_6__ {TYPE_2__* tls; } ;
struct TYPE_5__ {int conn; int rx_idr; } ;
struct TYPE_4__ {int size; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct mlx5_fpga_dma_buf*) ;
 struct mlx5_fpga_dma_buf* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,struct mlx5_fpga_dma_buf*) ;
 int FUNC_8 (void*,void*) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct mlx5_core_dev *VAR_11, u32 VAR_12, u32 VAR_13,
       u64 VAR_14)
{
 struct mlx5_fpga_dma_buf *VAR_15;
 int VAR_16 = sizeof(*VAR_15) + VAR_4;
 void *VAR_17;
 void *VAR_18;
 int VAR_19;

 VAR_15 = FUNC_6(VAR_16, VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_18 = (VAR_15 + 1);

 FUNC_10();
 VAR_17 = FUNC_4(&VAR_11->fpga->tls->rx_idr, FUNC_9(VAR_12));
 if (FUNC_12(!VAR_17)) {
  FUNC_11();
  FUNC_2(1, "Received NULL pointer for handle\n");
  FUNC_5(VAR_15);
  return -VAR_1;
 }
 FUNC_8(VAR_17, VAR_18);
 FUNC_11();

 FUNC_0(VAR_9, VAR_18, VAR_7, FUNC_9(VAR_12));
 FUNC_1(VAR_9, VAR_18, VAR_10, FUNC_3(VAR_14));
 FUNC_0(VAR_9, VAR_18, VAR_8, VAR_13);
 FUNC_0(VAR_9, VAR_18, VAR_5, VAR_0);

 VAR_15->sg[0].data = VAR_18;
 VAR_15->sg[0].size = VAR_4;
 VAR_15->complete = VAR_6;

 VAR_19 = FUNC_7(VAR_11->fpga->tls->conn, VAR_15);
 if (VAR_19 < 0)
  FUNC_5(VAR_15);

 return VAR_19;
}
