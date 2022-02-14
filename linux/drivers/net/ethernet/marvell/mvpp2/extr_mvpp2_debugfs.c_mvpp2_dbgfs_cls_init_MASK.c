
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2 {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (struct dentry*,struct mvpp2*,int) ;
 int FUNC_2 (struct dentry*,struct mvpp2*,int) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_3, struct mvpp2 *VAR_4)
{
 struct dentry *VAR_5, *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = FUNC_0("classifier", VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0("c2", VAR_5);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_9 = FUNC_1(VAR_6, VAR_4, VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 VAR_7 = FUNC_0("flow_table", VAR_5);
 if (!VAR_7)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
