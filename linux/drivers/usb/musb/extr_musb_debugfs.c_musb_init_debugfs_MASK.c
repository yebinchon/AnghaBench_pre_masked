
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {struct dentry* debugfs_root; int controller; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,struct dentry*,struct musb*,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(struct musb *VAR_5)
{
 struct dentry *VAR_6;

 VAR_6 = FUNC_0(FUNC_2(VAR_5->controller), ((void*)0));
 VAR_5->debugfs_root = VAR_6;

 FUNC_1("regdump", VAR_0, VAR_6, VAR_5, &VAR_2);
 FUNC_1("testmode", VAR_0 | VAR_1, VAR_6, VAR_5,
       &VAR_4);
 FUNC_1("softconnect", VAR_0 | VAR_1, VAR_6, VAR_5,
       &VAR_3);
}
