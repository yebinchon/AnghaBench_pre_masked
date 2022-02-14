
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; TYPE_1__ vb2_buf; int timecode; } ;
struct g2d_dev {struct g2d_ctx* curr; int m2m_dev; int gate; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct g2d_ctx {TYPE_2__ fh; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct g2d_dev*) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct g2d_dev *VAR_5 = VAR_4;
 struct g2d_ctx *VAR_6 = VAR_5->curr;
 struct vb2_v4l2_buffer *VAR_7, *VAR_8;

 FUNC_2(VAR_5);
 FUNC_1(VAR_5->gate);

 FUNC_0(VAR_6 == ((void*)0));

 VAR_7 = FUNC_6(VAR_6->fh.m2m_ctx);
 VAR_8 = FUNC_4(VAR_6->fh.m2m_ctx);

 FUNC_0(VAR_7 == ((void*)0));
 FUNC_0(VAR_8 == ((void*)0));

 VAR_8->timecode = VAR_7->timecode;
 VAR_8->vb2_buf.timestamp = VAR_7->vb2_buf.timestamp;
 VAR_8->flags &= ~VAR_1;
 VAR_8->flags |=
  VAR_7->flags & VAR_1;

 FUNC_3(VAR_7, VAR_2);
 FUNC_3(VAR_8, VAR_2);
 FUNC_5(VAR_5->m2m_dev, VAR_6->fh.m2m_ctx);

 VAR_5->curr = ((void*)0);
 return VAR_0;
}
