
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_fs {scalar_t__ upper_mnt; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct ovl_fs* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_1)
{
 struct ovl_fs *VAR_2 = VAR_1->d_sb->s_fs_info;


 if (!FUNC_3(VAR_1))
  return 0;







 if (FUNC_4(VAR_1) &&
     !FUNC_5(VAR_0, FUNC_0(VAR_1)))
  return 0;







 if (FUNC_1(VAR_1) && VAR_2->upper_mnt)
  return FUNC_2(VAR_1);


 return 1;
}
