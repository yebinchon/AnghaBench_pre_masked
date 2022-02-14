
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct dentry*,int ,char*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(struct dentry *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;

 if (FUNC_3(VAR_0, FUNC_0(VAR_2)))
  return 0;





 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1,
     "y", 1, 0);
 if (!VAR_4)
  FUNC_2(VAR_0, FUNC_0(VAR_2));

 return VAR_4;
}
