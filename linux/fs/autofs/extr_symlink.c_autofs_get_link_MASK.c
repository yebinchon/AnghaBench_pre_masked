
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct delayed_call {int dummy; } ;
struct autofs_sb_info {int dummy; } ;
struct autofs_info {int last_used; } ;
struct TYPE_2__ {char const* i_private; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct dentry*) ;
 int VAR_1 ;

__attribute__((used)) static const char *FUNC_5(struct dentry *VAR_2,
       struct inode *VAR_3,
       struct delayed_call *VAR_4)
{
 struct autofs_sb_info *VAR_5;
 struct autofs_info *VAR_6;

 if (!VAR_2)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_3(VAR_2->d_sb);
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 && !FUNC_2(VAR_5))
  VAR_6->last_used = VAR_1;
 return FUNC_4(VAR_2)->i_private;
}
