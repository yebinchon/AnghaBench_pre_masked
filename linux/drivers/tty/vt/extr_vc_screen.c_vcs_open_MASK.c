
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2);
 bool VAR_5 = FUNC_3(VAR_2);
 bool VAR_6 = FUNC_4(VAR_2);
 int VAR_7 = 0;


 if (VAR_5 && VAR_6)
  return -VAR_1;

 FUNC_1();
 if(VAR_4 && !FUNC_5(VAR_4-1))
  VAR_7 = -VAR_0;
 FUNC_2();
 return VAR_7;
}
