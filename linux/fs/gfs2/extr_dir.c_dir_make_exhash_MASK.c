
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct qstr {int len; scalar_t__ name; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int sb_bsize; } ;
struct gfs2_sbd {int sd_hash_ptrs; TYPE_1__ sd_sb; } ;
struct gfs2_leaf {void* lf_entries; } ;
struct gfs2_inode {scalar_t__ i_entries; int i_depth; int i_diskflags; int i_inode; int i_gl; } ;
struct gfs2_dirent {void* de_rec_len; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int b_size; scalar_t__ b_data; int b_blocknr; } ;
typedef int __be64 ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct gfs2_dirent*) ;
 int FUNC_4 (struct gfs2_dirent*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (struct buffer_head*) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct gfs2_sbd*,int) ;
 int FUNC_11 (struct buffer_head*,int) ;
 int FUNC_12 (struct buffer_head*,int,struct buffer_head*,int) ;
 int FUNC_13 (struct gfs2_inode*,scalar_t__) ;
 int VAR_3 ;
 struct gfs2_dirent* FUNC_14 (int *,scalar_t__,int,int ,struct qstr*,int *) ;
 int FUNC_15 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_16 (int ,struct buffer_head*) ;
 int FUNC_17 (struct inode*,int) ;
 struct gfs2_leaf* FUNC_18 (struct inode*,struct buffer_head**,int ) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_1(VAR_4);
 struct gfs2_sbd *VAR_6 = FUNC_2(VAR_4);
 struct gfs2_dirent *VAR_7;
 struct qstr VAR_8;
 struct buffer_head *VAR_9, *VAR_10;
 struct gfs2_leaf *VAR_11;
 int VAR_12;
 u32 VAR_13;
 __be64 *VAR_14;
 u64 VAR_15;
 int VAR_16;

 VAR_16 = FUNC_15(VAR_5, &VAR_10);
 if (VAR_16)
  return VAR_16;



 VAR_11 = FUNC_18(VAR_4, &VAR_9, 0);
 if (!VAR_11)
  return -VAR_1;
 VAR_15 = VAR_9->b_blocknr;

 FUNC_10(VAR_6, VAR_5->i_entries < FUNC_0(16));
 VAR_11->lf_entries = FUNC_7(VAR_5->i_entries);



 FUNC_12(VAR_9, sizeof(struct gfs2_leaf), VAR_10,
        sizeof(struct gfs2_dinode));



 VAR_13 = 0;
 VAR_8.len = VAR_9->b_size - sizeof(struct gfs2_dinode) +
     sizeof(struct gfs2_leaf);
 VAR_8.name = VAR_9->b_data;
 VAR_7 = FUNC_14(&VAR_5->i_inode, VAR_9->b_data, VAR_9->b_size,
    VAR_3, &VAR_8, ((void*)0));
 if (!VAR_7) {
  FUNC_6(VAR_9);
  FUNC_6(VAR_10);
  return -VAR_0;
 }
 if (FUNC_3(VAR_7)) {
  FUNC_6(VAR_9);
  FUNC_6(VAR_10);
  return FUNC_4(VAR_7);
 }




 VAR_7->de_rec_len = FUNC_7(FUNC_5(VAR_7->de_rec_len) +
  sizeof(struct gfs2_dinode) -
  sizeof(struct gfs2_leaf));

 FUNC_6(VAR_9);




 FUNC_16(VAR_5->i_gl, VAR_10);
 FUNC_11(VAR_10, sizeof(struct gfs2_dinode));

 VAR_14 = (__be64 *)(VAR_10->b_data + sizeof(struct gfs2_dinode));

 for (VAR_13 = VAR_6->sd_hash_ptrs; VAR_13--; VAR_14++)
  *VAR_14 = FUNC_8(VAR_15);

 FUNC_17(VAR_4, VAR_6->sd_sb.sb_bsize / 2);
 FUNC_9(&VAR_5->i_inode, 1);
 VAR_5->i_diskflags |= VAR_2;

 for (VAR_13 = VAR_6->sd_hash_ptrs, VAR_12 = -1; VAR_13; VAR_13 >>= 1, VAR_12++) ;
 VAR_5->i_depth = VAR_12;

 FUNC_13(VAR_5, VAR_10->b_data);

 FUNC_6(VAR_10);

 return 0;
}
