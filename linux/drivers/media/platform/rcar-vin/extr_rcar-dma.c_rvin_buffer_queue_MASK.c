
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct rvin_dev {int qlock; int buf_list; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 struct rvin_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_4(VAR_0);
 struct rvin_dev *VAR_2 = FUNC_5(VAR_0->vb2_queue);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->qlock, VAR_3);

 FUNC_0(FUNC_3(VAR_1), &VAR_2->buf_list);

 FUNC_2(&VAR_2->qlock, VAR_3);
}
