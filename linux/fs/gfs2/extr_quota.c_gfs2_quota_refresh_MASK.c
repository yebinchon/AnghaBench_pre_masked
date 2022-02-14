
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqid {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int dummy; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_quota_data*,int ,struct gfs2_holder*) ;
 int FUNC_1 (struct gfs2_holder*) ;
 int FUNC_2 (struct gfs2_sbd*,struct kqid,struct gfs2_quota_data**) ;
 int FUNC_3 (struct gfs2_quota_data*) ;

int FUNC_4(struct gfs2_sbd *VAR_1, struct kqid VAR_2)
{
 struct gfs2_quota_data *VAR_3;
 struct gfs2_holder VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_4);
 if (!VAR_5)
  FUNC_1(&VAR_4);

 FUNC_3(VAR_3);
 return VAR_5;
}
