
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_sync_wait; int ls_dlm; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
struct dlm_lksb {int sb_status; int sb_lkid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct dlm_lksb*,struct lm_lockstruct*) ;
 int FUNC_1 (struct gfs2_sbd*,char*,char*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gfs2_sbd *VAR_1, struct dlm_lksb *VAR_2, char *VAR_3)
{
 struct lm_lockstruct *VAR_4 = &VAR_1->sd_lockstruct;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->ls_dlm, VAR_2->sb_lkid, 0, VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_1, "%s lkid %x error %d\n",
         VAR_3, VAR_2->sb_lkid, VAR_5);
  return VAR_5;
 }

 FUNC_2(&VAR_4->ls_sync_wait);

 if (VAR_2->sb_status != -VAR_0) {
  FUNC_1(VAR_1, "%s lkid %x status %d\n",
         VAR_3, VAR_2->sb_lkid, VAR_2->sb_status);
  return -1;
 }
 return 0;
}
