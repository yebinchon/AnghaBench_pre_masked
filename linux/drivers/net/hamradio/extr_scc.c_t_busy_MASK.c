
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int tx_state; int txerrs; } ;
struct scc_channel {int dev; TYPE_1__ stat; int tx_t; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct scc_channel* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct scc_channel* VAR_1 ;
 int FUNC_4 (struct scc_channel*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct scc_channel *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);

 FUNC_0(&VAR_4->tx_t);
 FUNC_2(VAR_4->dev);

 FUNC_4(VAR_4);
 VAR_4->stat.txerrs++;
 VAR_4->stat.tx_state = VAR_0;

 FUNC_3(VAR_4->dev);
}
