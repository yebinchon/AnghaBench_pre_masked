
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {struct dentry* dbgfs_root; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,int,struct dentry*,struct ssusb_mtk*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct ssusb_mtk *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->dbgfs_root;

 FUNC_0("mode", 0644, VAR_3, VAR_2, &VAR_0);
 FUNC_0("vbus", 0644, VAR_3, VAR_2, &VAR_1);
}
