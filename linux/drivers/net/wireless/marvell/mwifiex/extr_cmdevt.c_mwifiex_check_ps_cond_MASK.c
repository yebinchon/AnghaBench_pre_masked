
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {scalar_t__ curr_cmd; int tx_hw_pending; scalar_t__ cmd_sent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,char*,char*,char*,char*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;

void
FUNC_4(struct mwifiex_adapter *VAR_1)
{
 if (!VAR_1->cmd_sent && !FUNC_1(&VAR_1->tx_hw_pending) &&
     !VAR_1->curr_cmd && !FUNC_0(VAR_1))
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1, VAR_0,
       "cmd: Delay Sleep Confirm (%s%s%s%s)\n",
       (VAR_1->cmd_sent) ? "D" : "",
       FUNC_1(&VAR_1->tx_hw_pending) ? "T" : "",
       (VAR_1->curr_cmd) ? "C" : "",
       (FUNC_0(VAR_1)) ? "R" : "");
}
