
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_file {int cfg_needed; struct sh_veu_dev* veu_dev; } ;
struct sh_veu_dev {int aborting; int m2m_ctx; scalar_t__ xaction; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (struct sh_veu_dev*) ;
 int FUNC_1 (struct sh_veu_dev*,struct sh_veu_file*,int) ;
 int FUNC_2 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
      enum v4l2_buf_type VAR_3)
{
 struct sh_veu_file *VAR_4 = VAR_2;

 if (!FUNC_1(VAR_4->veu_dev, VAR_4, VAR_3))
  return -VAR_0;

 if (VAR_4->cfg_needed) {
  struct sh_veu_dev *VAR_5 = VAR_4->veu_dev;
  VAR_4->cfg_needed = 0;
  FUNC_0(VAR_4->veu_dev);
  VAR_5->xaction = 0;
  VAR_5->aborting = 0;
 }

 return FUNC_2(VAR_1, VAR_4->veu_dev->m2m_ctx, VAR_3);
}
