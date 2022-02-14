
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; int d_sb; } ;
struct autofs_sb_info {int lookup_lock; } ;


 struct autofs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,struct dentry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct dentry *FUNC_5(struct dentry *VAR_0,
            struct dentry *VAR_1)
{
 struct autofs_sb_info *VAR_2 = FUNC_0(VAR_1->d_sb);
 struct dentry *VAR_3;

 FUNC_3(&VAR_2->lookup_lock);
 FUNC_3(&VAR_1->d_lock);
 VAR_3 = FUNC_2(VAR_1, VAR_0);
 FUNC_4(&VAR_1->d_lock);
 FUNC_4(&VAR_2->lookup_lock);
 FUNC_1(VAR_0);
 return VAR_3;
}
