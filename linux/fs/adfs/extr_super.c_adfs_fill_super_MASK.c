
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; struct adfs_sb_info* s_fs_info; int s_id; int s_root; int * s_d_op; int * s_op; int s_magic; int s_flags; } ;
struct object_info {int loadaddr; int execaddr; int attr; void* size; scalar_t__ name_len; void* indaddr; void* parent_id; } ;
struct inode {int dummy; } ;
struct buffer_head {unsigned char* b_data; } ;
struct adfs_sb_info {int s_map_size; int s_namelen; struct adfs_sb_info* s_map; struct buffer_head* dm_bh; scalar_t__ s_ftsuffix; int * s_dir; int s_log2sharesize; scalar_t__ s_map2blk; int s_idlen; int s_other_mask; int s_owner_mask; int s_gid; int s_uid; } ;
struct adfs_discrecord {int log2secsize; int nzones; int nzones_high; int root_size; scalar_t__ format_version; int root; int log2sharesize; scalar_t__ log2bpmb; int idlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (struct adfs_sb_info*) ;
 int VAR_20 ;
 int FUNC_1 (struct adfs_sb_info*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (struct adfs_discrecord*) ;
 int VAR_21 ;
 int FUNC_4 (struct super_block*,char*) ;
 int VAR_22 ;
 int VAR_23 ;
 struct inode* FUNC_5 (struct super_block*,struct object_info*) ;
 struct adfs_discrecord* FUNC_6 (struct adfs_sb_info*) ;
 int FUNC_7 (struct super_block*,int ,char*,...) ;
 struct adfs_sb_info* FUNC_8 (struct super_block*,struct adfs_discrecord*) ;
 int VAR_24 ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct adfs_sb_info*) ;
 struct adfs_sb_info* FUNC_12 (int,int ) ;
 void* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct super_block*,struct adfs_sb_info*,void*) ;
 struct buffer_head* FUNC_15 (struct super_block*,int) ;
 scalar_t__ FUNC_16 (struct super_block*,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct super_block *VAR_25, void *VAR_26, int VAR_27)
{
 struct adfs_discrecord *VAR_28;
 struct buffer_head *VAR_29;
 struct object_info VAR_30;
 unsigned char *VAR_31;
 unsigned int VAR_32;
 struct adfs_sb_info *VAR_33;
 struct inode *VAR_34;
 int VAR_35 = -VAR_14;

 VAR_25->s_flags |= VAR_11;

 VAR_33 = FUNC_12(sizeof(*VAR_33), VAR_17);
 if (!VAR_33)
  return -VAR_16;
 VAR_25->s_fs_info = VAR_33;


 VAR_33->s_uid = VAR_19;
 VAR_33->s_gid = VAR_18;
 VAR_33->s_owner_mask = VAR_1;
 VAR_33->s_other_mask = VAR_0;
 VAR_33->s_ftsuffix = 0;

 if (FUNC_14(VAR_25, VAR_33, VAR_26))
  goto error;

 FUNC_16(VAR_25, VAR_13);
 if (!(VAR_29 = FUNC_15(VAR_25, VAR_2 / VAR_13))) {
  FUNC_7(VAR_25, VAR_20, "error: unable to read superblock");
  VAR_35 = -VAR_15;
  goto error;
 }

 VAR_31 = VAR_29->b_data + (VAR_2 % VAR_13);

 if (FUNC_2(VAR_31)) {
  VAR_35 = -VAR_14;
  goto error_badfs;
 }

 VAR_28 = (struct adfs_discrecord *)(VAR_31 + VAR_3);




 if (FUNC_3(VAR_28)) {
  VAR_35 = -VAR_14;
  goto error_badfs;
 }

 VAR_32 = 1 << VAR_28->log2secsize;
 FUNC_9(VAR_29);

 if (FUNC_16(VAR_25, VAR_32)) {
  VAR_29 = FUNC_15(VAR_25, VAR_2 / VAR_25->s_blocksize);
  if (!VAR_29) {
   FUNC_7(VAR_25, VAR_20,
     "error: couldn't read superblock on 2nd try.");
   VAR_35 = -VAR_15;
   goto error;
  }
  VAR_31 = VAR_29->b_data + (VAR_2 % VAR_25->s_blocksize);
  if (FUNC_2(VAR_31)) {
   FUNC_7(VAR_25, VAR_20,
     "error: disc record mismatch, very weird!");
   VAR_35 = -VAR_14;
   goto error_free_bh;
  }
  VAR_28 = (struct adfs_discrecord *)(VAR_31 + VAR_3);
 } else {
  if (!VAR_27)
   FUNC_7(VAR_25, VAR_20,
     "error: unsupported blocksize");
  VAR_35 = -VAR_14;
  goto error;
 }





 VAR_25->s_magic = VAR_12;
 VAR_33->s_idlen = VAR_28->idlen;
 VAR_33->s_map_size = VAR_28->nzones | (VAR_28->nzones_high << 8);
 VAR_33->s_map2blk = VAR_28->log2bpmb - VAR_28->log2secsize;
 VAR_33->s_log2sharesize = VAR_28->log2sharesize;

 VAR_33->s_map = FUNC_8(VAR_25, VAR_28);
 if (FUNC_0(VAR_33->s_map)) {
  VAR_35 = FUNC_1(VAR_33->s_map);
  goto error_free_bh;
 }

 FUNC_9(VAR_29);




 VAR_25->s_op = &VAR_24;

 VAR_28 = FUNC_6(VAR_33->s_map);

 VAR_30.parent_id = VAR_30.indaddr = FUNC_13(VAR_28->root);
 VAR_30.name_len = 0;

 VAR_30.loadaddr = 0xfff0003f;
 VAR_30.execaddr = 0xec22c000;
 VAR_30.size = VAR_10;
 VAR_30.attr = VAR_6 | VAR_7 |
        VAR_8 | VAR_9;





 if (VAR_28->format_version) {
  VAR_30.size = FUNC_13(VAR_28->root_size);
  VAR_33->s_dir = &VAR_23;
  VAR_33->s_namelen = VAR_4;
 } else {
  VAR_33->s_dir = &VAR_22;
  VAR_33->s_namelen = VAR_5;
 }




 if (VAR_33->s_ftsuffix)
  VAR_33->s_namelen += 4;

 VAR_25->s_d_op = &VAR_21;
 VAR_34 = FUNC_5(VAR_25, &VAR_30);
 VAR_25->s_root = FUNC_10(VAR_34);
 if (!VAR_25->s_root) {
  int VAR_36;
  for (VAR_36 = 0; VAR_36 < VAR_33->s_map_size; VAR_36++)
   FUNC_9(VAR_33->s_map[VAR_36].dm_bh);
  FUNC_11(VAR_33->s_map);
  FUNC_4(VAR_25, "get root inode failed\n");
  VAR_35 = -VAR_15;
  goto error;
 }
 return 0;

error_badfs:
 if (!VAR_27)
  FUNC_7(VAR_25, VAR_20,
    "error: can't find an ADFS filesystem on dev %s.",
    VAR_25->s_id);
error_free_bh:
 FUNC_9(VAR_29);
error:
 VAR_25->s_fs_info = ((void*)0);
 FUNC_11(VAR_33);
 return VAR_35;
}
