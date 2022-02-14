
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,int) ;
 scalar_t__ FUNC_2 (struct dentry*) ;

__attribute__((used)) static bool FUNC_3(struct dentry *VAR_1, int VAR_2)
{
 bool VAR_3 = VAR_1->d_flags & VAR_0;

 if (FUNC_2(VAR_1) &&
     (FUNC_0(VAR_1) || VAR_3) &&
     !FUNC_1(VAR_1, VAR_2))
  return 1;

 return 0;
}
