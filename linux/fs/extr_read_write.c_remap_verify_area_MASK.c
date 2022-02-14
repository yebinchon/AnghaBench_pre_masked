
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_flctx; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*,struct file*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_6, loff_t VAR_7, loff_t VAR_8,
        bool VAR_9)
{
 struct inode *VAR_10 = FUNC_0(VAR_6);

 if (FUNC_4(VAR_7 < 0 || VAR_8 < 0))
  return -VAR_0;

  if (FUNC_4((loff_t) (VAR_7 + VAR_8) < 0))
  return -VAR_0;

 if (FUNC_4(VAR_10->i_flctx && FUNC_2(VAR_10))) {
  loff_t VAR_11 = VAR_8 ? VAR_7 + VAR_8 - 1 : VAR_5;
  int VAR_12;

  VAR_12 = FUNC_1(VAR_10, VAR_6, VAR_7, VAR_11,
    VAR_9 ? VAR_2 : VAR_1);
  if (VAR_12 < 0)
   return VAR_12;
 }

 return FUNC_3(VAR_6, VAR_9 ? VAR_4 : VAR_3);
}
