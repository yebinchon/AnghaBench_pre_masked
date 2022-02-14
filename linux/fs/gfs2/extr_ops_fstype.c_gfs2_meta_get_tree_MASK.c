
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_flags; struct gfs2_sbd* s_fs_info; } ;
struct path {TYPE_2__* dentry; } ;
struct gfs2_sbd {int sd_master_dir; } ;
struct fs_context {int sb_flags; int root; int sget_key; int * fs_type; int * source; } ;
struct TYPE_4__ {TYPE_1__* d_sb; } ;
struct TYPE_3__ {int s_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,struct path*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 struct super_block* FUNC_7 (struct fs_context*,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct fs_context *VAR_7)
{
 struct super_block *VAR_8;
 struct gfs2_sbd *VAR_9;
 struct path VAR_10;
 int VAR_11;

 if (!VAR_7->source || !*VAR_7->source)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_7->source, VAR_2, &VAR_10);
 if (VAR_11) {
  FUNC_6("path_lookup on %s returned error %d\n",
          VAR_7->source, VAR_11);
  return VAR_11;
 }
 VAR_7->fs_type = &VAR_4;
 VAR_7->sget_key = VAR_10.dentry->d_sb->s_bdev;
 VAR_8 = FUNC_7(VAR_7, VAR_6, VAR_5);
 FUNC_5(&VAR_10);
 if (FUNC_0(VAR_8)) {
  FUNC_6("gfs2 mount does not exist\n");
  return FUNC_1(VAR_8);
 }
 if ((VAR_7->sb_flags ^ VAR_8->s_flags) & VAR_3) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }
 VAR_9 = VAR_8->s_fs_info;
 VAR_7->root = FUNC_3(VAR_9->sd_master_dir);
 return 0;
}
