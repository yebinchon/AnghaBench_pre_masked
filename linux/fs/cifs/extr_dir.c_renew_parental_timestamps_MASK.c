
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_parent; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct dentry *VAR_1)
{


 do {
  FUNC_1(VAR_1, VAR_0);
  VAR_1 = VAR_1->d_parent;
 } while (!FUNC_0(VAR_1));
}
