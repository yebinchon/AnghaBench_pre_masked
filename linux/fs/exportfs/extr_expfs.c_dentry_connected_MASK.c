
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static bool FUNC_3(struct dentry *VAR_1)
{
 FUNC_0(VAR_1);
 while (VAR_1->d_flags & VAR_0) {
  struct dentry *VAR_2 = FUNC_1(VAR_1);

  FUNC_2(VAR_1);
  if (VAR_1 == VAR_2) {
   FUNC_2(VAR_2);
   return 0;
  }
  VAR_1 = VAR_2;
 }
 FUNC_2(VAR_1);
 return 1;
}
