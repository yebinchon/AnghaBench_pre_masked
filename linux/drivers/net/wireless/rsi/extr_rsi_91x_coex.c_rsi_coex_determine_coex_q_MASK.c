
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_coex_ctrl_block {int * coex_tx_qs; } ;
typedef enum rsi_coex_queues { ____Placeholder_rsi_coex_queues } rsi_coex_queues ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static enum rsi_coex_queues FUNC_1
   (struct rsi_coex_ctrl_block *VAR_4)
{
 enum rsi_coex_queues VAR_5 = VAR_2;

 if (FUNC_0(&VAR_4->coex_tx_qs[VAR_1]) > 0)
  VAR_5 = VAR_1;
 if (FUNC_0(&VAR_4->coex_tx_qs[VAR_0]) > 0)
  VAR_5 = VAR_0;
 if (FUNC_0(&VAR_4->coex_tx_qs[VAR_3]) > 0)
  VAR_5 = VAR_3;

 return VAR_5;
}
