
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_xattr_value_buf {TYPE_1__* vb_xv; } ;
struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int xr_clusters; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct inode*,scalar_t__,struct ocfs2_xattr_value_buf*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__,struct ocfs2_xattr_value_buf*,struct ocfs2_xattr_set_ctxt*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0,
          struct ocfs2_xattr_value_buf *VAR_1,
          int VAR_2,
          struct ocfs2_xattr_set_ctxt *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = FUNC_1(VAR_0->i_sb, VAR_2);
 u32 VAR_6 = FUNC_0(VAR_1->vb_xv->xr_clusters);

 if (VAR_5 == VAR_6)
  return 0;

 if (VAR_5 > VAR_6)
  VAR_4 = FUNC_2(VAR_0,
          VAR_5 - VAR_6,
          VAR_1, VAR_3);
 else
  VAR_4 = FUNC_3(VAR_0,
           VAR_6, VAR_5,
           VAR_1, VAR_3);

 return VAR_4;
}
