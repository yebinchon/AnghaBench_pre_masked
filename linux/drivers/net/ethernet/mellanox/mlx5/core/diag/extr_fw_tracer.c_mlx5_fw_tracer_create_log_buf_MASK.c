
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; void* log_buf; int dma; } ;
struct mlx5_fw_tracer {TYPE_2__ buff; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct device*,void*,int ,int ) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_core_dev*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct mlx5_fw_tracer *VAR_5)
{
 struct mlx5_core_dev *VAR_6 = VAR_5->dev;
 struct device *VAR_7 = &VAR_6->pdev->dev;
 dma_addr_t VAR_8;
 void *VAR_9;
 gfp_t VAR_10;
 int VAR_11;

 VAR_5->buff.size = VAR_3;

 VAR_10 = VAR_2 | VAR_4;
 VAR_9 = (void *)FUNC_0(VAR_10,
     FUNC_4(VAR_5->buff.size));
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  FUNC_5(VAR_6, "FWTracer: Failed to allocate pages, %d\n", VAR_11);
  return VAR_11;
 }
 VAR_5->buff.log_buf = VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_9, VAR_5->buff.size, VAR_0);
 if (FUNC_2(VAR_7, VAR_8)) {
  FUNC_5(VAR_6, "FWTracer: Unable to map DMA: %d\n",
          FUNC_2(VAR_7, VAR_8));
  VAR_11 = -VAR_1;
  goto free_pages;
 }
 VAR_5->buff.dma = VAR_8;

 return 0;

free_pages:
 FUNC_3((unsigned long)VAR_5->buff.log_buf, FUNC_4(VAR_5->buff.size));

 return VAR_11;
}
