
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 if (FUNC_2(VAR_1, &VAR_2))
  FUNC_3();
 else
  FUNC_1("Device closed unexpectedly - timer will not stop\n");
 FUNC_0(VAR_0, &VAR_2);
 FUNC_0(VAR_1, &VAR_2);

 return 0;
}
