
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_fpga_tls_command_context {int dummy; } ;
struct mlx5_fpga_dma_buf {TYPE_1__* sg; } ;
struct mlx5_fpga_device {int dummy; } ;
struct mlx5_fpga_conn {int dummy; } ;
struct TYPE_2__ {int data; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,scalar_t__) ;
 int FUNC_2 (struct mlx5_fpga_tls_command_context*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct mlx5_fpga_conn *VAR_2,
      struct mlx5_fpga_device *VAR_3,
      struct mlx5_fpga_tls_command_context *VAR_4,
      struct mlx5_fpga_dma_buf *VAR_5)
{
 if (VAR_5) {
  u32 VAR_6 = FUNC_0(VAR_1, VAR_5->sg[0].data, VAR_6);

  if (VAR_6)
   FUNC_1(VAR_3,
          "Teardown stream failed with syndrome = %d",
          VAR_6);
 }
 FUNC_2(VAR_4);
}
