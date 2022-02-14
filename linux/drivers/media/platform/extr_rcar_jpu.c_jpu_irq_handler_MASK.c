
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; int timecode; TYPE_2__ vb2_buf; int field; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct jpu_ctx {TYPE_1__ fh; scalar_t__ encoder; } ;
struct jpu {int lock; int m2m_dev; int * curr; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,char*,unsigned char,int ) ;
 int FUNC_1 (int ,char*) ;
 int * VAR_23 ;
 int FUNC_2 (struct jpu*,int ) ;
 int FUNC_3 (struct jpu*,unsigned int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_7 (int ) ;
 struct jpu_ctx* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_24, void *VAR_25)
{
 struct jpu *VAR_26 = VAR_25;
 struct jpu_ctx *VAR_27;
 struct vb2_v4l2_buffer *VAR_28, *VAR_29;
 unsigned int VAR_30;

 VAR_30 = FUNC_2(VAR_26, VAR_10);


 if (!((VAR_14 | VAR_13 | VAR_11) &
     VAR_30))
  return VAR_1;


 FUNC_3(VAR_26, ~(VAR_30 & VAR_12), VAR_10);
 if (VAR_30 & (VAR_11 | VAR_13))
  FUNC_3(VAR_26, VAR_3, VAR_2);

 FUNC_4(&VAR_26->lock);

 if ((VAR_30 & VAR_13) &&
    !(VAR_30 & VAR_14))
  goto handled;

 VAR_27 = FUNC_8(VAR_26->m2m_dev);
 if (!VAR_27) {

  FUNC_1(VAR_26->dev, "no active context for m2m\n");
  goto handled;
 }

 VAR_28 = FUNC_10(VAR_27->fh.m2m_ctx);
 VAR_29 = FUNC_7(VAR_27->fh.m2m_ctx);

 if (VAR_30 & VAR_14) {
  if (VAR_27->encoder) {
   unsigned long VAR_31 = FUNC_2(VAR_26, VAR_9) << 16
         | FUNC_2(VAR_26, VAR_8) << 8
         | FUNC_2(VAR_26, VAR_7);
   FUNC_11(&VAR_29->vb2_buf, 0,
    VAR_31 + VAR_15);
  }

  VAR_29->field = VAR_28->field;
  VAR_29->vb2_buf.timestamp = VAR_28->vb2_buf.timestamp;
  if (VAR_28->flags & VAR_19)
   VAR_29->timecode = VAR_28->timecode;
  VAR_29->flags = VAR_28->flags &
   (VAR_19 | VAR_17 |
    VAR_18 | VAR_16 |
    VAR_20);

  FUNC_6(VAR_28, VAR_21);
  FUNC_6(VAR_29, VAR_21);
 } else if (VAR_30 & VAR_11) {
  unsigned char VAR_32 = FUNC_2(VAR_26, VAR_5) & VAR_6;

  FUNC_0(VAR_26->dev, "processing error: %#X: %s\n", VAR_32,
   VAR_23[VAR_32]);

  FUNC_6(VAR_28, VAR_22);
  FUNC_6(VAR_29, VAR_22);
 }

 VAR_26->curr = ((void*)0);


 FUNC_3(VAR_26, VAR_4, VAR_2);
 FUNC_5(&VAR_26->lock);

 FUNC_9(VAR_26->m2m_dev, VAR_27->fh.m2m_ctx);

 return VAR_0;

handled:
 FUNC_5(&VAR_26->lock);
 return VAR_0;
}
