
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dentry*,struct dentry*,struct dentry*) ;
 int FUNC_4 (struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0, struct dentry *VAR_1,
     struct dentry *VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_2(VAR_0->d_parent, VAR_2->d_parent);

 FUNC_1(VAR_0);
 return VAR_3;
}
