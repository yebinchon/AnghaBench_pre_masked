
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2 {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (struct dentry*,struct mvpp2*,int) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_1, struct mvpp2 *VAR_2)
{
 struct dentry *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_0("parser", VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
