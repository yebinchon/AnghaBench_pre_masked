
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_quota_data {int qd_id; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct gfs2_quota_data *VAR_2 = *(const struct gfs2_quota_data **)VAR_0;
 const struct gfs2_quota_data *VAR_3 = *(const struct gfs2_quota_data **)VAR_1;

 if (FUNC_0(VAR_2->qd_id, VAR_3->qd_id))
  return -1;
 if (FUNC_0(VAR_3->qd_id, VAR_2->qd_id))
  return 1;
 return 0;
}
