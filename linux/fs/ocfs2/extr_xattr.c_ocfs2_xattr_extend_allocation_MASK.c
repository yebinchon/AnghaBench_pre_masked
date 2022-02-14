
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_xattr_value_buf {int (* vb_access ) (int *,int ,int ,int ) ;TYPE_1__* vb_xv; int vb_bh; } ;
struct ocfs2_xattr_set_ctxt {int meta_ac; int data_ac; int * handle; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
typedef enum ocfs2_alloc_restarted { ____Placeholder_ocfs2_alloc_restarted } ocfs2_alloc_restarted ;
struct TYPE_2__ {int xr_list; int xr_clusters; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct ocfs2_extent_tree*,scalar_t__*,scalar_t__,int ,int ,int ,int*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct ocfs2_extent_tree*,int ,struct ocfs2_xattr_value_buf*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_6,
      u32 VAR_7,
      struct ocfs2_xattr_value_buf *VAR_8,
      struct ocfs2_xattr_set_ctxt *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 handle_t *VAR_12 = VAR_9->handle;
 enum ocfs2_alloc_restarted VAR_13;
 u32 VAR_14, VAR_15 = FUNC_2(VAR_8->vb_xv->xr_clusters);
 struct ocfs2_extent_tree VAR_16;

 FUNC_7(&VAR_16, FUNC_1(VAR_6), VAR_8);

 while (VAR_7) {
  FUNC_10(VAR_7);

  VAR_10 = VAR_8->vb_access(VAR_12, FUNC_1(VAR_6), VAR_8->vb_bh,
           VAR_3);
  if (VAR_10 < 0) {
   FUNC_3(VAR_10);
   break;
  }

  VAR_14 = FUNC_2(VAR_8->vb_xv->xr_clusters);
  VAR_10 = FUNC_4(VAR_12,
           &VAR_16,
           &VAR_15,
           VAR_7,
           0,
           VAR_9->data_ac,
           VAR_9->meta_ac,
           &VAR_13);
  if ((VAR_10 < 0) && (VAR_10 != -VAR_0)) {
   if (VAR_10 != -VAR_2)
    FUNC_3(VAR_10);
   break;
  }

  FUNC_8(VAR_12, VAR_8->vb_bh);

  VAR_7 -= FUNC_2(VAR_8->vb_xv->xr_clusters) -
      VAR_14;

  if (VAR_13 != VAR_5 && VAR_7) {




   FUNC_0(VAR_13 == VAR_4);

   VAR_11 = FUNC_5(VAR_6->i_sb,
           &VAR_8->vb_xv->xr_list);
   VAR_10 = FUNC_6(VAR_12, VAR_11);
   if (VAR_10 < 0) {
    VAR_10 = -VAR_1;
    FUNC_3(VAR_10);
    break;
   }
  }
 }

 return VAR_10;
}
