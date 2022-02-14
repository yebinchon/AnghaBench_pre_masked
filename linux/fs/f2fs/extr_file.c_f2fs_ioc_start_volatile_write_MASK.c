
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_4)
{
 struct inode *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;

 if (!FUNC_7(VAR_5))
  return -VAR_0;

 if (!FUNC_1(VAR_5->i_mode))
  return -VAR_1;

 VAR_6 = FUNC_10(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_6(VAR_5);

 if (FUNC_3(VAR_5))
  goto out;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  goto out;

 FUNC_12(VAR_5);
 FUNC_13(VAR_5);

 FUNC_11(VAR_5, VAR_2);
 FUNC_4(FUNC_0(VAR_5), VAR_3);
out:
 FUNC_8(VAR_5);
 FUNC_9(VAR_4);
 return VAR_6;
}
