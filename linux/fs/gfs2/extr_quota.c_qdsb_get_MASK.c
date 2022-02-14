
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqid {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int dummy; } ;


 int FUNC_0 (struct gfs2_quota_data*) ;
 int FUNC_1 (struct gfs2_sbd*,struct kqid,struct gfs2_quota_data**) ;
 int FUNC_2 (struct gfs2_quota_data*) ;
 int FUNC_3 (struct gfs2_quota_data*) ;
 int FUNC_4 (struct gfs2_quota_data*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_sbd *VAR_0, struct kqid VAR_1,
      struct gfs2_quota_data **VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(*VAR_2);
 if (VAR_3)
  goto fail;

 VAR_3 = FUNC_0(*VAR_2);
 if (VAR_3)
  goto fail_slot;

 return 0;

fail_slot:
 FUNC_4(*VAR_2);
fail:
 FUNC_2(*VAR_2);
 return VAR_3;
}
