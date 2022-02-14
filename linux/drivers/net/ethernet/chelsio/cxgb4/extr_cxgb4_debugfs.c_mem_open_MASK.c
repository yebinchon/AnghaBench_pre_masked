
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_private; } ;
struct file {scalar_t__ private_data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ) ;

int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned int VAR_3;
 struct adapter *VAR_4;

 VAR_2->private_data = VAR_1->i_private;

 VAR_3 = (uintptr_t)VAR_2->private_data & 0x7;
 VAR_4 = VAR_2->private_data - VAR_3;

 (void)FUNC_0(VAR_4, VAR_0);

 return 0;
}
