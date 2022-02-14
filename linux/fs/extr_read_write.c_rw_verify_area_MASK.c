
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_flctx; } ;
struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef size_t loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*,struct file*,size_t,size_t,int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct file*) ;

int FUNC_6(int VAR_7, struct file *VAR_8, const loff_t *VAR_9, size_t VAR_10)
{
 struct inode *VAR_11;
 int VAR_12 = -VAR_0;

 VAR_11 = FUNC_0(VAR_8);
 if (FUNC_4((ssize_t) VAR_10 < 0))
  return VAR_12;





 if (VAR_9) {
  loff_t VAR_13 = *VAR_9;

  if (FUNC_4(VAR_13 < 0)) {
   if (!FUNC_5(VAR_8))
    return VAR_12;
   if (VAR_10 >= -VAR_13)
    return -VAR_1;
  } else if (FUNC_4((loff_t) (VAR_13 + VAR_10) < 0)) {
   if (!FUNC_5(VAR_8))
    return VAR_12;
  }

  if (FUNC_4(VAR_11->i_flctx && FUNC_2(VAR_11))) {
   VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_13, VAR_13 + VAR_10 - 1,
     VAR_7 == VAR_6 ? VAR_2 : VAR_3);
   if (VAR_12 < 0)
    return VAR_12;
  }
 }

 return FUNC_3(VAR_8,
    VAR_7 == VAR_6 ? VAR_4 : VAR_5);
}
