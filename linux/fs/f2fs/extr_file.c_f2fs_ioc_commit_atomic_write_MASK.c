
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct file*,int ,int ,int,int) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct file*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (struct file*) ;
 int FUNC_14 (struct file*) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_4)
{
 struct inode *VAR_5 = FUNC_8(VAR_4);
 int VAR_6;

 if (!FUNC_10(VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_14(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(FUNC_0(VAR_5), 1);

 FUNC_9(VAR_5);

 if (FUNC_7(VAR_5)) {
  VAR_6 = -VAR_1;
  goto err_out;
 }

 if (FUNC_6(VAR_5)) {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6)
   goto err_out;

  VAR_6 = FUNC_4(VAR_4, 0, VAR_3, 0, 1);
  if (!VAR_6)
   FUNC_5(VAR_5);
 } else {
  VAR_6 = FUNC_4(VAR_4, 0, VAR_3, 1, 0);
 }
err_out:
 if (FUNC_12(VAR_5, VAR_2)) {
  FUNC_1(VAR_5, VAR_2);
  VAR_6 = -VAR_1;
 }
 FUNC_11(VAR_5);
 FUNC_13(VAR_4);
 return VAR_6;
}
