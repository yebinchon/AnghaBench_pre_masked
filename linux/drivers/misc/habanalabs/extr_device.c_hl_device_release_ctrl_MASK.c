
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hl_fpriv {int dev_node; struct hl_device* hdev; } ;
struct hl_device {int fpriv_list_lock; } ;
struct file {struct hl_fpriv* private_data; } ;


 int FUNC_0 (struct hl_fpriv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct hl_fpriv *VAR_2 = VAR_1->private_data;
 struct hl_device *VAR_3;

 VAR_1->private_data = ((void*)0);

 VAR_3 = VAR_2->hdev;

 FUNC_2(&VAR_3->fpriv_list_lock);
 FUNC_1(&VAR_2->dev_node);
 FUNC_3(&VAR_3->fpriv_list_lock);

 FUNC_0(VAR_2);

 return 0;
}
