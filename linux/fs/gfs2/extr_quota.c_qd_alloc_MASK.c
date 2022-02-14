
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kqid {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {int count; int lock; } ;
struct gfs2_quota_data {int qd_slot; unsigned int qd_hash; int qd_gl; int qd_lru; struct kqid qd_id; TYPE_1__ qd_lockref; struct gfs2_sbd* qd_sbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_sbd*,int ,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct gfs2_quota_data*) ;
 struct gfs2_quota_data* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct gfs2_quota_data*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct gfs2_quota_data *FUNC_6(unsigned VAR_4, struct gfs2_sbd *VAR_5, struct kqid VAR_6)
{
 struct gfs2_quota_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->qd_sbd = VAR_5;
 VAR_7->qd_lockref.count = 1;
 FUNC_5(&VAR_7->qd_lockref.lock);
 VAR_7->qd_id = VAR_6;
 VAR_7->qd_slot = -1;
 FUNC_0(&VAR_7->qd_lru);
 VAR_7->qd_hash = VAR_4;

 VAR_8 = FUNC_1(VAR_5, FUNC_4(VAR_7),
         &VAR_2, VAR_0, &VAR_7->qd_gl);
 if (VAR_8)
  goto fail;

 return VAR_7;

fail:
 FUNC_2(VAR_3, VAR_7);
 return ((void*)0);
}
