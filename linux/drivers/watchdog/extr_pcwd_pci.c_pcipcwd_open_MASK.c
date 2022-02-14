
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct inode*,struct file*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{

 if (FUNC_4(0, &VAR_3)) {
  if (VAR_2 >= VAR_1)
   FUNC_2("Attempt to open already opened device\n");
  return -VAR_0;
 }


 FUNC_1();
 FUNC_0();
 return FUNC_3(VAR_4, VAR_5);
}
