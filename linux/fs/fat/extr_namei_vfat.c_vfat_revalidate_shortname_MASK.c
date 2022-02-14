
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; int d_parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0)
{
 int VAR_1 = 1;
 FUNC_2(&VAR_0->d_lock);
 if (!FUNC_1(FUNC_0(VAR_0->d_parent), FUNC_4(VAR_0)))
  VAR_1 = 0;
 FUNC_3(&VAR_0->d_lock);
 return VAR_1;
}
