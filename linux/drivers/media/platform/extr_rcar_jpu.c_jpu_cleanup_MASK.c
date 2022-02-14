
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct jpu_ctx {TYPE_1__ fh; TYPE_2__* jpu; } ;
struct TYPE_4__ {int m2m_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct jpu_ctx *VAR_3, bool VAR_4)
{

 struct vb2_v4l2_buffer *VAR_5, *VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_3->jpu->lock, VAR_7);

 VAR_5 = FUNC_6(VAR_3->fh.m2m_ctx);
 VAR_6 = FUNC_4(VAR_3->fh.m2m_ctx);

 FUNC_3(VAR_5, VAR_2);
 FUNC_3(VAR_6, VAR_2);


 if (VAR_4)
  FUNC_0(VAR_3->jpu, VAR_1, VAR_0);

 FUNC_2(&VAR_3->jpu->lock, VAR_7);

 FUNC_5(VAR_3->jpu->m2m_dev, VAR_3->fh.m2m_ctx);
}
