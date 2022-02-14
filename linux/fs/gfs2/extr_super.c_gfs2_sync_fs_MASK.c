
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct gfs2_sbd {int sd_log_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_sbd*,int *,int) ;
 int FUNC_1 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_2, int VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_2->s_fs_info;

 FUNC_1(VAR_2, -1);
 if (VAR_3)
  FUNC_0(VAR_4, ((void*)0), VAR_1 |
          VAR_0);
 return VAR_4->sd_log_error;
}
