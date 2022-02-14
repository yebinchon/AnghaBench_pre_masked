
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int * FUNC_0 (struct dentry*,struct dentry*) ;
 int FUNC_1 (struct dentry*,struct dentry*) ;

__attribute__((used)) static bool FUNC_2(struct dentry *VAR_0, struct dentry *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 != VAR_1) {
  VAR_2 = (FUNC_0(VAR_0, VAR_1) == ((void*)0));
  FUNC_1(VAR_0, VAR_1);
 }
 return VAR_2;
}
