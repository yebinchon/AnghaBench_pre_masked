
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {scalar_t__ index; } ;
struct inode {int i_sb; int i_blkbits; int i_mapping; } ;
struct gfs2_inode {int i_gl; struct inode i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct page*,int ,int ) ;
 struct page* FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct gfs2_inode*) ;
 scalar_t__ FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (int ,struct buffer_head*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 void* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (void*,scalar_t__,scalar_t__) ;
 int FUNC_16 (void*,int ,scalar_t__) ;
 struct buffer_head* FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static int FUNC_22(struct gfs2_inode *VAR_4, struct buffer_head *VAR_5,
          u64 VAR_6, struct page *VAR_7)
{
 struct inode *VAR_8 = &VAR_4->i_inode;
 struct buffer_head *VAR_9;
 int VAR_10 = 0;

 if (!VAR_7 || VAR_7->index) {
  VAR_7 = FUNC_5(VAR_8->i_mapping, 0, VAR_2);
  if (!VAR_7)
   return -VAR_1;
  VAR_10 = 1;
 }

 if (!FUNC_1(VAR_7)) {
  void *VAR_11 = FUNC_11(VAR_7);
  u64 VAR_12 = FUNC_10(VAR_8);

  if (VAR_12 > FUNC_7(VAR_4))
   VAR_12 = FUNC_7(VAR_4);

  FUNC_15(VAR_11, VAR_5->b_data + sizeof(struct gfs2_dinode), VAR_12);
  FUNC_16(VAR_11 + VAR_12, 0, VAR_3 - VAR_12);
  FUNC_12(VAR_7);

  FUNC_2(VAR_7);
 }

 if (!FUNC_18(VAR_7))
  FUNC_4(VAR_7, FUNC_0(VAR_8->i_blkbits),
         FUNC_0(VAR_0));

 VAR_9 = FUNC_17(VAR_7);

 if (!FUNC_3(VAR_9))
  FUNC_13(VAR_9, VAR_8->i_sb, VAR_6);

 FUNC_20(VAR_9);
 if (FUNC_6(VAR_4))
  FUNC_9(VAR_4->i_gl, VAR_9);
 else {
  FUNC_14(VAR_9);
  FUNC_8(VAR_4);
 }

 if (VAR_10) {
  FUNC_21(VAR_7);
  FUNC_19(VAR_7);
 }

 return 0;
}
