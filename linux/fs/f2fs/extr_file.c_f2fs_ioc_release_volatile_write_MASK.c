
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct inode*,int ,int ) ;
 int FUNC_9 (struct inode*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2)
{
 struct inode *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 if (!FUNC_4(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_3);

 if (!FUNC_1(VAR_3))
  goto out;

 if (!FUNC_0(VAR_3)) {
  VAR_4 = FUNC_9(VAR_3, 0, 1);
  goto out;
 }

 VAR_4 = FUNC_8(VAR_3, 0, VAR_1);
out:
 FUNC_5(VAR_3);
 FUNC_6(VAR_2);
 return VAR_4;
}
