
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hl_fpriv {int ctx_mgr; int hdev; int cb_mgr; } ;
struct file {struct hl_fpriv* private_data; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hl_fpriv*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct hl_fpriv *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->hdev, &VAR_2->cb_mgr);
 FUNC_1(VAR_2->hdev, &VAR_2->ctx_mgr);

 VAR_1->private_data = ((void*)0);

 FUNC_2(VAR_2);

 return 0;
}
