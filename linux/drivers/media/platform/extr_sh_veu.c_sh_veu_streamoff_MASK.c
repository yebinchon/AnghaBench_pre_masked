
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_veu_file {TYPE_1__* veu_dev; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int m2m_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct sh_veu_file*,int) ;
 int FUNC_1 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
       enum v4l2_buf_type VAR_3)
{
 struct sh_veu_file *VAR_4 = VAR_2;

 if (!FUNC_0(VAR_4->veu_dev, VAR_4, VAR_3))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_4->veu_dev->m2m_ctx, VAR_3);
}
