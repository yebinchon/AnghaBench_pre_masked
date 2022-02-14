
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;





 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,int) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (struct file*,int ,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;
 struct inode *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_3) {
 case 128:
 case 132:

  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  FUNC_4(VAR_5);
  VAR_4 = FUNC_2(VAR_5, VAR_1);
  if (!VAR_4)
   VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  FUNC_5(VAR_5);
  break;
 case 129:
 case 131:
  FUNC_4(VAR_5);
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  FUNC_5(VAR_5);
  break;
 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
