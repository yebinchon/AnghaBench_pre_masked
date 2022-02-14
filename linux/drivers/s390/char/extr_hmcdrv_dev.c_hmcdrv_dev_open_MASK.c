
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct file*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_6, struct file *VAR_7)
{
 int VAR_8;



 if (VAR_7->f_flags & VAR_3)
  return -VAR_0;




 if ((VAR_7->f_flags & VAR_2) == VAR_4)
  return -VAR_0;




 if (!FUNC_3(VAR_5))
  return -VAR_1;

 VAR_7->private_data = ((void*)0);
 VAR_8 = FUNC_0();
 if (VAR_8)
  FUNC_1(VAR_5);

 FUNC_2("open file '/dev/%pD' with return code %d\n", VAR_7, VAR_8);
 return VAR_8;
}
