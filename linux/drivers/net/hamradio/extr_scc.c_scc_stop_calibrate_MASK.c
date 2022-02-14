
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct scc_channel {int lock; int dev; int ctrl; int tx_wdog; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct scc_channel* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int ) ;
 struct scc_channel* VAR_5 ;
 int FUNC_4 (struct scc_channel*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_7 (struct scc_channel*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_7)
{
 struct scc_channel *VAR_8 = FUNC_2(VAR_8, VAR_7, VAR_6);
 unsigned long VAR_9;

 FUNC_5(&VAR_8->lock, VAR_9);
 FUNC_1(&VAR_8->tx_wdog);
 FUNC_4(VAR_8, VAR_4);
 FUNC_7(VAR_8, VAR_1, 0);
 FUNC_7(VAR_8, VAR_2, VAR_0);
 FUNC_0(VAR_8->ctrl,VAR_3);
 FUNC_0(VAR_8->ctrl,VAR_3);

 FUNC_3(VAR_8->dev);
 FUNC_6(&VAR_8->lock, VAR_9);
}
