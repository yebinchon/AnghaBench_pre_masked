
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int timestamp; } ;
struct vb2_v4l2_buffer {TYPE_3__ vb2_buf; int timecode; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_2__ fh; int subsampling; } ;
struct s5p_jpeg {int irq_status; int slock; int m2m_dev; int regs; int dev; TYPE_1__* variant; } ;
typedef int irqreturn_t ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_4__ {scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_11 (int ) ;
 struct s5p_jpeg_ctx* FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_3__*,int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_13, void *VAR_14)
{
 struct s5p_jpeg *VAR_15 = VAR_14;
 struct s5p_jpeg_ctx *VAR_16;
 struct vb2_v4l2_buffer *VAR_17, *VAR_18;
 unsigned long VAR_19 = 0;
 enum vb2_buffer_state VAR_20 = VAR_11;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 u32 VAR_23;

 FUNC_8(&VAR_15->slock);

 VAR_23 = FUNC_6(VAR_15->regs);
 if (VAR_23 & VAR_5) {
  FUNC_2(VAR_15->regs);
  VAR_21 = 1;
  FUNC_0(VAR_15->dev, "Interrupt timeout occurred.\n");
 }

 VAR_23 = FUNC_4(VAR_15->regs);
 FUNC_1(VAR_15->regs, VAR_23);

 VAR_15->irq_status |= VAR_23;

 if (VAR_15->variant->version == VAR_10 &&
     VAR_23 & VAR_4) {
  VAR_22 = 1;
  FUNC_0(VAR_15->dev, "Syntax error or unrecoverable error occurred.\n");
 }

 VAR_16 = FUNC_12(VAR_15->m2m_dev);

 if (!VAR_16)
  goto exit_unlock;

 if ((VAR_23 & VAR_0) &&
     (VAR_16->mode == VAR_8)) {
  FUNC_7(VAR_15->regs);
  goto exit_unlock;
 }

 if (VAR_15->irq_status & (VAR_1 |
    VAR_6 |
    VAR_2 |
    VAR_3))
  VAR_19 = FUNC_3(VAR_15->regs);
 else if (VAR_21 || VAR_22)
  VAR_20 = VAR_12;
 else
  goto exit_unlock;

 VAR_17 = FUNC_14(VAR_16->fh.m2m_ctx);
 VAR_18 = FUNC_11(VAR_16->fh.m2m_ctx);

 VAR_18->timecode = VAR_17->timecode;
 VAR_18->vb2_buf.timestamp = VAR_17->vb2_buf.timestamp;

 FUNC_10(VAR_17, VAR_20);
 if (VAR_16->mode == VAR_9)
  FUNC_15(&VAR_18->vb2_buf, 0, VAR_19);
 FUNC_10(VAR_18, VAR_20);

 VAR_16->subsampling =
   FUNC_5(VAR_15->regs);

 FUNC_9(&VAR_15->slock);

 FUNC_13(VAR_15->m2m_dev, VAR_16->fh.m2m_ctx);
 return VAR_7;

exit_unlock:
 FUNC_9(&VAR_15->slock);
 return VAR_7;
}
