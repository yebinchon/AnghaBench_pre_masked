
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct dev_info {int mib_timer_info; scalar_t__ pme_wait; int hw; int mib_read; } ;
struct TYPE_2__ {int timer; } ;


 int VAR_0 ;
 struct dev_info* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dev_info* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct dev_info *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3.timer);

 FUNC_4(&VAR_5->mib_read);


 if (VAR_5->pme_wait) {
  if (FUNC_5(VAR_5->pme_wait)) {
   FUNC_2(&VAR_5->hw);
   VAR_5->pme_wait = 0;
  }
 } else if (FUNC_1(&VAR_5->hw)) {


  VAR_5->pme_wait = VAR_2 + VAR_0 * 2;
 }

 FUNC_3(&VAR_5->mib_timer_info);
}
