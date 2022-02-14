
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 FUNC_3("closing file '/dev/%pD'\n", VAR_2);
 FUNC_1(VAR_2->private_data);
 VAR_2->private_data = ((void*)0);
 FUNC_0();
 FUNC_2(VAR_0);
 return 0;
}
