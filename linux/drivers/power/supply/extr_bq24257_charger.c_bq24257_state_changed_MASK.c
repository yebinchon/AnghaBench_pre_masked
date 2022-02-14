
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bq24257_state {scalar_t__ status; scalar_t__ fault; scalar_t__ power_good; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ fault; scalar_t__ power_good; } ;
struct bq24257_device {int lock; TYPE_1__ state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct bq24257_device *VAR_0,
      struct bq24257_state *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->lock);
 VAR_2 = (VAR_0->state.status != VAR_1->status ||
        VAR_0->state.fault != VAR_1->fault ||
        VAR_0->state.power_good != VAR_1->power_good);
 FUNC_1(&VAR_0->lock);

 return VAR_2;
}
