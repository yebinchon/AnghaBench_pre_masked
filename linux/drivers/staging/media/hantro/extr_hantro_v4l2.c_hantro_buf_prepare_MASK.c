
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct hantro_ctx {int dst_fmt; int vpu_dst_fmt; int src_fmt; int vpu_src_fmt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vb2_buffer*,int ,int *) ;
 struct hantro_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_0)
{
 struct vb2_queue *VAR_1 = VAR_0->vb2_queue;
 struct hantro_ctx *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_1->type))
  return FUNC_1(VAR_0, VAR_2->vpu_src_fmt,
        &VAR_2->src_fmt);

 return FUNC_1(VAR_0, VAR_2->vpu_dst_fmt, &VAR_2->dst_fmt);
}
