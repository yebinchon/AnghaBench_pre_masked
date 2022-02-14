
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qstr {int dummy; } ;
struct dentry {int d_flags; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct super_block*,struct qstr const*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;

struct dentry *FUNC_2(struct super_block *VAR_1, const struct qstr *VAR_2)
{
 struct dentry *VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  VAR_3->d_flags |= VAR_0;
 return VAR_3;
}
