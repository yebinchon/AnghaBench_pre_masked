
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct ocfs2_write_ctxt {int w_num_pages; int * w_handle; TYPE_1__* w_di_bh; struct page* w_target_page; struct page** w_pages; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_sb; } ;
struct address_space {int dummy; } ;
typedef int handle_t ;
struct TYPE_5__ {int ip_dyn_features; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct address_space*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_10 (struct inode*,struct page*,TYPE_1__*) ;
 int FUNC_11 (struct inode*,struct ocfs2_dinode*) ;
 int * FUNC_12 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_13(struct address_space *VAR_5,
        struct inode *VAR_6,
        struct ocfs2_write_ctxt *VAR_7)
{
 int VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_3(VAR_6->i_sb);
 struct page *VAR_10;
 handle_t *VAR_11;
 struct ocfs2_dinode *VAR_12 = (struct ocfs2_dinode *)VAR_7->w_di_bh->b_data;

 VAR_11 = FUNC_12(VAR_9, VAR_3);
 if (FUNC_1(VAR_11)) {
  VAR_8 = FUNC_4(VAR_11);
  FUNC_7(VAR_8);
  goto out;
 }

 VAR_10 = FUNC_6(VAR_5, 0, VAR_1);
 if (!VAR_10) {
  FUNC_8(VAR_9, VAR_11);
  VAR_8 = -VAR_0;
  FUNC_7(VAR_8);
  goto out;
 }




 VAR_7->w_pages[0] = VAR_7->w_target_page = VAR_10;
 VAR_7->w_num_pages = 1;

 VAR_8 = FUNC_9(VAR_11, FUNC_0(VAR_6), VAR_7->w_di_bh,
          VAR_4);
 if (VAR_8) {
  FUNC_8(VAR_9, VAR_11);

  FUNC_7(VAR_8);
  goto out;
 }

 if (!(FUNC_2(VAR_6)->ip_dyn_features & VAR_2))
  FUNC_11(VAR_6, VAR_12);

 if (!FUNC_5(VAR_10)) {
  VAR_8 = FUNC_10(VAR_6, VAR_10, VAR_7->w_di_bh);
  if (VAR_8) {
   FUNC_8(VAR_9, VAR_11);

   goto out;
  }
 }

 VAR_7->w_handle = VAR_11;
out:
 return VAR_8;
}
