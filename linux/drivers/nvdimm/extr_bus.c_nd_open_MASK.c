
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {void* private_data; } ;


 long FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 long VAR_2 = FUNC_0(VAR_0);

 VAR_1->private_data = (void *) VAR_2;
 return 0;
}
