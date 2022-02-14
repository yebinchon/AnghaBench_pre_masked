
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; TYPE_2__ vb2_buf; int timecode; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_1__ fh; int subsampling; } ;
struct s5p_jpeg {int m2m_dev; int regs; int slock; } ;
typedef int irqreturn_t ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_12 (int ) ;
 struct s5p_jpeg_ctx* FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_17(int VAR_6, void *VAR_7)
{
 struct s5p_jpeg *VAR_8 = VAR_7;
 struct s5p_jpeg_ctx *VAR_9;
 struct vb2_v4l2_buffer *VAR_10, *VAR_11;
 unsigned long VAR_12 = 0;
 enum vb2_buffer_state VAR_13 = VAR_4;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 bool VAR_16 = 0;

 FUNC_9(&VAR_8->slock);

 VAR_9 = FUNC_13(VAR_8->m2m_dev);

 VAR_10 = FUNC_15(VAR_9->fh.m2m_ctx);
 VAR_11 = FUNC_12(VAR_9->fh.m2m_ctx);

 if (VAR_9->mode == VAR_2)
  VAR_14 = FUNC_4(VAR_8->regs);
 VAR_15 = FUNC_8(VAR_8->regs);
 VAR_16 = FUNC_6(VAR_8->regs);
 if (VAR_9->mode == VAR_1)
  VAR_16 = VAR_16 &&
     FUNC_7(VAR_8->regs);

 if (VAR_14) {
  VAR_13 = VAR_5;
  FUNC_0(VAR_8->regs);
 } else if (VAR_15) {
  VAR_13 = VAR_5;
  FUNC_2(VAR_8->regs);
 } else if (!VAR_16) {
  VAR_13 = VAR_5;
 } else {
  VAR_12 = FUNC_3(VAR_8->regs);
 }

 VAR_11->timecode = VAR_10->timecode;
 VAR_11->vb2_buf.timestamp = VAR_10->vb2_buf.timestamp;
 VAR_11->flags &= ~VAR_3;
 VAR_11->flags |=
  VAR_10->flags & VAR_3;

 FUNC_11(VAR_10, VAR_13);
 if (VAR_9->mode == VAR_2)
  FUNC_16(&VAR_11->vb2_buf, 0, VAR_12);
 FUNC_11(VAR_11, VAR_13);

 VAR_9->subsampling = FUNC_5(VAR_8->regs);
 FUNC_10(&VAR_8->slock);

 FUNC_1(VAR_8->regs);

 FUNC_14(VAR_8->m2m_dev, VAR_9->fh.m2m_ctx);
 return VAR_0;
}
