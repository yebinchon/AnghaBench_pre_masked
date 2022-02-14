
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int (* card_reset ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {TYPE_1__ if_ops; int hw_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mwifiex_adapter* VAR_2 ;
 struct mwifiex_adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct mwifiex_adapter *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 FUNC_2(VAR_5, VAR_0, "Firmware wakeup failed\n");
 VAR_5->hw_status = VAR_1;
 FUNC_1(VAR_5);

 if (VAR_5->if_ops.card_reset)
  VAR_5->if_ops.card_reset(VAR_5);
}
