
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_4__ {int mtu; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__ link; } ;
struct lio {TYPE_3__ linfo; int netdev; } ;
struct cavium_wk {scalar_t__ ctxptr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_0)
{
 struct cavium_wk *VAR_1 = (struct cavium_wk *)VAR_0;
 struct lio *VAR_2 = (struct lio *)VAR_1->ctxptr;





 FUNC_1();
 FUNC_0(VAR_2->netdev, VAR_2->linfo.link.s.mtu);
 FUNC_2();
}
