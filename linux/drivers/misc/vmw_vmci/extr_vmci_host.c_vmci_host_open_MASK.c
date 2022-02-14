
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_host_dev {int lock; int ct_type; } ;
struct inode {int dummy; } ;
struct file {struct vmci_host_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmci_host_dev* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 struct vmci_host_dev *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct vmci_host_dev), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->ct_type = VAR_2;
 FUNC_1(&VAR_5->lock);
 VAR_4->private_data = VAR_5;

 return 0;
}
