
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_mmc_host {int lock; int sg_len; int sg_ptr; TYPE_1__* pdev; TYPE_2__* data; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct tmio_mmc_host*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_5)
{
 struct tmio_mmc_host *VAR_6 = (struct tmio_mmc_host *)VAR_5;
 enum dma_data_direction VAR_7;

 FUNC_3(&VAR_6->lock);

 if (!VAR_6->data)
  goto out;

 if (VAR_6->data->flags & VAR_2)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 FUNC_2(VAR_6, 0);
 FUNC_1(&VAR_6->pdev->dev, VAR_6->sg_ptr, VAR_6->sg_len, VAR_7);

 if (VAR_7 == VAR_0)
  FUNC_0(VAR_3, &VAR_4);

 FUNC_5(VAR_6);
out:
 FUNC_4(&VAR_6->lock);
}
