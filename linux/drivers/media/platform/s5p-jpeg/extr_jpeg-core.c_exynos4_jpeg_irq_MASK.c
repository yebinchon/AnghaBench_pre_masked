
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_2__ fh; int subsampling; } ;
struct s5p_jpeg {scalar_t__ irq_ret; int m2m_dev; int slock; int regs; TYPE_1__* variant; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;
 struct s5p_jpeg_ctx* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_12, void *VAR_13)
{
 unsigned int VAR_14;
 struct vb2_v4l2_buffer *VAR_15, *VAR_16;
 struct s5p_jpeg *VAR_17 = VAR_13;
 struct s5p_jpeg_ctx *VAR_18;
 unsigned long VAR_19 = 0;

 FUNC_5(&VAR_17->slock);

 FUNC_4(VAR_17->regs, 0);

 VAR_18 = FUNC_9(VAR_17->m2m_dev);

 VAR_15 = FUNC_11(VAR_18->fh.m2m_ctx);
 VAR_16 = FUNC_8(VAR_18->fh.m2m_ctx);

 VAR_14 = FUNC_1(VAR_17->regs);

 if (VAR_14) {
  switch (VAR_14 & 0x1f) {
  case 0x1:
   VAR_17->irq_ret = VAR_3;
   break;
  case 0x2:
   VAR_17->irq_ret = VAR_6;
   break;
  case 0x4:
   VAR_17->irq_ret = VAR_0;
   break;
  case 0x8:
   VAR_17->irq_ret = VAR_2;
   break;
  case 0x10:
   VAR_17->irq_ret = VAR_1;
   break;
  default:
   VAR_17->irq_ret = VAR_4;
   break;
  }
 } else {
  VAR_17->irq_ret = VAR_4;
 }

 if (VAR_17->irq_ret == VAR_6) {
  if (VAR_18->mode == VAR_8) {
   VAR_19 = FUNC_2(VAR_17->regs);
   FUNC_12(&VAR_16->vb2_buf,
     0, VAR_19);
  }
  FUNC_7(VAR_15, VAR_10);
  FUNC_7(VAR_16, VAR_10);
 } else {
  FUNC_7(VAR_15, VAR_11);
  FUNC_7(VAR_16, VAR_11);
 }

 if (VAR_17->variant->version == VAR_9)
  VAR_18->subsampling = FUNC_0(VAR_17->regs);

 FUNC_3(VAR_17->regs, VAR_7);

 FUNC_6(&VAR_17->slock);

 FUNC_10(VAR_17->m2m_dev, VAR_18->fh.m2m_ctx);
 return VAR_5;
}
