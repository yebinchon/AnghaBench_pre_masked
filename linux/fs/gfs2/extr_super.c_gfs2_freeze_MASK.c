
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct gfs2_sbd {int sd_freeze_mutex; int sd_flags; int sd_freeze_gh; int sd_freeze_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_sbd*,char*,...) ;
 int FUNC_2 (struct gfs2_sbd*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_5)
{
 struct gfs2_sbd *VAR_6 = VAR_5->s_fs_info;
 int VAR_7 = 0;

 FUNC_4(&VAR_6->sd_freeze_mutex);
 if (FUNC_0(&VAR_6->sd_freeze_state) != VAR_4)
  goto out;

 if (FUNC_7(VAR_3, &VAR_6->sd_flags)) {
  VAR_7 = -VAR_1;
  goto out;
 }

 for (;;) {
  VAR_7 = FUNC_2(VAR_6, &VAR_6->sd_freeze_gh);
  if (!VAR_7)
   break;

  if (VAR_7 == -VAR_0)
   FUNC_1(VAR_6, "waiting for recovery before freeze\n");
  else
   FUNC_1(VAR_6, "error freezing FS: %d\n", VAR_7);

  FUNC_1(VAR_6, "retrying...\n");
  FUNC_3(1000);
 }
 FUNC_6(VAR_2, &VAR_6->sd_flags);
out:
 FUNC_5(&VAR_6->sd_freeze_mutex);
 return VAR_7;
}
