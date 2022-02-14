
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pti_masterchannel {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct pti_masterchannel* private_data; } ;


 int VAR_0 ;
 struct pti_masterchannel* FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct pti_masterchannel *VAR_3;







 VAR_3 = FUNC_0(0, ((void*)0));
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_2->private_data = VAR_3;
 return 0;
}
