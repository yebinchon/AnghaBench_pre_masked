
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct ca8210_priv* i_private; } ;
struct file {struct ca8210_priv* private_data; } ;
struct ca8210_priv {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, struct file *VAR_1)
{
 struct ca8210_priv *VAR_2 = VAR_0->i_private;

 VAR_1->private_data = VAR_2;
 return 0;
}
