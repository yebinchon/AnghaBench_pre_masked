
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ count; } ;
struct gfs2_quota_data {TYPE_1__ qd_lockref; int qd_lru; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_quota_data *VAR_1)
{
 if (FUNC_1(&VAR_1->qd_lockref))
  return;

 VAR_1->qd_lockref.count = 0;
 FUNC_0(&VAR_0, &VAR_1->qd_lru);
 FUNC_2(&VAR_1->qd_lockref.lock);

}
