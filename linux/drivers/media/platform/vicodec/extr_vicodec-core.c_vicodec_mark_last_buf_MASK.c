
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_ctx; } ;
struct vicodec_ctx {int is_draining; int has_stopped; int next_is_last; int lock; TYPE_1__ fh; scalar_t__ last_src_buf; } ;
struct vb2_v4l2_buffer {int vb2_buf; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct vicodec_ctx *VAR_4)
{
 struct vb2_v4l2_buffer *VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_4->lock);
 if (VAR_4->is_draining) {
  VAR_6 = -VAR_0;
  goto unlock;
 }
 if (VAR_4->has_stopped)
  goto unlock;

 VAR_4->last_src_buf = FUNC_4(VAR_4->fh.m2m_ctx);
 VAR_4->is_draining = 1;
 if (VAR_4->last_src_buf)
  goto unlock;

 VAR_5 = FUNC_3(VAR_4->fh.m2m_ctx);
 if (!VAR_5) {
  VAR_4->next_is_last = 1;
  goto unlock;
 }

 VAR_5->flags |= VAR_1;
 FUNC_5(&VAR_5->vb2_buf, VAR_2);
 VAR_4->is_draining = 0;
 VAR_4->has_stopped = 1;
 FUNC_2(&VAR_4->fh, &VAR_3);

unlock:
 FUNC_1(VAR_4->lock);
 return VAR_6;
}
