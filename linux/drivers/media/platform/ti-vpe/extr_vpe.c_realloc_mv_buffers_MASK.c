
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpe_ctx {size_t mv_buf_size; scalar_t__ src_mv_buf_selector; int * mv_buf_dma; void** mv_buf; TYPE_2__* dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;
struct TYPE_4__ {TYPE_1__ v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,size_t,int *,int ) ;
 int FUNC_1 (struct device*,size_t,void*,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_3(struct vpe_ctx *VAR_2, size_t VAR_3)
{
 struct device *VAR_4 = VAR_2->dev->v4l2_dev.dev;

 if (VAR_2->mv_buf_size == VAR_3)
  return 0;

 if (VAR_2->mv_buf[0])
  FUNC_1(VAR_4, VAR_2->mv_buf_size, VAR_2->mv_buf[0],
   VAR_2->mv_buf_dma[0]);

 if (VAR_2->mv_buf[1])
  FUNC_1(VAR_4, VAR_2->mv_buf_size, VAR_2->mv_buf[1],
   VAR_2->mv_buf_dma[1]);

 if (VAR_3 == 0)
  return 0;

 VAR_2->mv_buf[0] = FUNC_0(VAR_4, VAR_3, &VAR_2->mv_buf_dma[0],
    VAR_1);
 if (!VAR_2->mv_buf[0]) {
  FUNC_2(VAR_2->dev, "failed to allocate motion vector buffer\n");
  return -VAR_0;
 }

 VAR_2->mv_buf[1] = FUNC_0(VAR_4, VAR_3, &VAR_2->mv_buf_dma[1],
    VAR_1);
 if (!VAR_2->mv_buf[1]) {
  FUNC_2(VAR_2->dev, "failed to allocate motion vector buffer\n");
  FUNC_1(VAR_4, VAR_3, VAR_2->mv_buf[0],
   VAR_2->mv_buf_dma[0]);

  return -VAR_0;
 }

 VAR_2->mv_buf_size = VAR_3;
 VAR_2->src_mv_buf_selector = 0;

 return 0;
}
