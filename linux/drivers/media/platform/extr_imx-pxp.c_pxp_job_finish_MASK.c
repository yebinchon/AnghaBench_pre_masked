
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct pxp_dev {int m2m_dev; int irqlock; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct pxp_ctx {TYPE_1__ fh; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 struct pxp_ctx* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct pxp_dev *VAR_1)
{
 struct pxp_ctx *VAR_2;
 struct vb2_v4l2_buffer *VAR_3, *VAR_4;
 unsigned long VAR_5;

 VAR_2 = FUNC_6(VAR_1->m2m_dev);

 if (VAR_2 == ((void*)0)) {
  FUNC_1("Instance released before the end of transaction\n");
  return;
 }

 VAR_3 = FUNC_8(VAR_2->fh.m2m_ctx);
 VAR_4 = FUNC_5(VAR_2->fh.m2m_ctx);

 FUNC_2(&VAR_1->irqlock, VAR_5);
 FUNC_4(VAR_3, VAR_0);
 FUNC_4(VAR_4, VAR_0);
 FUNC_3(&VAR_1->irqlock, VAR_5);

 FUNC_0(VAR_2->dev, "Finishing transaction\n");
 FUNC_7(VAR_1->m2m_dev, VAR_2->fh.m2m_ctx);
}
