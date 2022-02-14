
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct gfs2_sbd {int sd_flags; int sd_freeze_mutex; int sd_freeze_gh; int sd_freeze_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_3->s_fs_info;

 FUNC_3(&VAR_4->sd_freeze_mutex);
        if (FUNC_0(&VAR_4->sd_freeze_state) != VAR_1 ||
     !FUNC_2(&VAR_4->sd_freeze_gh)) {
  FUNC_4(&VAR_4->sd_freeze_mutex);
                return 0;
 }

 FUNC_1(&VAR_4->sd_freeze_gh);
 FUNC_4(&VAR_4->sd_freeze_mutex);
 return FUNC_5(&VAR_4->sd_flags, VAR_0, VAR_2);
}
