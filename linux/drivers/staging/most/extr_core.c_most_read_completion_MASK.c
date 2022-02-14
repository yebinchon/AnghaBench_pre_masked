
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* comp; scalar_t__ refs; } ;
struct TYPE_6__ {TYPE_1__* comp; scalar_t__ refs; } ;
struct most_channel {int is_starving; TYPE_4__ pipe1; TYPE_2__ pipe0; int mbo_nq_level; scalar_t__ is_poisoned; } ;
struct mbo {scalar_t__ status; struct most_channel* context; } ;
struct TYPE_7__ {scalar_t__ (* rx_completion ) (struct mbo*) ;} ;
struct TYPE_5__ {scalar_t__ (* rx_completion ) (struct mbo*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (struct mbo*) ;
 int FUNC_3 (struct mbo*) ;
 scalar_t__ FUNC_4 (struct mbo*) ;
 scalar_t__ FUNC_5 (struct mbo*) ;
 int FUNC_6 (struct mbo*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct mbo *VAR_2)
{
 struct most_channel *VAR_3 = VAR_2->context;

 if (FUNC_7(VAR_3->is_poisoned || (VAR_2->status == VAR_0))) {
  FUNC_6(VAR_2);
  return;
 }

 if (VAR_2->status == VAR_1) {
  FUNC_3(VAR_2);
  FUNC_0(&VAR_3->mbo_nq_level);
  return;
 }

 if (FUNC_1(1, &VAR_3->mbo_nq_level))
  VAR_3->is_starving = 1;

 if (VAR_3->pipe0.refs && VAR_3->pipe0.comp->rx_completion &&
     VAR_3->pipe0.comp->rx_completion(VAR_2) == 0)
  return;

 if (VAR_3->pipe1.refs && VAR_3->pipe1.comp->rx_completion &&
     VAR_3->pipe1.comp->rx_completion(VAR_2) == 0)
  return;

 FUNC_2(VAR_2);
}
