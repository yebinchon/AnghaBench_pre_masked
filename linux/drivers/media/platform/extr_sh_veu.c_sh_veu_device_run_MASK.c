
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int vb2_buf; } ;
struct sh_veu_dev {int m2m_ctx; } ;


 int FUNC_0 (struct sh_veu_dev*,int *,int *) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct sh_veu_dev *VAR_1 = VAR_0;
 struct vb2_v4l2_buffer *VAR_2, *VAR_3;

 VAR_2 = FUNC_2(VAR_1->m2m_ctx);
 VAR_3 = FUNC_1(VAR_1->m2m_ctx);

 if (VAR_2 && VAR_3)
  FUNC_0(VAR_1, &VAR_2->vb2_buf, &VAR_3->vb2_buf);
}
