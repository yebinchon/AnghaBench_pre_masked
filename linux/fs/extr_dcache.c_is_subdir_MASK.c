
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*,struct dentry*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int VAR_0 ;

bool FUNC_5(struct dentry *VAR_1, struct dentry *VAR_2)
{
 bool VAR_3;
 unsigned VAR_4;

 if (VAR_1 == VAR_2)
  return 1;

 do {

  VAR_4 = FUNC_3(&VAR_0);




  FUNC_1();
  if (FUNC_0(VAR_2, VAR_1))
   VAR_3 = 1;
  else
   VAR_3 = 0;
  FUNC_2();
 } while (FUNC_4(&VAR_0, VAR_4));

 return VAR_3;
}
