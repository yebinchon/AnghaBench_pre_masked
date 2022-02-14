
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lm_lockstruct {int ls_sync_wait; int ls_dlm; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
struct dlm_lksb {int sb_status; int sb_lkid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,struct dlm_lksb*,int ,char*,int,int ,int ,struct lm_lockstruct*,int *) ;
 int FUNC_1 (struct gfs2_sbd*,char*,char*,int ,int ,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int,char*,int,unsigned int) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gfs2_sbd *VAR_4, int VAR_5, uint32_t VAR_6,
       unsigned int VAR_7, struct dlm_lksb *VAR_8, char *VAR_9)
{
 struct lm_lockstruct *VAR_10 = &VAR_4->sd_lockstruct;
 char VAR_11[VAR_1];
 int VAR_12, VAR_13;

 FUNC_2(VAR_11, 0, VAR_1);
 FUNC_3(VAR_11, VAR_1, "%8x%16x", VAR_2, VAR_7);

 VAR_12 = FUNC_0(VAR_10->ls_dlm, VAR_5, VAR_8, VAR_6,
    VAR_11, VAR_1 - 1,
    0, VAR_3, VAR_10, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_4, "%s lkid %x flags %x mode %d error %d\n",
         VAR_9, VAR_8->sb_lkid, VAR_6, VAR_5, VAR_12);
  return VAR_12;
 }

 FUNC_4(&VAR_10->ls_sync_wait);

 VAR_13 = VAR_8->sb_status;

 if (VAR_13 && VAR_13 != -VAR_0) {
  FUNC_1(VAR_4, "%s lkid %x flags %x mode %d status %d\n",
         VAR_9, VAR_8->sb_lkid, VAR_6, VAR_5, VAR_13);
 }

 return VAR_13;
}
