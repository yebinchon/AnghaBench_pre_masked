
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_info {int dummy; } ;
struct ocfs2_xa_loc {int xl_entry; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_xattr_info*) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_xa_loc *VAR_0,
         struct ocfs2_xattr_info *VAR_1)
{
 return FUNC_0(VAR_0->xl_entry) >=
  FUNC_1(VAR_1);
}
