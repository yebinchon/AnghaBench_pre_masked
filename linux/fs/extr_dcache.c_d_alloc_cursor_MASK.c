
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_parent; int d_flags; int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;

struct dentry *FUNC_2(struct dentry * VAR_1)
{
 struct dentry *VAR_2 = FUNC_0(VAR_1->d_sb);
 if (VAR_2) {
  VAR_2->d_flags |= VAR_0;
  VAR_2->d_parent = FUNC_1(VAR_1);
 }
 return VAR_2;
}
