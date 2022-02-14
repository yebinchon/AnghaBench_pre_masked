
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fpga_dma_buf {int dma_dir; TYPE_1__* sg; } ;
struct mlx5_fpga_conn {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx5_fpga_dma_buf*) ;
 struct mlx5_fpga_dma_buf* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct mlx5_fpga_conn*,struct mlx5_fpga_dma_buf*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_fpga_conn *VAR_3)
{
 struct mlx5_fpga_dma_buf *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4) + VAR_2, 0);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->sg[0].data = (void *)(VAR_4 + 1);
 VAR_4->sg[0].size = VAR_2;
 VAR_4->dma_dir = VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_4);

 return VAR_5;
}
