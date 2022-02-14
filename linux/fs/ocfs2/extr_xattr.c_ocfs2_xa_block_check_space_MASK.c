
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_info {int dummy; } ;
struct ocfs2_xa_loc {scalar_t__ xl_entry; TYPE_1__* xl_header; } ;
struct TYPE_2__ {int xh_count; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct ocfs2_xa_loc*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ocfs2_xattr_info*) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_xa_loc *VAR_0,
          struct ocfs2_xattr_info *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->xl_header->xh_count);
 int VAR_3 = FUNC_3(VAR_0);
 int VAR_4 = FUNC_5(VAR_1);






 if (VAR_0->xl_entry) {

  if (FUNC_1(VAR_0, VAR_1))
   VAR_4 = 0;
  else
   VAR_4 -= FUNC_4(VAR_0->xl_entry);
 }
 if (VAR_4 < 0)
  VAR_4 = 0;
 return FUNC_2(VAR_4, VAR_3, VAR_2);
}
