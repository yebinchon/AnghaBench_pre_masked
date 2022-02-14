
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {unsigned int s_blocksize; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_prev_leaf_bh; struct buffer_head* dl_dx_root_bh; struct buffer_head* dl_leaf_bh; } ;
struct ocfs2_dir_entry {int name_len; void* rec_len; int name; scalar_t__ inode; int file_type; } ;
struct TYPE_4__ {char* id_data; } ;
struct TYPE_5__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; struct super_block* i_sb; } ;
struct buffer_head {char* b_data; scalar_t__ b_blocknr; } ;
typedef int handle_t ;
struct TYPE_6__ {int ip_dyn_features; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 unsigned int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (int ,char*,int,char const*,int,unsigned long long,unsigned long,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,unsigned long) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (struct super_block*) ;
 scalar_t__ FUNC_17 (struct ocfs2_dir_entry*,unsigned short) ;
 int FUNC_18 (struct inode*,int *,struct ocfs2_dir_lookup_result*) ;
 scalar_t__ FUNC_19 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_20 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_21 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_22 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_23 (int *,struct buffer_head*) ;
 int FUNC_24 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_25 (int,char const*,struct ocfs2_dir_entry*) ;
 int FUNC_26 (struct inode*,int *,struct ocfs2_dir_lookup_result*) ;
 int FUNC_27 (struct ocfs2_dir_entry*,int ) ;
 int FUNC_28 (struct inode*,struct ocfs2_dir_entry*,unsigned long,unsigned int) ;

int FUNC_29(handle_t *VAR_7,
        struct inode *VAR_8,
        const char *VAR_9, int VAR_10,
        struct inode *VAR_11, u64 VAR_12,
        struct buffer_head *VAR_13,
        struct ocfs2_dir_lookup_result *VAR_14)
{
 unsigned long VAR_15;
 unsigned short VAR_16;
 struct ocfs2_dir_entry *VAR_17, *VAR_18;
 struct ocfs2_dinode *VAR_19 = (struct ocfs2_dinode *)VAR_13->b_data;
 struct super_block *VAR_20 = VAR_8->i_sb;
 int VAR_21;
 unsigned int VAR_22 = VAR_20->s_blocksize;
 struct buffer_head *VAR_23 = VAR_14->dl_leaf_bh;
 char *VAR_24 = VAR_23->b_data;

 if (!VAR_10)
  return -VAR_1;

 if (FUNC_15(VAR_8)) {
  struct buffer_head *VAR_25;
  if (FUNC_19(VAR_14)) {
   VAR_25 = VAR_14->dl_dx_root_bh;
   VAR_21 = FUNC_22(VAR_7,
       FUNC_1(VAR_8), VAR_25,
       VAR_6);
  } else {
   VAR_25 = VAR_14->dl_prev_leaf_bh;
   VAR_21 = FUNC_20(VAR_7,
       FUNC_1(VAR_8), VAR_25,
       VAR_6);
  }
  if (VAR_21) {
   FUNC_13(VAR_21);
   return VAR_21;
  }
 } else if (FUNC_3(VAR_8)->ip_dyn_features & VAR_5) {
  VAR_24 = VAR_19->id2.i_data.id_data;
  VAR_22 = FUNC_7(VAR_8);

  FUNC_0(VAR_23 != VAR_13);
 }

 VAR_16 = FUNC_2(VAR_10);
 VAR_15 = 0;
 VAR_17 = (struct ocfs2_dir_entry *) VAR_24;
 while (1) {
  FUNC_0((char *)VAR_17 >= (VAR_22 + VAR_24));




  if (!FUNC_14(VAR_8, VAR_17, VAR_23, VAR_15)) {
   VAR_21 = -VAR_2;
   goto bail;
  }
  if (FUNC_25(VAR_10, VAR_9, VAR_17)) {
   VAR_21 = -VAR_0;
   goto bail;
  }



  FUNC_12(FUNC_28(VAR_8, VAR_17, VAR_15, VAR_22),
    "Hit dir trailer trying to insert %.*s "
           "(namelen %d) into directory %llu.  "
    "offset is %lu, trailer offset is %d\n",
    VAR_10, VAR_9, VAR_10,
    (unsigned long long)VAR_13->b_blocknr,
    VAR_15, FUNC_16(VAR_8->i_sb));

  if (FUNC_17(VAR_17, VAR_16)) {
   VAR_8->i_mtime = VAR_8->i_ctime = FUNC_6(VAR_8);
   VAR_21 = FUNC_24(VAR_7, VAR_8, VAR_13);
   if (VAR_21 < 0) {
    FUNC_13(VAR_21);
    goto bail;
   }

   if (VAR_23 == VAR_13)
    VAR_21 = FUNC_21(VAR_7,
         FUNC_1(VAR_8),
         VAR_23,
         VAR_6);
   else {
    VAR_21 = FUNC_20(VAR_7,
         FUNC_1(VAR_8),
         VAR_23,
           VAR_6);

    if (!VAR_21 && FUNC_15(VAR_8))
     VAR_21 = FUNC_18(VAR_8,
        VAR_7,
        VAR_14);
   }

   if (VAR_21) {
    FUNC_13(VAR_21);
    goto bail;
   }


   VAR_15 += FUNC_9(VAR_17->rec_len);
   if (FUNC_10(VAR_17->inode)) {
    VAR_18 = (struct ocfs2_dir_entry *)((char *) VAR_17 +
     FUNC_2(VAR_17->name_len));
    VAR_18->rec_len =
     FUNC_4(FUNC_9(VAR_17->rec_len) -
     FUNC_2(VAR_17->name_len));
    VAR_17->rec_len = FUNC_4(FUNC_2(VAR_17->name_len));
    VAR_17 = VAR_18;
   }
   VAR_17->file_type = VAR_4;
   if (VAR_12) {
    VAR_17->inode = FUNC_5(VAR_12);
    FUNC_27(VAR_17, VAR_11->i_mode);
   } else
    VAR_17->inode = 0;
   VAR_17->name_len = VAR_10;
   FUNC_11(VAR_17->name, VAR_9, VAR_10);

   if (FUNC_15(VAR_8))
    FUNC_26(VAR_8, VAR_7, VAR_14);

   FUNC_8(VAR_8);
   FUNC_23(VAR_7, VAR_23);
   VAR_21 = 0;
   goto bail;
  }

  VAR_15 += FUNC_9(VAR_17->rec_len);
  VAR_17 = (struct ocfs2_dir_entry *) ((char *) VAR_17 + FUNC_9(VAR_17->rec_len));
 }



 VAR_21 = -VAR_3;
bail:
 if (VAR_21)
  FUNC_13(VAR_21);

 return VAR_21;
}
