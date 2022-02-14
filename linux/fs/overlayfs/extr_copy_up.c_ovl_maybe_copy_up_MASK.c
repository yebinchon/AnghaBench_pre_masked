
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,int) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*,int) ;
 int FUNC_3 (struct dentry*) ;

int FUNC_4(struct dentry *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_2(VAR_0, VAR_1)) {
  VAR_2 = FUNC_3(VAR_0);
  if (!VAR_2) {
   VAR_2 = FUNC_0(VAR_0, VAR_1);
   FUNC_1(VAR_0);
  }
 }

 return VAR_2;
}
