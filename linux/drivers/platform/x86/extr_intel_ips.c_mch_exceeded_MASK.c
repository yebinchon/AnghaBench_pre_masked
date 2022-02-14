
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ips_driver {int mch_avg_temp; scalar_t__ mch_avg_power; scalar_t__ mch_power_limit; int turbo_status_lock; TYPE_1__* limits; } ;
struct TYPE_2__ {int mch_temp_limit; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct ips_driver *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2 = 0;

 FUNC_0(&VAR_0->turbo_status_lock, VAR_1);
 if (VAR_0->mch_avg_temp > (VAR_0->limits->mch_temp_limit * 100))
  VAR_2 = 1;
 if (VAR_0->mch_avg_power > VAR_0->mch_power_limit)
  VAR_2 = 1;
 FUNC_1(&VAR_0->turbo_status_lock, VAR_1);

 return VAR_2;
}
