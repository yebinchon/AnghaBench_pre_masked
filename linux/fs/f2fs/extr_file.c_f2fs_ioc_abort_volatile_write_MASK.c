
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct file*,int ,int ,int ,int) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int ) ;
 struct inode* FUNC_7 (struct file*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct file*) ;
 int FUNC_12 (struct file*) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_5)
{
 struct inode *VAR_6 = FUNC_7(VAR_5);
 int VAR_7;

 if (!FUNC_9(VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_8(VAR_6);

 if (FUNC_4(VAR_6))
  FUNC_3(VAR_6);
 if (FUNC_5(VAR_6)) {
  FUNC_1(VAR_6, VAR_2);
  FUNC_13(VAR_6);
  VAR_7 = FUNC_2(VAR_5, 0, VAR_3, 0, 1);
 }

 FUNC_1(VAR_6, VAR_1);

 FUNC_10(VAR_6);

 FUNC_11(VAR_5);
 FUNC_6(FUNC_0(VAR_6), VAR_4);
 return VAR_7;
}
