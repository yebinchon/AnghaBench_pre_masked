
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_file {int cfg_needed; int fh; struct sh_veu_dev* veu_dev; } ;
struct sh_veu_dev {int dev; } ;
struct file {struct sh_veu_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct sh_veu_file*) ;
 struct sh_veu_file* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct file*) ;
 struct sh_veu_dev* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2)
{
 struct sh_veu_dev *VAR_3 = FUNC_6(VAR_2);
 struct sh_veu_file *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4(&VAR_4->fh, FUNC_5(VAR_2));
 VAR_4->veu_dev = VAR_3;
 VAR_4->cfg_needed = 1;

 VAR_2->private_data = VAR_4;

 FUNC_2(VAR_3->dev);
 FUNC_3(&VAR_4->fh);

 FUNC_0(VAR_3->dev, "Created instance %p\n", VAR_4);

 return 0;
}
