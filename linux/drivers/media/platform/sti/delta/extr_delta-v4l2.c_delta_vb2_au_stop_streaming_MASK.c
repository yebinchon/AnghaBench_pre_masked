
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct delta_ctx {int aborting; scalar_t__ au_num; TYPE_1__ fh; } ;


 int VAR_0 ;
 int FUNC_0 (struct delta_ctx*) ;
 int FUNC_1 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 struct delta_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_1)
{
 struct delta_ctx *VAR_2 = FUNC_3(VAR_1);
 struct vb2_v4l2_buffer *VAR_3;

 FUNC_0(VAR_2);


 while ((VAR_3 = FUNC_2(VAR_2->fh.m2m_ctx)))
  FUNC_1(VAR_3, VAR_0);

 VAR_2->au_num = 0;

 VAR_2->aborting = 0;
}
