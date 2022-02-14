
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwifiex_private {int scan_request; struct mwifiex_adapter* adapter; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct mwifiex_adapter {TYPE_2__* curr_cmd; TYPE_1__ cmd_wait_q; scalar_t__ survey_idx; } ;
struct TYPE_4__ {scalar_t__ wait_q_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,TYPE_2__*) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_private *VAR_1)
{
 struct mwifiex_adapter *VAR_2 = VAR_1->adapter;

 VAR_2->survey_idx = 0;
 if (VAR_2->curr_cmd->wait_q_enabled) {
  VAR_2->cmd_wait_q.status = 0;
  if (!VAR_1->scan_request) {
   FUNC_1(VAR_2, VAR_0,
        "complete internal scan\n");
   FUNC_0(VAR_2, VAR_2->curr_cmd);
  }
 }
}
