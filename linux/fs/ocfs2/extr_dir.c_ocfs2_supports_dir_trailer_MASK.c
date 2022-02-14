
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1)
{
 struct ocfs2_super *VAR_2 = FUNC_1(VAR_1->i_sb);

 if (FUNC_0(VAR_1)->ip_dyn_features & VAR_0)
  return 0;

 return FUNC_3(VAR_2) || FUNC_2(VAR_1);
}
