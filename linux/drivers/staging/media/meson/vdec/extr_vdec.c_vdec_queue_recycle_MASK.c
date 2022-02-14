
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int dummy; } ;
struct amvdec_session {int bufs_recycle_lock; int bufs_recycle; } ;
struct amvdec_buffer {int list; struct vb2_buffer* vb; } ;


 int VAR_0 ;
 struct amvdec_buffer* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct amvdec_session *VAR_1, struct vb2_buffer *VAR_2)
{
 struct amvdec_buffer *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 VAR_3->vb = VAR_2;

 FUNC_2(&VAR_1->bufs_recycle_lock);
 FUNC_1(&VAR_3->list, &VAR_1->bufs_recycle);
 FUNC_3(&VAR_1->bufs_recycle_lock);
}
