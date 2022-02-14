
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kqid {scalar_t__ type; } ;
struct gfs2_quota_data {struct kqid qd_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct kqid) ;
 int VAR_1 ;

__attribute__((used)) static u64 FUNC_1(struct gfs2_quota_data *VAR_2)
{
 struct kqid VAR_3 = VAR_2->qd_id;
 return (2 * (u64)FUNC_0(&VAR_1, VAR_3)) +
  ((VAR_3.type == VAR_0) ? 0 : 1);
}
