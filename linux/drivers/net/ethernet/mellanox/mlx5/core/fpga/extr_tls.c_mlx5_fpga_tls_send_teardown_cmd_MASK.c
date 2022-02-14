
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_fpga_dma_buf {TYPE_1__* sg; } ;
struct mlx5_fpga_tls_command_context {struct mlx5_fpga_dma_buf buf; } ;
struct mlx5_core_dev {int fpga; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ size; void* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 struct mlx5_fpga_tls_command_context* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,struct mlx5_fpga_tls_command_context*,int ) ;
 int FUNC_4 (void*,void*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_dev *VAR_5,
         void *VAR_6, u32 VAR_7, gfp_t VAR_8)
{
 struct mlx5_fpga_tls_command_context *VAR_9;
 struct mlx5_fpga_dma_buf *VAR_10;
 void *VAR_11;

 VAR_9 = FUNC_2(sizeof(*VAR_9) + VAR_1, VAR_8);
 if (!VAR_9)
  return;

 VAR_10 = &VAR_9->buf;
 VAR_11 = (VAR_9 + 1);
 FUNC_0(VAR_4, VAR_11, VAR_2, VAR_0);
 FUNC_0(VAR_4, VAR_11, VAR_7, VAR_7);

 FUNC_4(VAR_6, VAR_11);
 FUNC_1(VAR_6);

 VAR_10->sg[0].data = VAR_11;
 VAR_10->sg[0].size = VAR_1;

 FUNC_3(VAR_5->fpga, VAR_9,
          VAR_3);
}
