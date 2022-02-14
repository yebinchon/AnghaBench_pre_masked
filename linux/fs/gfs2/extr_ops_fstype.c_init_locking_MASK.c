
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_holder {int dummy; } ;
struct gfs2_sbd {struct gfs2_holder sd_live_gh; int sd_rename_gl; int sd_freeze_gl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct gfs2_sbd*,char*,int) ;
 int VAR_10 ;
 int FUNC_1 (struct gfs2_holder*) ;
 int FUNC_2 (struct gfs2_sbd*,int ,int *,int ,int *) ;
 int FUNC_3 (struct gfs2_sbd*,int ,int *,int ,int,struct gfs2_holder*) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct gfs2_sbd *VAR_12, struct gfs2_holder *VAR_13,
   int VAR_14)
{
 int VAR_15 = 0;

 if (VAR_14)
  goto fail_trans;

 VAR_15 = FUNC_3(VAR_12,
      VAR_3, &VAR_11,
      VAR_8, VAR_7 | VAR_6,
      VAR_13);
 if (VAR_15) {
  FUNC_0(VAR_12, "can't acquire mount glock: %d\n", VAR_15);
  goto fail;
 }

 VAR_15 = FUNC_3(VAR_12,
      VAR_2, &VAR_11,
      VAR_9,
      VAR_7 | VAR_5,
      &VAR_12->sd_live_gh);
 if (VAR_15) {
  FUNC_0(VAR_12, "can't acquire live glock: %d\n", VAR_15);
  goto fail_mount;
 }

 VAR_15 = FUNC_2(VAR_12, VAR_4, &VAR_11,
          VAR_0, &VAR_12->sd_rename_gl);
 if (VAR_15) {
  FUNC_0(VAR_12, "can't create rename glock: %d\n", VAR_15);
  goto fail_live;
 }

 VAR_15 = FUNC_2(VAR_12, VAR_1, &VAR_10,
          VAR_0, &VAR_12->sd_freeze_gl);
 if (VAR_15) {
  FUNC_0(VAR_12, "can't create transaction glock: %d\n", VAR_15);
  goto fail_rename;
 }

 return 0;

fail_trans:
 FUNC_4(VAR_12->sd_freeze_gl);
fail_rename:
 FUNC_4(VAR_12->sd_rename_gl);
fail_live:
 FUNC_1(&VAR_12->sd_live_gh);
fail_mount:
 FUNC_1(VAR_13);
fail:
 return VAR_15;
}
