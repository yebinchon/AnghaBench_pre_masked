
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_host_dev {scalar_t__ ct_type; int * context; } ;
struct inode {int dummy; } ;
struct file {struct vmci_host_dev* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmci_host_dev*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 struct vmci_host_dev *VAR_5 = VAR_4->private_data;

 if (VAR_5->ct_type == VAR_0) {
  FUNC_2(VAR_5->context);
  VAR_5->context = ((void*)0);







  FUNC_0(&VAR_2);
 }
 VAR_5->ct_type = VAR_1;

 FUNC_1(VAR_5);
 VAR_4->private_data = ((void*)0);
 return 0;
}
