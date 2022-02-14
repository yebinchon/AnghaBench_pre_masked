
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; int timecode; TYPE_1__ vb2_buf; } ;
struct sh_veu_dev {int xaction; int lock; int m2m_ctx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sh_veu_dev*,int ) ;
 int FUNC_1 (struct sh_veu_dev*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct sh_veu_dev *VAR_9 = VAR_8;
 struct vb2_v4l2_buffer *VAR_10;
 struct vb2_v4l2_buffer *VAR_11;
 u32 VAR_12 = FUNC_0(VAR_9, VAR_5);


 if (!(VAR_12 & 1))
  return VAR_0;


 FUNC_1(VAR_9, VAR_4, 0);

 FUNC_1(VAR_9, VAR_6, 0);

 FUNC_1(VAR_9, VAR_5, VAR_12 & ~1);


 VAR_10 = FUNC_5(VAR_9->m2m_ctx);
 VAR_11 = FUNC_6(VAR_9->m2m_ctx);
 if (!VAR_11 || !VAR_10)
  return VAR_0;

 VAR_10->vb2_buf.timestamp = VAR_11->vb2_buf.timestamp;
 VAR_10->flags &= ~VAR_2;
 VAR_10->flags |=
  VAR_11->flags & VAR_2;
 VAR_10->timecode = VAR_11->timecode;

 FUNC_2(&VAR_9->lock);
 FUNC_4(VAR_11, VAR_3);
 FUNC_4(VAR_10, VAR_3);
 FUNC_3(&VAR_9->lock);

 VAR_9->xaction++;

 return VAR_1;
}
