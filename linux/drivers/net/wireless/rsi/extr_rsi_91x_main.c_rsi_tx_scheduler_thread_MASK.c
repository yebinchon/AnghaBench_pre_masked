
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rsi_hw {int (* determine_event_timeout ) (struct rsi_hw*) ;} ;
struct TYPE_2__ {int completion; int event; int thread_done; } ;
struct rsi_common {TYPE_1__ tx_thread; scalar_t__ init_done; struct rsi_hw* priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct rsi_common*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct rsi_hw*) ;

__attribute__((used)) static void FUNC_6(struct rsi_common *VAR_1)
{
 struct rsi_hw *VAR_2 = VAR_1->priv;
 u32 VAR_3 = VAR_0;

 do {
  if (VAR_2->determine_event_timeout)
   VAR_3 = VAR_2->determine_event_timeout(VAR_2);
  FUNC_4(&VAR_1->tx_thread.event, VAR_3);
  FUNC_3(&VAR_1->tx_thread.event);

  if (VAR_1->init_done)
   FUNC_2(VAR_1);
 } while (FUNC_0(&VAR_1->tx_thread.thread_done) == 0);
 FUNC_1(&VAR_1->tx_thread.completion, 0);
}
