
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_4__ {int metacopy; } ;
struct ovl_fs {TYPE_2__ config; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_3__ {struct ovl_fs* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct dentry *VAR_2, umode_t VAR_3,
      int VAR_4)
{
 struct ovl_fs *VAR_5 = VAR_2->d_sb->s_fs_info;

 if (!VAR_5->config.metacopy)
  return 0;

 if (!FUNC_1(VAR_3))
  return 0;

 if (VAR_4 && ((FUNC_0(VAR_4) & VAR_0) || (VAR_4 & VAR_1)))
  return 0;

 return 1;
}
