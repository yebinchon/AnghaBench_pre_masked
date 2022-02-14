
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timestamp; } ;
struct vb2_v4l2_buffer {TYPE_1__ vb2_buf; } ;
struct gsc_frame {int addr; } ;
struct gsc_ctx {int m2m_ctx; struct gsc_frame d_frame; struct gsc_frame s_frame; } ;


 int FUNC_0 (struct gsc_ctx*,TYPE_1__*,struct gsc_frame*,int *) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gsc_ctx *VAR_0)
{
 struct gsc_frame *VAR_1, *VAR_2;
 struct vb2_v4l2_buffer *VAR_3, *VAR_4;
 int VAR_5;

 VAR_1 = &VAR_0->s_frame;
 VAR_2 = &VAR_0->d_frame;

 VAR_3 = FUNC_2(VAR_0->m2m_ctx);
 VAR_5 = FUNC_0(VAR_0, &VAR_3->vb2_buf, VAR_1, &VAR_1->addr);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_0->m2m_ctx);
 VAR_5 = FUNC_0(VAR_0, &VAR_4->vb2_buf, VAR_2, &VAR_2->addr);
 if (VAR_5)
  return VAR_5;

 VAR_4->vb2_buf.timestamp = VAR_3->vb2_buf.timestamp;

 return 0;
}
