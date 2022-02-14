
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int s_root; void* s_time_max; void* s_time_min; int * s_d_op; int * s_op; int s_magic; int s_flags; struct hpfs_sb_info* s_fs_info; } ;
struct quad_buffer_head {int dummy; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct inode {int i_size; int i_blocks; int i_ino; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; } ;
struct hpfs_super_block {int funcversion; int bitmaps; int dir_band_bitmap; int n_dir_band; int dir_band_start; int dir_band_end; int n_sectors; int root; scalar_t__ version; int magic; } ;
struct hpfs_spare_block {int dirty; int code_page_dir; int n_code_pages; int n_dnode_spares_free; int n_dnode_spares; scalar_t__ old_wrote; scalar_t__ n_spares_used; int magic; } ;
struct hpfs_sb_info {int sb_fs_size; int sb_root; int sb_bitmaps; int sb_dirband_start; int sb_dirband_size; int sb_dmap; int sb_mode; int sb_n_free; int sb_n_free_dnodes; int sb_lowercase; int sb_eas; int sb_chk; int sb_chkdsk; int sb_err; int sb_timeshift; int sb_c_bitmap; int sb_max_fwd_alloc; int * sb_cp_table; int sb_bmp_dir; scalar_t__ sb_was_error; int sb_gid; int sb_uid; int hpfs_mutex; } ;
struct hpfs_dirent {int ea_size; int creation_date; int write_date; int read_date; } ;
struct hpfs_boot_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;
typedef scalar_t__ dnode_secno ;
struct TYPE_8__ {int i_ea_size; int i_parent_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct hpfs_sb_info*) ;
 int FUNC_6 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_7 (struct super_block*,int,int,char*) ;
 int VAR_8 ;
 int FUNC_8 (struct super_block*,char*,...) ;
 scalar_t__ FUNC_9 (struct super_block*,int) ;
 int FUNC_10 () ;
 TYPE_4__* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct super_block*,int) ;
 int * FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (struct super_block*,struct hpfs_spare_block*) ;
 int FUNC_16 (struct super_block*) ;
 void* FUNC_17 (struct super_block*,int,struct buffer_head**,int) ;
 int FUNC_18 (struct inode*) ;
 int VAR_9 ;
 int FUNC_19 (struct super_block*) ;
 struct inode* FUNC_20 (struct super_block*,int) ;
 struct hpfs_sb_info* FUNC_21 (int,int ) ;
 int FUNC_22 (int ) ;
 void* FUNC_23 (struct super_block*,int) ;
 struct hpfs_dirent* FUNC_24 (struct inode*,scalar_t__,char*,int,int *,struct quad_buffer_head*) ;
 int FUNC_25 (struct buffer_head*) ;
 int FUNC_26 (struct super_block*,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (void*,int *,int *,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_29 (char*,...) ;
 int FUNC_30 (struct super_block*) ;
 int FUNC_31 (struct super_block*,int) ;
 int FUNC_32 (struct inode*) ;

__attribute__((used)) static int FUNC_33(struct super_block *VAR_10, void *VAR_11, int VAR_12)
{
 struct buffer_head *VAR_13, *VAR_14, *VAR_15;
 struct hpfs_boot_block *VAR_16;
 struct hpfs_super_block *VAR_17;
 struct hpfs_spare_block *VAR_18;
 struct hpfs_sb_info *VAR_19;
 struct inode *VAR_20;

 kuid_t VAR_21;
 kgid_t VAR_22;
 umode_t VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;

 dnode_secno VAR_30;
 struct hpfs_dirent *VAR_31 = ((void*)0);
 struct quad_buffer_head VAR_32;

 int VAR_33;

 VAR_19 = FUNC_21(sizeof(*VAR_19), VAR_2);
 if (!VAR_19) {
  return -VAR_1;
 }
 VAR_10->s_fs_info = VAR_19;

 FUNC_27(&VAR_19->hpfs_mutex);
 FUNC_16(VAR_10);

 VAR_21 = FUNC_2();
 VAR_22 = FUNC_1();
 VAR_23 = FUNC_3();
 VAR_24 = 0;
 VAR_25 = 2;
 VAR_26 = 1;
 VAR_27 = 1;
 VAR_28 = 1;
 VAR_29 = 0;

 if (!(VAR_33 = FUNC_28(VAR_11, &VAR_21, &VAR_22, &VAR_23, &VAR_24,
     &VAR_25, &VAR_26, &VAR_27, &VAR_28, &VAR_29))) {
  FUNC_29("bad mount options.\n");
  goto bail0;
 }
 if (VAR_33==2) {
  FUNC_10();
  goto bail0;
 }


 FUNC_31(VAR_10, 512);
 VAR_19->sb_fs_size = -1;
 if (!(VAR_16 = FUNC_17(VAR_10, 0, &VAR_13, 0))) goto bail1;
 if (!(VAR_17 = FUNC_17(VAR_10, 16, &VAR_14, 1))) goto bail2;
 if (!(VAR_18 = FUNC_17(VAR_10, 17, &VAR_15, 0))) goto bail3;


 if ( FUNC_22(VAR_17->magic) != VAR_4

     || FUNC_22(VAR_18->magic) != VAR_6) {
  if (!VAR_12)
   FUNC_29("Bad magic ... probably not HPFS\n");
  goto bail4;
 }


 if (!FUNC_30(VAR_10) && VAR_17->funcversion != 2 && VAR_17->funcversion != 3) {
  FUNC_29("Bad version %d,%d. Mount readonly to go around\n",
   (int)VAR_17->version, (int)VAR_17->funcversion);
  FUNC_29("please try recent version of HPFS driver at http://artax.karlin.mff.cuni.cz/~mikulas/vyplody/hpfs/index-e.cgi and if it still can't understand this format, contact author - mikulas@artax.karlin.mff.cuni.cz\n");
  goto bail4;
 }

 VAR_10->s_flags |= VAR_5;


 VAR_10->s_magic = VAR_3;
 VAR_10->s_op = &VAR_9;
 VAR_10->s_d_op = &VAR_8;
 VAR_10->s_time_min = FUNC_23(VAR_10, 0);
 VAR_10->s_time_max = FUNC_23(VAR_10, VAR_7);

 VAR_19->sb_root = FUNC_22(VAR_17->root);
 VAR_19->sb_fs_size = FUNC_22(VAR_17->n_sectors);
 VAR_19->sb_bitmaps = FUNC_22(VAR_17->bitmaps);
 VAR_19->sb_dirband_start = FUNC_22(VAR_17->dir_band_start);
 VAR_19->sb_dirband_size = FUNC_22(VAR_17->n_dir_band);
 VAR_19->sb_dmap = FUNC_22(VAR_17->dir_band_bitmap);
 VAR_19->sb_uid = VAR_21;
 VAR_19->sb_gid = VAR_22;
 VAR_19->sb_mode = 0777 & ~VAR_23;
 VAR_19->sb_n_free = -1;
 VAR_19->sb_n_free_dnodes = -1;
 VAR_19->sb_lowercase = VAR_24;
 VAR_19->sb_eas = VAR_25;
 VAR_19->sb_chk = VAR_26;
 VAR_19->sb_chkdsk = VAR_28;
 VAR_19->sb_err = VAR_27;
 VAR_19->sb_timeshift = VAR_29;
 VAR_19->sb_was_error = 0;
 VAR_19->sb_cp_table = ((void*)0);
 VAR_19->sb_c_bitmap = -1;
 VAR_19->sb_max_fwd_alloc = 0xffffff;

 if (VAR_19->sb_fs_size >= 0x80000000) {
  FUNC_8(VAR_10, "invalid size in superblock: %08x",
   (unsigned)VAR_19->sb_fs_size);
  goto bail4;
 }

 if (VAR_18->n_spares_used)
  FUNC_15(VAR_10, VAR_18);


 if (!(VAR_19->sb_bmp_dir = FUNC_13(VAR_10, FUNC_22(VAR_17->bitmaps))))
  goto bail4;


 if (VAR_18->dirty && !VAR_18->old_wrote) {
  if (VAR_27 == 2) {
   FUNC_29("Improperly stopped, not mounted\n");
   goto bail4;
  }
  FUNC_8(VAR_10, "improperly stopped");
 }

 if (!FUNC_30(VAR_10)) {
  VAR_18->dirty = 1;
  VAR_18->old_wrote = 0;
  FUNC_25(VAR_15);
 }

 if (FUNC_22(VAR_18->n_dnode_spares) != FUNC_22(VAR_18->n_dnode_spares_free)) {
  if (VAR_27 >= 2) {
   FUNC_29("Spare dnodes used, try chkdsk\n");
   FUNC_26(VAR_10, 0);
   goto bail4;
  }
  FUNC_8(VAR_10, "warning: spare dnodes used, try chkdsk");
  if (VAR_27 == 0)
   FUNC_29("Proceeding, but your filesystem could be corrupted if you delete files or directories\n");
 }
 if (VAR_26) {
  unsigned VAR_34;
  if (FUNC_22(VAR_17->dir_band_end) - FUNC_22(VAR_17->dir_band_start) + 1 != FUNC_22(VAR_17->n_dir_band) ||
      FUNC_22(VAR_17->dir_band_end) < FUNC_22(VAR_17->dir_band_start) || FUNC_22(VAR_17->n_dir_band) > 0x4000) {
   FUNC_8(VAR_10, "dir band size mismatch: dir_band_start==%08x, dir_band_end==%08x, n_dir_band==%08x",
    FUNC_22(VAR_17->dir_band_start), FUNC_22(VAR_17->dir_band_end), FUNC_22(VAR_17->n_dir_band));
   goto bail4;
  }
  VAR_34 = VAR_19->sb_dirband_size;
  VAR_19->sb_dirband_size = 0;
  if (FUNC_7(VAR_10, FUNC_22(VAR_17->dir_band_start), FUNC_22(VAR_17->n_dir_band), "dir_band") ||
      FUNC_7(VAR_10, FUNC_22(VAR_17->dir_band_bitmap), 4, "dir_band_bitmap") ||
      FUNC_7(VAR_10, FUNC_22(VAR_17->bitmaps), 4, "bitmaps")) {
   FUNC_26(VAR_10, 0);
   goto bail4;
  }
  VAR_19->sb_dirband_size = VAR_34;
 } else
  FUNC_29("You really don't want any checks? You are crazy...\n");


 if (FUNC_22(VAR_18->n_code_pages))
  if (!(VAR_19->sb_cp_table = FUNC_14(VAR_10, FUNC_22(VAR_18->code_page_dir))))
   FUNC_29("code page support is disabled\n");

 FUNC_0(VAR_15);
 FUNC_0(VAR_14);
 FUNC_0(VAR_13);

 VAR_20 = FUNC_20(VAR_10, VAR_19->sb_root);
 if (!VAR_20)
  goto bail0;
 FUNC_12(VAR_20);
 FUNC_18(VAR_20);
 FUNC_32(VAR_20);
 VAR_10->s_root = FUNC_4(VAR_20);
 if (!VAR_10->s_root)
  goto bail0;





 VAR_30 = FUNC_9(VAR_10, VAR_19->sb_root);
 if (VAR_30)
  VAR_31 = FUNC_24(VAR_20, VAR_30, "\001\001", 2, ((void*)0), &VAR_32);
 if (!VAR_31)
  FUNC_8(VAR_10, "unable to find root dir");
 else {
  VAR_20->i_atime.tv_sec = FUNC_23(VAR_10, FUNC_22(VAR_31->read_date));
  VAR_20->i_atime.tv_nsec = 0;
  VAR_20->i_mtime.tv_sec = FUNC_23(VAR_10, FUNC_22(VAR_31->write_date));
  VAR_20->i_mtime.tv_nsec = 0;
  VAR_20->i_ctime.tv_sec = FUNC_23(VAR_10, FUNC_22(VAR_31->creation_date));
  VAR_20->i_ctime.tv_nsec = 0;
  FUNC_11(VAR_20)->i_ea_size = FUNC_22(VAR_31->ea_size);
  FUNC_11(VAR_20)->i_parent_dir = VAR_20->i_ino;
  if (VAR_20->i_size == -1)
   VAR_20->i_size = 2048;
  if (VAR_20->i_blocks == -1)
   VAR_20->i_blocks = 5;
  FUNC_6(&VAR_32);
 }
 FUNC_19(VAR_10);
 return 0;

bail4: FUNC_0(VAR_15);
bail3: FUNC_0(VAR_14);
bail2: FUNC_0(VAR_13);
bail1:
bail0:
 FUNC_19(VAR_10);
 FUNC_5(VAR_19);
 return -VAR_0;
}
