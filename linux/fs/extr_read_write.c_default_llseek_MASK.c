
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct file {scalar_t__ f_version; scalar_t__ f_pos; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 struct inode* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct file*) ;

loff_t FUNC_5(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_2);
 loff_t VAR_6;

 FUNC_2(VAR_5);
 switch (VAR_4) {
  case 129:
   VAR_3 += FUNC_1(VAR_5);
   break;
  case 131:
   if (VAR_3 == 0) {
    VAR_6 = VAR_2->f_pos;
    goto out;
   }
   VAR_3 += VAR_2->f_pos;
   break;
  case 130:





   if (VAR_3 >= VAR_5->i_size) {
    VAR_6 = -VAR_1;
    goto out;
   }
   break;
  case 128:





   if (VAR_3 >= VAR_5->i_size) {
    VAR_6 = -VAR_1;
    goto out;
   }
   VAR_3 = VAR_5->i_size;
   break;
 }
 VAR_6 = -VAR_0;
 if (VAR_3 >= 0 || FUNC_4(VAR_2)) {
  if (VAR_3 != VAR_2->f_pos) {
   VAR_2->f_pos = VAR_3;
   VAR_2->f_version = 0;
  }
  VAR_6 = VAR_3;
 }
out:
 FUNC_3(VAR_5);
 return VAR_6;
}
