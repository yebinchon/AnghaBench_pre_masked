
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; int timecode; TYPE_1__ vb2_buf; } ;
struct gsc_ctx {int m2m_ctx; TYPE_3__* gsc_dev; } ;
struct TYPE_5__ {int m2m_dev; } ;
struct TYPE_6__ {TYPE_2__ m2m; } ;


 int VAR_0 ;
 int FUNC_0 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;

void FUNC_4(struct gsc_ctx *VAR_1, int VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3, *VAR_4;

 if (!VAR_1 || !VAR_1->m2m_ctx)
  return;

 VAR_3 = FUNC_3(VAR_1->m2m_ctx);
 VAR_4 = FUNC_1(VAR_1->m2m_ctx);

 if (VAR_3 && VAR_4) {
  VAR_4->vb2_buf.timestamp = VAR_3->vb2_buf.timestamp;
  VAR_4->timecode = VAR_3->timecode;
  VAR_4->flags &= ~VAR_0;
  VAR_4->flags |=
   VAR_3->flags
   & VAR_0;

  FUNC_0(VAR_3, VAR_2);
  FUNC_0(VAR_4, VAR_2);

  FUNC_2(VAR_1->gsc_dev->m2m.m2m_dev,
        VAR_1->m2m_ctx);
 }
}
