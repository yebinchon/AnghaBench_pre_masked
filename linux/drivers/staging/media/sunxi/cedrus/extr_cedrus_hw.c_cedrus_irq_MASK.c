
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct cedrus_dev {int v4l2_dev; TYPE_1__** dec_ops; int m2m_dev; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct cedrus_ctx {size_t current_codec; TYPE_3__ fh; TYPE_2__* dev; } ;
typedef int irqreturn_t ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
typedef enum cedrus_irq_status { ____Placeholder_cedrus_irq_status } cedrus_irq_status ;
struct TYPE_5__ {int m2m_dev; } ;
struct TYPE_4__ {int (* irq_status ) (struct cedrus_ctx*) ;int (* irq_clear ) (struct cedrus_ctx*) ;int (* irq_disable ) (struct cedrus_ctx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cedrus_ctx*) ;
 int FUNC_1 (struct cedrus_ctx*) ;
 int FUNC_2 (struct cedrus_ctx*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 struct cedrus_ctx* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct cedrus_dev *VAR_8 = VAR_7;
 struct cedrus_ctx *VAR_9;
 struct vb2_v4l2_buffer *VAR_10, *VAR_11;
 enum vb2_buffer_state VAR_12;
 enum cedrus_irq_status VAR_13;

 VAR_9 = FUNC_6(VAR_8->m2m_dev);
 if (!VAR_9) {
  FUNC_3(&VAR_8->v4l2_dev,
    "Instance released before the end of transaction\n");
  return VAR_3;
 }

 VAR_13 = VAR_8->dec_ops[VAR_9->current_codec]->irq_status(VAR_9);
 if (VAR_13 == VAR_1)
  return VAR_3;

 VAR_8->dec_ops[VAR_9->current_codec]->irq_disable(VAR_9);
 VAR_8->dec_ops[VAR_9->current_codec]->irq_clear(VAR_9);

 VAR_10 = FUNC_8(VAR_9->fh.m2m_ctx);
 VAR_11 = FUNC_5(VAR_9->fh.m2m_ctx);

 if (!VAR_10 || !VAR_11) {
  FUNC_3(&VAR_8->v4l2_dev,
    "Missing source and/or destination buffers\n");
  return VAR_2;
 }

 if (VAR_13 == VAR_0)
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_4;

 FUNC_4(VAR_10, VAR_12);
 FUNC_4(VAR_11, VAR_12);

 FUNC_7(VAR_9->dev->m2m_dev, VAR_9->fh.m2m_ctx);

 return VAR_2;
}
