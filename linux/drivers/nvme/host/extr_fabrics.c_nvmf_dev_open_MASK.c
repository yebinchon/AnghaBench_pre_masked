
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{




 VAR_2->private_data = ((void*)0);
 return FUNC_0(VAR_2, VAR_0, ((void*)0));
}
