
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_rssd_lcq {int pool_count; struct dasd_ext_pool_sum* ext_pool_sum; } ;
struct dasd_ext_pool_sum {int pool_id; } ;
struct dasd_eckd_private {int eps; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int *,struct dasd_ext_pool_sum*,int) ;

__attribute__((used)) static void FUNC_2(struct dasd_device *VAR_0,
     struct dasd_rssd_lcq *VAR_1)
{
 struct dasd_eckd_private *VAR_2 = VAR_0->private;
 int VAR_3 = FUNC_0(VAR_0);
 struct dasd_ext_pool_sum VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->pool_count; VAR_5++) {
  VAR_4 = VAR_1->ext_pool_sum[VAR_5];
  if (VAR_4.pool_id == VAR_3) {
   FUNC_1(&VAR_2->eps, &VAR_4,
          sizeof(struct dasd_ext_pool_sum));
  }
 }
}
