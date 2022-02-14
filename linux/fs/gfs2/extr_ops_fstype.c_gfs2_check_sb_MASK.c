
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sb_host {scalar_t__ sb_magic; scalar_t__ sb_type; scalar_t__ sb_fs_format; scalar_t__ sb_multihost_format; } ;
struct gfs2_sbd {struct gfs2_sb_host sd_sb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gfs2_sbd*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct gfs2_sbd *VAR_5, int VAR_6)
{
 struct gfs2_sb_host *VAR_7 = &VAR_5->sd_sb;

 if (VAR_7->sb_magic != VAR_3 ||
     VAR_7->sb_type != VAR_4) {
  if (!VAR_6)
   FUNC_1("not a GFS2 filesystem\n");
  return -VAR_0;
 }



 if (VAR_7->sb_fs_format == VAR_1 &&
     VAR_7->sb_multihost_format == VAR_2)
  return 0;

 FUNC_0(VAR_5, "Unknown on-disk format, unable to mount\n");

 return -VAR_0;
}
