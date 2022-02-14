
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct config_item {int ci_dentry; } ;


 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static void FUNC_3(struct config_item * VAR_0)
{
 struct dentry * VAR_1 = FUNC_0(VAR_0->ci_dentry);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1);



 FUNC_1(VAR_1);
}
