
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ direction; } ;
struct most_channel {int mbo_nq_level; TYPE_1__ cfg; } ;
struct mbo {struct most_channel* context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mbo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mbo*) ;

void FUNC_3(struct mbo *VAR_1)
{
 struct most_channel *VAR_2 = VAR_1->context;

 if (VAR_2->cfg.direction == VAR_0) {
  FUNC_0(VAR_1);
  return;
 }
 FUNC_2(VAR_1);
 FUNC_1(&VAR_2->mbo_nq_level);
}
