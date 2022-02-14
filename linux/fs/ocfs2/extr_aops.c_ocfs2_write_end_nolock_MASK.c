
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct page {scalar_t__ index; } ;
struct ocfs2_write_ctxt {int w_num_pages; unsigned int w_target_from; unsigned int w_target_to; scalar_t__ w_type; TYPE_1__* w_di_bh; int w_dealloc; struct page* w_target_page; struct page** w_pages; int w_unwritten_list; int * w_handle; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_ctime_nsec; int i_mtime_nsec; void* i_ctime; void* i_mtime; void* i_size; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_3__ i_mtime; TYPE_3__ i_ctime; int i_blocks; int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_8__ {int ip_dyn_features; } ;
struct TYPE_6__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 TYPE_3__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct ocfs2_write_ctxt*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct ocfs2_super*,int *) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int *,struct inode*,int,int) ;
 int FUNC_20 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_21 (int *,TYPE_1__*) ;
 int FUNC_22 (struct ocfs2_super*,int *) ;
 scalar_t__ FUNC_23 (struct inode*) ;
 int FUNC_24 (struct ocfs2_write_ctxt*) ;
 int FUNC_25 (int *,struct inode*,int) ;
 int FUNC_26 (struct inode*,int,unsigned int,unsigned int*,struct ocfs2_dinode*,struct ocfs2_write_ctxt*) ;
 int FUNC_27 (struct page*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_28 (struct page*) ;
 scalar_t__ FUNC_29 (int) ;

int FUNC_30(struct address_space *VAR_5,
      loff_t VAR_6, unsigned VAR_7, unsigned VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11;
 unsigned VAR_12, VAR_13, VAR_14 = VAR_6 & (VAR_4 - 1);
 struct inode *VAR_15 = VAR_5->host;
 struct ocfs2_super *VAR_16 = FUNC_3(VAR_15->i_sb);
 struct ocfs2_write_ctxt *VAR_17 = VAR_9;
 struct ocfs2_dinode *VAR_18 = (struct ocfs2_dinode *)VAR_17->w_di_bh->b_data;
 handle_t *VAR_19 = VAR_17->w_handle;
 struct page *VAR_20;

 FUNC_0(!FUNC_14(&VAR_17->w_unwritten_list));

 if (VAR_19) {
  VAR_11 = FUNC_20(VAR_19, FUNC_1(VAR_15),
    VAR_17->w_di_bh, VAR_1);
  if (VAR_11) {
   VAR_8 = VAR_11;
   FUNC_16(VAR_11);
   goto out;
  }
 }

 if (FUNC_2(VAR_15)->ip_dyn_features & VAR_0) {
  FUNC_26(VAR_15, VAR_6, VAR_7, &VAR_8, VAR_18, VAR_17);
  goto out_write_size;
 }

 if (FUNC_29(VAR_8 < VAR_7) && VAR_17->w_target_page) {
  if (!FUNC_4(VAR_17->w_target_page))
   VAR_8 = 0;

  FUNC_27(VAR_17->w_target_page, VAR_14+VAR_8,
           VAR_14+VAR_7);
 }
 if (VAR_17->w_target_page)
  FUNC_10(VAR_17->w_target_page);

 for(VAR_10 = 0; VAR_10 < VAR_17->w_num_pages; VAR_10++) {
  VAR_20 = VAR_17->w_pages[VAR_10];


  if (VAR_20 == ((void*)0))
   continue;

  if (VAR_20 == VAR_17->w_target_page) {
   VAR_12 = VAR_17->w_target_from;
   VAR_13 = VAR_17->w_target_to;

   FUNC_0(VAR_12 > VAR_4 ||
          VAR_13 > VAR_4 ||
          VAR_13 < VAR_12);
  } else {





   VAR_12 = 0;
   VAR_13 = VAR_4;
  }

  if (FUNC_28(VAR_20)) {
   if (VAR_19 && FUNC_23(VAR_15)) {
    loff_t VAR_21 =
     ((loff_t)VAR_20->index << VAR_3) +
     VAR_12;
    loff_t VAR_22 = VAR_13 - VAR_12;
    FUNC_19(VAR_19, VAR_15,
          VAR_21, VAR_22);
   }
   FUNC_5(VAR_20, VAR_12, VAR_13);
  }
 }

out_write_size:

 if (VAR_17->w_type != VAR_2) {
  VAR_6 += VAR_8;
  if (VAR_6 > FUNC_11(VAR_15)) {
   FUNC_12(VAR_15, VAR_6);
   FUNC_15(VAR_15);
  }
  VAR_15->i_blocks = FUNC_18(VAR_15);
  VAR_18->i_size = FUNC_8((u64)FUNC_11(VAR_15));
  VAR_15->i_mtime = VAR_15->i_ctime = FUNC_9(VAR_15);
  VAR_18->i_mtime = VAR_18->i_ctime = FUNC_8(VAR_15->i_mtime.tv_sec);
  VAR_18->i_mtime_nsec = VAR_18->i_ctime_nsec = FUNC_7(VAR_15->i_mtime.tv_nsec);
  if (VAR_19)
   FUNC_25(VAR_19, VAR_15, 1);
 }
 if (VAR_19)
  FUNC_21(VAR_19, VAR_17->w_di_bh);

out:





 FUNC_24(VAR_17);

 if (VAR_19)
  FUNC_17(VAR_16, VAR_19);

 FUNC_22(VAR_16, &VAR_17->w_dealloc);

 FUNC_6(VAR_17->w_di_bh);
 FUNC_13(VAR_17);

 return VAR_8;
}
