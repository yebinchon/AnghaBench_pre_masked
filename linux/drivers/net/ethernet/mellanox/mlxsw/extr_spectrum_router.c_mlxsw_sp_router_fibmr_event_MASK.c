
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int mfc; } ;
struct mlxsw_sp_fib_event_work {int event; TYPE_1__ ven_info; TYPE_1__ men_info; } ;
struct fib_notifier_info {int dummy; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,struct fib_notifier_info*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_fib_event_work *VAR_0,
       struct fib_notifier_info *VAR_1)
{
 switch (VAR_0->event) {
 case 130:
 case 132:
 case 131:
  FUNC_1(&VAR_0->men_info, VAR_1, sizeof(VAR_0->men_info));
  FUNC_2(VAR_0->men_info.mfc);
  break;
 case 129:
 case 128:
  FUNC_1(&VAR_0->ven_info, VAR_1, sizeof(VAR_0->ven_info));
  FUNC_0(VAR_0->ven_info.dev);
  break;
 }
}
