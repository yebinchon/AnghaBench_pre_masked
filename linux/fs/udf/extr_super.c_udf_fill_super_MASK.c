
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct udf_sb_info {int s_flags; int s_session; int s_last_block; size_t s_partition; int * s_lvid_bh; int s_vat_inode; int s_volume_ident; int s_record_time; TYPE_1__* s_partmaps; int s_partitions; scalar_t__ s_udfrev; int s_cred_lock; int * s_nls_map; void* s_dmode; void* s_fmode; scalar_t__ s_umask; int s_gid; int s_uid; int s_alloc_mutex; } ;
struct udf_options {int flags; int session; int blocksize; int * nls_map; void* dmode; void* fmode; scalar_t__ umask; int gid; int uid; } ;
struct timestamp {int typeAndTimezone; int minute; int hour; int day; int month; int year; } ;
struct super_block {int s_time_gran; struct udf_sb_info* s_fs_info; int s_max_links; int s_maxbytes; int s_root; int s_bdev; int s_magic; int * s_export_op; int * s_op; } ;
struct logicalVolIntegrityDescImpUse {int minUDFWriteRev; int minUDFReadRev; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int s_partition_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_5 ;
 int FUNC_1 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct super_block*,int ) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct udf_sb_info*) ;
 struct udf_sb_info* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct super_block*) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (struct super_block*,char*,...) ;
 int VAR_24 ;
 int FUNC_21 (struct super_block*,struct kernel_lb_addr*,struct kernel_lb_addr*) ;
 int FUNC_22 (struct super_block*) ;
 struct inode* FUNC_23 (struct super_block*,struct kernel_lb_addr*) ;
 int FUNC_24 (char*,int ,scalar_t__,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_25 (struct super_block*,struct udf_options*,int,struct kernel_lb_addr*) ;
 int FUNC_26 (struct super_block*) ;
 int FUNC_27 (char*,struct udf_options*,int) ;
 int FUNC_28 (struct super_block*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_29 (struct super_block*) ;
 int VAR_25 ;
 int FUNC_30 (struct timestamp*,int ) ;
 int FUNC_31 (struct super_block*,char*) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static int FUNC_33(struct super_block *VAR_26, void *VAR_27, int VAR_28)
{
 int VAR_29 = -VAR_2;
 struct inode *VAR_30 = ((void*)0);
 struct udf_options VAR_31;
 struct kernel_lb_addr VAR_32, VAR_33;
 struct udf_sb_info *VAR_34;
 bool VAR_35 = 0;

 VAR_31.flags = (1 << VAR_10) | (1 << VAR_9);

 VAR_31.uid = FUNC_13(FUNC_5(), VAR_23);
 VAR_31.gid = FUNC_12(FUNC_5(), VAR_22);
 VAR_31.umask = 0;
 VAR_31.fmode = VAR_14;
 VAR_31.dmode = VAR_14;
 VAR_31.nls_map = ((void*)0);

 VAR_34 = FUNC_9(sizeof(*VAR_34), VAR_4);
 if (!VAR_34)
  return -VAR_3;

 VAR_26->s_fs_info = VAR_34;

 FUNC_14(&VAR_34->s_alloc_mutex);

 if (!FUNC_27((char *)VAR_27, &VAR_31, 0))
  goto parse_options_failure;

 if (VAR_31.flags & (1 << VAR_13) &&
     VAR_31.flags & (1 << VAR_7)) {
  FUNC_20(VAR_26, "utf8 cannot be combined with iocharset\n");
  goto parse_options_failure;
 }
 if ((VAR_31.flags & (1 << VAR_7)) && !VAR_31.nls_map) {
  VAR_31.nls_map = FUNC_11();
  if (!VAR_31.nls_map)
   VAR_31.flags &= ~(1 << VAR_7);
  else
   FUNC_19("Using default NLS map\n");
 }
 if (!(VAR_31.flags & (1 << VAR_7)))
  VAR_31.flags |= (1 << VAR_13);

 VAR_33.logicalBlockNum = 0xFFFFFFFF;
 VAR_33.partitionReferenceNum = 0xFFFF;

 VAR_34->s_flags = VAR_31.flags;
 VAR_34->s_uid = VAR_31.uid;
 VAR_34->s_gid = VAR_31.gid;
 VAR_34->s_umask = VAR_31.umask;
 VAR_34->s_fmode = VAR_31.fmode;
 VAR_34->s_dmode = VAR_31.dmode;
 VAR_34->s_nls_map = VAR_31.nls_map;
 FUNC_16(&VAR_34->s_cred_lock);

 if (VAR_31.session == 0xFFFFFFFF)
  VAR_34->s_session = FUNC_22(VAR_26);
 else
  VAR_34->s_session = VAR_31.session;

 FUNC_19("Multi-session=%d\n", VAR_34->s_session);


 VAR_26->s_op = &VAR_25;
 VAR_26->s_export_op = &VAR_24;

 VAR_26->s_magic = VAR_19;
 VAR_26->s_time_gran = 1000;

 if (VAR_31.flags & (1 << VAR_6)) {
  VAR_29 = FUNC_25(VAR_26, &VAR_31, VAR_28, &VAR_33);
 } else {
  VAR_31.blocksize = FUNC_3(VAR_26->s_bdev);
  while (VAR_31.blocksize <= 4096) {
   VAR_29 = FUNC_25(VAR_26, &VAR_31, VAR_28, &VAR_33);
   if (VAR_29 < 0) {
    if (!VAR_28 && VAR_29 != -VAR_0) {
     FUNC_15("Scanning with blocksize %u failed\n",
        VAR_31.blocksize);
    }
    FUNC_4(VAR_34->s_lvid_bh);
    VAR_34->s_lvid_bh = ((void*)0);




    if (VAR_29 == -VAR_0)
     break;
   } else
    break;

   VAR_31.blocksize <<= 1;
  }
 }
 if (VAR_29 < 0) {
  if (VAR_29 == -VAR_1) {
   FUNC_31(VAR_26, "No partition found (1)\n");
   VAR_29 = -VAR_2;
  }
  goto error_out;
 }

 FUNC_19("Lastblock=%u\n", VAR_34->s_last_block);

 if (VAR_34->s_lvid_bh) {
  struct logicalVolIntegrityDescImpUse *VAR_36 =
       FUNC_29(VAR_26);
  uint16_t VAR_37;
  uint16_t VAR_38;

  if (!VAR_36) {
   VAR_29 = -VAR_2;
   goto error_out;
  }
  VAR_37 = FUNC_10(VAR_36->minUDFReadRev);
  VAR_38 = FUNC_10(VAR_36->minUDFWriteRev);
  if (VAR_37 > VAR_16) {
   FUNC_20(VAR_26, "minUDFReadRev=%x (max is %x)\n",
    VAR_37,
    VAR_16);
   VAR_29 = -VAR_2;
   goto error_out;
  } else if (VAR_38 > VAR_17) {
   if (!FUNC_17(VAR_26)) {
    VAR_29 = -VAR_0;
    goto error_out;
   }
   FUNC_2(VAR_26, VAR_8);
  }

  VAR_34->s_udfrev = VAR_38;

  if (VAR_37 >= VAR_20)
   FUNC_2(VAR_26, VAR_11);
  if (VAR_37 >= VAR_21)
   FUNC_2(VAR_26, VAR_12);
 }

 if (!VAR_34->s_partitions) {
  FUNC_31(VAR_26, "No partition found (2)\n");
  VAR_29 = -VAR_2;
  goto error_out;
 }

 if (VAR_34->s_partmaps[VAR_34->s_partition].s_partition_flags &
   VAR_18) {
  if (!FUNC_17(VAR_26)) {
   VAR_29 = -VAR_0;
   goto error_out;
  }
  FUNC_2(VAR_26, VAR_8);
 }

 VAR_29 = FUNC_21(VAR_26, &VAR_33, &VAR_32);
 if (VAR_29 < 0) {
  FUNC_31(VAR_26, "No fileset found\n");
  goto error_out;
 }

 if (!VAR_28) {
  struct timestamp VAR_39;
  FUNC_30(&VAR_39, VAR_34->s_record_time);
  FUNC_24("Mounting volume '%s', timestamp %04u/%02u/%02u %02u:%02u (%x)\n",
    VAR_34->s_volume_ident,
    FUNC_10(VAR_39.year), VAR_39.month, VAR_39.day,
    VAR_39.hour, VAR_39.minute, FUNC_10(VAR_39.typeAndTimezone));
 }
 if (!FUNC_17(VAR_26)) {
  FUNC_26(VAR_26);
  VAR_35 = 1;
 }




 VAR_30 = FUNC_23(VAR_26, &VAR_32);
 if (FUNC_0(VAR_30)) {
  FUNC_20(VAR_26, "Error in udf_iget, block=%u, partition=%u\n",
         VAR_32.logicalBlockNum, VAR_32.partitionReferenceNum);
  VAR_29 = FUNC_1(VAR_30);
  goto error_out;
 }


 VAR_26->s_root = FUNC_6(VAR_30);
 if (!VAR_26->s_root) {
  FUNC_20(VAR_26, "Couldn't allocate root dentry\n");
  VAR_29 = -VAR_3;
  goto error_out;
 }
 VAR_26->s_maxbytes = VAR_5;
 VAR_26->s_max_links = VAR_15;
 return 0;

error_out:
 FUNC_7(VAR_34->s_vat_inode);
parse_options_failure:
 if (VAR_31.nls_map)
  FUNC_32(VAR_31.nls_map);
 if (VAR_35)
  FUNC_18(VAR_26);
 FUNC_4(VAR_34->s_lvid_bh);
 FUNC_28(VAR_26);
 FUNC_8(VAR_34);
 VAR_26->s_fs_info = ((void*)0);

 return VAR_29;
}
