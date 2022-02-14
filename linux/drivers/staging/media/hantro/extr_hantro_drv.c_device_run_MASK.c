
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct hantro_ctx {TYPE_3__* dev; TYPE_1__* codec_ops; } ;
struct TYPE_6__ {int dev; int clocks; TYPE_2__* variant; } ;
struct TYPE_5__ {int num_clocks; } ;
struct TYPE_4__ {int (* run ) (struct hantro_ctx*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct hantro_ctx*) ;
 int FUNC_3 (TYPE_3__*,struct hantro_ctx*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hantro_ctx*) ;
 int FUNC_6 (struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 struct hantro_ctx *VAR_2 = VAR_1;
 struct vb2_v4l2_buffer *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_2);

 VAR_5 = FUNC_0(VAR_2->dev->variant->num_clocks, VAR_2->dev->clocks);
 if (VAR_5)
  goto err_cancel_job;
 VAR_5 = FUNC_4(VAR_2->dev->dev);
 if (VAR_5 < 0)
  goto err_cancel_job;

 FUNC_6(VAR_3, VAR_4, 1);

 VAR_2->codec_ops->run(VAR_2);
 return;

err_cancel_job:
 FUNC_3(VAR_2->dev, VAR_2, 0, VAR_0);
}
