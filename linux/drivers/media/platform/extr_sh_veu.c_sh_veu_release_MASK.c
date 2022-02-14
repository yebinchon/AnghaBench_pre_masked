
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_file {int fh; } ;
struct sh_veu_dev {int dev; int * m2m_ctx; struct sh_veu_file* capture; struct sh_veu_file* output; } ;
struct file {struct sh_veu_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct sh_veu_file*) ;
 int FUNC_1 (struct sh_veu_file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 struct sh_veu_dev* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2)
{
 struct sh_veu_dev *VAR_3 = FUNC_8(VAR_2);
 struct sh_veu_file *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_3->dev, "Releasing instance %p\n", VAR_4);

 if (VAR_4 == VAR_3->capture) {
  VAR_3->capture = ((void*)0);
  FUNC_7(FUNC_6(VAR_3->m2m_ctx, VAR_0));
 }

 if (VAR_4 == VAR_3->output) {
  VAR_3->output = ((void*)0);
  FUNC_7(FUNC_6(VAR_3->m2m_ctx, VAR_1));
 }

 if (!VAR_3->output && !VAR_3->capture && VAR_3->m2m_ctx) {
  FUNC_5(VAR_3->m2m_ctx);
  VAR_3->m2m_ctx = ((void*)0);
 }

 FUNC_2(VAR_3->dev);
 FUNC_3(&VAR_4->fh);
 FUNC_4(&VAR_4->fh);

 FUNC_1(VAR_4);

 return 0;
}
