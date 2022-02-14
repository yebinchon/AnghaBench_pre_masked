
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_fpga_dma_buf {TYPE_1__* sg; } ;
struct TYPE_5__ {struct mlx5_fpga_dma_buf buf; } ;
struct mlx5_setup_stream_context {int syndrome; TYPE_2__ cmd; int status; int comp; } ;
struct mlx5_core_dev {int fpga; } ;
struct TYPE_4__ {int size; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mlx5_core_dev *VAR_9,
       struct mlx5_setup_stream_context *VAR_10)
{
 struct mlx5_fpga_dma_buf *VAR_11;
 void *VAR_12 = VAR_10 + 1;
 int VAR_13, VAR_14 = 0;

 VAR_11 = &VAR_10->cmd.buf;
 VAR_11->sg[0].data = VAR_12;
 VAR_11->sg[0].size = VAR_5;
 FUNC_0(VAR_8, VAR_12, VAR_6, VAR_0);

 FUNC_3(&VAR_10->comp);
 FUNC_1(&VAR_10->status, VAR_4);
 VAR_10->syndrome = -1;

 FUNC_4(VAR_9->fpga, &VAR_10->cmd,
          VAR_7);
 FUNC_7(&VAR_10->comp);

 VAR_13 = FUNC_2(&VAR_10->status, VAR_3);
 if (FUNC_6(VAR_13 == VAR_4))

  return -VAR_1;

 if (FUNC_6(VAR_10->syndrome))
  VAR_14 = -VAR_2;

 FUNC_5(&VAR_10->cmd);
 return VAR_14;
}
