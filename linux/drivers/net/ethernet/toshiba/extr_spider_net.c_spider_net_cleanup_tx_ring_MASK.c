
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct spider_net_card {TYPE_1__* netdev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct spider_net_card* VAR_1 ;
 struct spider_net_card* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct spider_net_card*) ;
 scalar_t__ FUNC_3 (struct spider_net_card*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct timer_list *VAR_3)
{
 struct spider_net_card *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 if ((FUNC_3(VAR_4, 0) != 0) &&
     (VAR_4->netdev->flags & VAR_0)) {
  FUNC_2(VAR_4);
  FUNC_1(VAR_4->netdev);
 }
}
