
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_info {int dummy; } ;
struct ocfs2_xa_loc {TYPE_1__* xl_ops; } ;
struct TYPE_2__ {int (* xlo_can_reuse ) (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*) ;} ;


 int FUNC_0 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_xa_loc *VAR_0,
        struct ocfs2_xattr_info *VAR_1)
{
 return VAR_0->xl_ops->xlo_can_reuse(VAR_0, VAR_1);
}
