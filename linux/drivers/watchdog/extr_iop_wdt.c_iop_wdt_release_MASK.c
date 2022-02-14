
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6 = 1;
 if (FUNC_3(VAR_2, &VAR_3))
  if (FUNC_3(VAR_0, &VAR_3))
   VAR_6 = FUNC_4();




 if (VAR_6 != 0) {
  FUNC_5();
  FUNC_2("Device closed unexpectedly - reset in %lu seconds\n",
   FUNC_1());
 }

 FUNC_0(VAR_1, &VAR_3);
 FUNC_0(VAR_2, &VAR_3);

 return 0;
}
