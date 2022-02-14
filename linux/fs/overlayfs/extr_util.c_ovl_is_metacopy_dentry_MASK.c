
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_entry {int numlower; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;

bool FUNC_4(struct dentry *VAR_0)
{
 struct ovl_entry *VAR_1 = VAR_0->d_fsdata;

 if (!FUNC_1(VAR_0))
  return 0;

 if (FUNC_2(VAR_0)) {
  if (!FUNC_3(FUNC_0(VAR_0)))
   return 1;
  return 0;
 }

 return (VAR_1->numlower > 1);
}
