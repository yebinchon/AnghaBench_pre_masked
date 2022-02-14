
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct file*,int) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int) ;

int
FUNC_6(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4, int VAR_5)
{
 int VAR_6;
 struct inode *VAR_7 = FUNC_0(VAR_2);

 FUNC_4(VAR_7);

 do {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
  if (VAR_6 != 0)
   break;
  VAR_6 = FUNC_2(VAR_2, VAR_5);
  if (!VAR_6)
   VAR_6 = FUNC_3(VAR_7, !!VAR_5);





  VAR_3 = 0;
  VAR_4 = VAR_1;
 } while (VAR_6 == -VAR_0);

 FUNC_5(VAR_7, VAR_6);
 return VAR_6;
}
