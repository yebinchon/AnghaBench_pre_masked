
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int type; } ;
struct sh_veu_file {struct sh_veu_dev* veu_dev; } ;
struct sh_veu_dev {int m2m_ctx; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct sh_veu_dev*) ;
 int FUNC_1 (struct sh_veu_dev*,struct sh_veu_file*,int ) ;
 int FUNC_2 (struct file*,int ,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
     struct v4l2_requestbuffers *VAR_2)
{
 struct sh_veu_file *VAR_3 = VAR_1;
 struct sh_veu_dev *VAR_4 = VAR_3->veu_dev;
 int VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_2->type);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_0, VAR_4->m2m_ctx, VAR_2);
}
