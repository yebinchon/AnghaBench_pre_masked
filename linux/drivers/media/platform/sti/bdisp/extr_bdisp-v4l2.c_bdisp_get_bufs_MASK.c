
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timestamp; } ;
struct vb2_v4l2_buffer {TYPE_2__ vb2_buf; } ;
struct bdisp_frame {int paddr; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct bdisp_ctx {TYPE_1__ fh; struct bdisp_frame dst; struct bdisp_frame src; } ;


 int FUNC_0 (struct bdisp_ctx*,TYPE_2__*,struct bdisp_frame*,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct bdisp_ctx *VAR_0)
{
 struct bdisp_frame *VAR_1, *VAR_2;
 struct vb2_v4l2_buffer *VAR_3, *VAR_4;
 int VAR_5;

 VAR_1 = &VAR_0->src;
 VAR_2 = &VAR_0->dst;

 VAR_3 = FUNC_2(VAR_0->fh.m2m_ctx);
 VAR_5 = FUNC_0(VAR_0, &VAR_3->vb2_buf, VAR_1, VAR_1->paddr);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_0->fh.m2m_ctx);
 VAR_5 = FUNC_0(VAR_0, &VAR_4->vb2_buf, VAR_2, VAR_2->paddr);
 if (VAR_5)
  return VAR_5;

 VAR_4->vb2_buf.timestamp = VAR_3->vb2_buf.timestamp;

 return 0;
}
