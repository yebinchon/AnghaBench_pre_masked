
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct bcm63xx_udc {struct dentry* debugfs_root; TYPE_1__ gadget; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int,struct dentry*,struct bcm63xx_udc*,int *) ;

__attribute__((used)) static void FUNC_3(struct bcm63xx_udc *VAR_3)
{
 struct dentry *VAR_4;

 if (!FUNC_0(VAR_0))
  return;

 VAR_4 = FUNC_1(VAR_3->gadget.name, ((void*)0));
 VAR_3->debugfs_root = VAR_4;

 FUNC_2("usbd", 0400, VAR_4, VAR_3, &VAR_2);
 FUNC_2("iudma", 0400, VAR_4, VAR_3, &VAR_1);
}
