
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int tailtime; } ;
struct TYPE_3__ {int tx_state; int txerrs; } ;
struct scc_channel {TYPE_2__ kiss; TYPE_1__ stat; int lock; int ctrl; int tx_t; int dev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct scc_channel*,int ,int ) ;
 int FUNC_2 (int *) ;
 struct scc_channel* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (int ) ;
 struct scc_channel* VAR_7 ;
 int FUNC_5 (struct scc_channel*) ;
 int FUNC_6 (struct scc_channel*,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_10)
{
 struct scc_channel *VAR_11 = FUNC_3(VAR_11, VAR_10, VAR_9);
 unsigned long VAR_12;

 FUNC_7(&VAR_11->lock, VAR_12);





 FUNC_4(VAR_11->dev);
 FUNC_5(VAR_11);

 FUNC_2(&VAR_11->tx_t);

 FUNC_1(VAR_11, VAR_1, VAR_5);
 FUNC_1(VAR_11, VAR_2, VAR_6);
 FUNC_0(VAR_11->ctrl, VAR_0, VAR_3);

 FUNC_8(&VAR_11->lock, VAR_12);

 VAR_11->stat.txerrs++;
 VAR_11->stat.tx_state = VAR_4;
 FUNC_6(VAR_11, VAR_8, VAR_11->kiss.tailtime);
}
