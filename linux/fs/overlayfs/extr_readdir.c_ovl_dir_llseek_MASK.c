
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_dir_file {scalar_t__ cache; TYPE_1__* realfile; scalar_t__ is_real; } ;
struct file {int f_pos; struct ovl_dir_file* private_data; } ;
typedef int loff_t ;
struct TYPE_2__ {int f_pos; } ;


 int VAR_0 ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct ovl_dir_file*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;
 struct ovl_dir_file *VAR_5 = VAR_1->private_data;

 FUNC_1(FUNC_0(VAR_1));
 if (!VAR_1->f_pos)
  FUNC_3(VAR_1);

 if (VAR_5->is_real) {
  VAR_4 = FUNC_5(VAR_5->realfile, VAR_2, VAR_3);
  VAR_1->f_pos = VAR_5->realfile->f_pos;
 } else {
  VAR_4 = -VAR_0;

  switch (VAR_3) {
  case 129:
   VAR_2 += VAR_1->f_pos;
   break;
  case 128:
   break;
  default:
   goto out_unlock;
  }
  if (VAR_2 < 0)
   goto out_unlock;

  if (VAR_2 != VAR_1->f_pos) {
   VAR_1->f_pos = VAR_2;
   if (VAR_5->cache)
    FUNC_4(VAR_5, VAR_2);
  }
  VAR_4 = VAR_2;
 }
out_unlock:
 FUNC_2(FUNC_0(VAR_1));

 return VAR_4;
}
