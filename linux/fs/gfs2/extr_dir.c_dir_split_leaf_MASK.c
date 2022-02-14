
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qstr {int hash; char* name; int len; } ;
struct inode {int dummy; } ;
struct gfs2_leaf {int lf_depth; int lf_entries; } ;
struct gfs2_inode {int i_depth; struct inode i_inode; int i_gl; } ;
struct gfs2_dirent {int de_type; int de_inum; int de_hash; int de_name_len; } ;
struct buffer_head {char* b_data; int b_blocknr; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct gfs2_dirent*) ;
 int FUNC_4 (struct gfs2_dirent*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct gfs2_inode*,struct buffer_head*,struct gfs2_dirent*,struct gfs2_dirent*) ;
 scalar_t__ FUNC_11 (struct gfs2_inode*,struct buffer_head*,struct gfs2_dirent**) ;
 int FUNC_12 (int ,char*,int,int,int) ;
 int FUNC_13 (struct gfs2_inode*,int ,struct buffer_head**) ;
 int FUNC_14 (struct gfs2_inode*,int,int *) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (struct gfs2_inode*) ;
 int FUNC_18 (struct gfs2_inode*,char*) ;
 int FUNC_19 (struct gfs2_inode*) ;
 int FUNC_20 (struct gfs2_inode*,char*,int,int) ;
 int FUNC_21 (struct gfs2_dirent*) ;
 struct gfs2_dirent* FUNC_22 (struct inode*,struct buffer_head*,struct qstr*,void*) ;
 int FUNC_23 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_24 (int ,struct buffer_head*) ;
 int FUNC_25 (int *) ;
 int * FUNC_26 (int,int,int ) ;
 struct gfs2_leaf* FUNC_27 (struct inode*,struct buffer_head**,int) ;

__attribute__((used)) static int FUNC_28(struct inode *VAR_4, const struct qstr *VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_1(VAR_4);
 struct buffer_head *VAR_7, *VAR_8, *VAR_9;
 struct gfs2_leaf *VAR_10, *VAR_11;
 struct gfs2_dirent *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 u64 VAR_20, VAR_21;
 __be64 *VAR_22;
 u32 VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_23 = VAR_5->hash >> (32 - VAR_6->i_depth);
 VAR_25 = FUNC_14(VAR_6, VAR_23, &VAR_21);
 if (VAR_25)
  return VAR_25;


 VAR_25 = FUNC_13(VAR_6, VAR_21, &VAR_8);
 if (VAR_25)
  return VAR_25;

 VAR_11 = (struct gfs2_leaf *)VAR_8->b_data;
 if (VAR_6->i_depth == FUNC_6(VAR_11->lf_depth)) {
  FUNC_8(VAR_8);
  return 1;
 }

 FUNC_24(VAR_6->i_gl, VAR_8);

 VAR_10 = FUNC_27(VAR_4, &VAR_7, FUNC_6(VAR_11->lf_depth) + 1);
 if (!VAR_10) {
  FUNC_8(VAR_8);
  return -VAR_2;
 }
 VAR_20 = VAR_7->b_blocknr;


 VAR_17 = FUNC_0(VAR_6->i_depth - FUNC_6(VAR_11->lf_depth));
 VAR_18 = VAR_17 >> 1;
 if (!VAR_18) {
  FUNC_12(FUNC_2(VAR_4), "i_depth %u lf_depth %u index %u\n",
   VAR_6->i_depth, FUNC_6(VAR_11->lf_depth), VAR_23);
  FUNC_17(VAR_6);
  VAR_25 = -VAR_0;
  goto fail_brelse;
 }

 VAR_16 = (VAR_23 & ~(VAR_17 - 1));




 VAR_22 = FUNC_26(VAR_18, sizeof(__be64), VAR_3);
 if (!VAR_22) {
  VAR_25 = -VAR_1;
  goto fail_brelse;
 }


 for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++)
  VAR_22[VAR_24] = FUNC_9(VAR_20);

 FUNC_19(VAR_6);

 VAR_25 = FUNC_20(VAR_6, (char *)VAR_22, VAR_16 * sizeof(u64),
        VAR_18 * sizeof(u64));
 if (VAR_25 != VAR_18 * sizeof(u64)) {
  if (VAR_25 >= 0)
   VAR_25 = -VAR_0;
  goto fail_lpfree;
 }

 FUNC_25(VAR_22);


 VAR_19 = (VAR_16 + VAR_18) << (32 - VAR_6->i_depth);


 VAR_12 = (struct gfs2_dirent *)(VAR_8->b_data + sizeof(struct gfs2_leaf));

 do {
  VAR_14 = VAR_12;
  if (FUNC_11(VAR_6, VAR_8, &VAR_14))
   VAR_14 = ((void*)0);

  if (!FUNC_21(VAR_12) &&
      FUNC_7(VAR_12->de_hash) < VAR_19) {
   struct qstr VAR_26;
   void *VAR_27 = ((char *)VAR_12 - VAR_8->b_data) + VAR_7->b_data;
   VAR_26.name = (char*)(VAR_12+1);
   VAR_26.len = FUNC_6(VAR_12->de_name_len);
   VAR_26.hash = FUNC_7(VAR_12->de_hash);
   VAR_15 = FUNC_22(VAR_4, VAR_7, &VAR_26, VAR_27);
   if (FUNC_3(VAR_15)) {
    VAR_25 = FUNC_4(VAR_15);
    break;
   }

   VAR_15->de_inum = VAR_12->de_inum;
   VAR_15->de_type = VAR_12->de_type;
   FUNC_5(&VAR_10->lf_entries, 1);

   FUNC_10(VAR_6, VAR_8, VAR_13, VAR_12);

   if (!VAR_11->lf_entries)
    FUNC_17(VAR_6);
   FUNC_5(&VAR_11->lf_entries, -1);

   if (!VAR_13)
    VAR_13 = VAR_12;
  } else {
   VAR_13 = VAR_12;
  }
  VAR_12 = VAR_14;
 } while (VAR_12);

 VAR_11->lf_depth = VAR_10->lf_depth;

 VAR_25 = FUNC_23(VAR_6, &VAR_9);
 if (!FUNC_16(FUNC_2(&VAR_6->i_inode), !VAR_25)) {
  FUNC_24(VAR_6->i_gl, VAR_9);
  FUNC_15(&VAR_6->i_inode, 1);
  FUNC_18(VAR_6, VAR_9->b_data);
  FUNC_8(VAR_9);
 }

 FUNC_8(VAR_8);
 FUNC_8(VAR_7);

 return VAR_25;

fail_lpfree:
 FUNC_25(VAR_22);

fail_brelse:
 FUNC_8(VAR_8);
 FUNC_8(VAR_7);
 return VAR_25;
}
