
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {scalar_t__ wq; TYPE_1__ wk; } ;
struct lio {TYPE_2__ link_status_wq; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct lio *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->link_status_wq.wq) {
  FUNC_1(&VAR_1->link_status_wq.wk.work);
  FUNC_2(VAR_1->link_status_wq.wq);
 }
}
