
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ tx_state; } ;
struct TYPE_3__ {int mintime; } ;
struct scc_channel {int dev; TYPE_2__ stat; TYPE_1__ kiss; int lock; int tx_wdog; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct scc_channel* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ) ;
 struct scc_channel* VAR_4 ;
 int FUNC_3 (struct scc_channel*,int ) ;
 int FUNC_4 (struct scc_channel*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 struct scc_channel *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_6);
 unsigned long VAR_9;

 FUNC_5(&VAR_8->lock, VAR_9);
  FUNC_0(&VAR_8->tx_wdog);
  FUNC_3(VAR_8, VAR_3);
 FUNC_6(&VAR_8->lock, VAR_9);

  if (VAR_8->stat.tx_state == VAR_1)
  {
   VAR_8->stat.tx_state = VAR_2;
  FUNC_4(VAR_8, VAR_5, VAR_8->kiss.mintime*100);
   return;
  }

  VAR_8->stat.tx_state = VAR_0;
 FUNC_2(VAR_8->dev);
}
