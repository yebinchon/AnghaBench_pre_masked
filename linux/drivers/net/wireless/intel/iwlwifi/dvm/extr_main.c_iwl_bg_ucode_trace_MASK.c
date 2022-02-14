
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ ucode_trace; } ;
struct iwl_priv {int ucode_trace; TYPE_1__ event_log; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct iwl_priv*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct iwl_priv* VAR_3 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 struct iwl_priv *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);

 if (FUNC_4(VAR_0, &VAR_6->status))
  return;

 if (VAR_6->event_log.ucode_trace) {
  FUNC_1(VAR_6);

  FUNC_2(&VAR_6->ucode_trace,
    VAR_2 + FUNC_3(VAR_1));
 }
}
