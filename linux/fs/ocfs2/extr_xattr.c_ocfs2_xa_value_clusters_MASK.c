
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {TYPE_1__* vb_xv; } ;
struct ocfs2_xa_loc {int xl_entry; } ;
struct TYPE_2__ {int xr_clusters; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_xa_loc*,struct ocfs2_xattr_value_buf*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct ocfs2_xa_loc *VAR_0)
{
 struct ocfs2_xattr_value_buf VAR_1;

 if (FUNC_2(VAR_0->xl_entry))
  return 0;

 FUNC_1(VAR_0, &VAR_1);
 return FUNC_0(VAR_1.vb_xv->xr_clusters);
}
