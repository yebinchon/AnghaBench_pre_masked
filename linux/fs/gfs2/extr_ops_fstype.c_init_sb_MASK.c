
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_root; int s_bdev; } ;
struct TYPE_8__ {scalar_t__ ar_meta; } ;
struct TYPE_6__ {int no_addr; } ;
struct TYPE_5__ {int no_addr; } ;
struct TYPE_7__ {scalar_t__ sb_bsize; TYPE_2__ sb_master_dir; TYPE_1__ sb_root_dir; } ;
struct gfs2_sbd {int sd_root_dir; int sd_master_dir; TYPE_4__ sd_args; TYPE_3__ sd_sb; struct super_block* sd_vfs; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_sbd*,char*,scalar_t__,...) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_sbd*,int ,int *,int ,int ,struct gfs2_holder*) ;
 int FUNC_6 (struct super_block*,int *,int ,char*) ;
 int VAR_4 ;
 int FUNC_7 (struct gfs2_sbd*,int) ;
 int FUNC_8 (struct super_block*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct gfs2_sbd *VAR_5, int VAR_6)
{
 struct super_block *VAR_7 = VAR_5->sd_vfs;
 struct gfs2_holder VAR_8;
 u64 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_5, VAR_1, &VAR_4,
    VAR_2, 0, &VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_5, "can't acquire superblock glock: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_5, VAR_6);
 if (VAR_10) {
  FUNC_3(VAR_5, "can't read superblock: %d\n", VAR_10);
  goto out;
 }


 if (VAR_5->sd_sb.sb_bsize < FUNC_0(VAR_7->s_bdev)) {
  VAR_10 = -VAR_0;
  FUNC_3(VAR_5, "FS block size (%u) is too small for device "
         "block size (%u)\n",
         VAR_5->sd_sb.sb_bsize, FUNC_0(VAR_7->s_bdev));
  goto out;
 }
 if (VAR_5->sd_sb.sb_bsize > VAR_3) {
  VAR_10 = -VAR_0;
  FUNC_3(VAR_5, "FS block size (%u) is too big for machine "
         "page size (%u)\n",
         VAR_5->sd_sb.sb_bsize, (unsigned int)VAR_3);
  goto out;
 }
 FUNC_8(VAR_7, VAR_5->sd_sb.sb_bsize);


 VAR_9 = VAR_5->sd_sb.sb_root_dir.no_addr;
 VAR_10 = FUNC_6(VAR_7, &VAR_5->sd_root_dir, VAR_9, "root");
 if (VAR_10)
  goto out;


 VAR_9 = VAR_5->sd_sb.sb_master_dir.no_addr;
 VAR_10 = FUNC_6(VAR_7, &VAR_5->sd_master_dir, VAR_9, "master");
 if (VAR_10) {
  FUNC_2(VAR_5->sd_root_dir);
  goto out;
 }
 VAR_7->s_root = FUNC_1(VAR_5->sd_args.ar_meta ? VAR_5->sd_master_dir : VAR_5->sd_root_dir);
out:
 FUNC_4(&VAR_8);
 return VAR_10;
}
