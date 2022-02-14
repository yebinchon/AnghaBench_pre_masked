
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; int timecode; TYPE_1__ vb2_buf; } ;
struct deinterlace_dev {int m2m_dev; int busy; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct deinterlace_ctx {TYPE_2__ fh; struct deinterlace_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct deinterlace_dev*,char*) ;
 int FUNC_2 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 struct deinterlace_ctx *VAR_3 = VAR_2;
 struct deinterlace_dev *VAR_4 = VAR_3->dev;
 struct vb2_v4l2_buffer *VAR_5, *VAR_6;

 FUNC_0(&VAR_4->busy, 0);

 VAR_5 = FUNC_5(VAR_3->fh.m2m_ctx);
 VAR_6 = FUNC_3(VAR_3->fh.m2m_ctx);

 VAR_6->vb2_buf.timestamp = VAR_5->vb2_buf.timestamp;
 VAR_6->flags &= ~VAR_0;
 VAR_6->flags |=
  VAR_5->flags & VAR_0;
 VAR_6->timecode = VAR_5->timecode;

 FUNC_2(VAR_5, VAR_1);
 FUNC_2(VAR_6, VAR_1);

 FUNC_4(VAR_4->m2m_dev, VAR_3->fh.m2m_ctx);

 FUNC_1(VAR_4, "dma transfers completed.\n");
}
