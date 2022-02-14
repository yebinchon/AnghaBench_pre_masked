
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int tx_state; } ;
struct TYPE_3__ {int mintime; } ;
struct scc_channel {TYPE_2__ stat; TYPE_1__ kiss; int tx_wdog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct scc_channel* FUNC_1 (int ,struct timer_list*,int ) ;
 struct scc_channel* VAR_2 ;
 int FUNC_2 (struct scc_channel*,int ) ;
 int FUNC_3 (struct scc_channel*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{
 struct scc_channel *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);

 FUNC_0(&VAR_6->tx_wdog);

 FUNC_2(VAR_6, VAR_1);
 if(VAR_6->kiss.mintime)
  FUNC_3(VAR_6, VAR_3, VAR_6->kiss.mintime*100);
 VAR_6->stat.tx_state = VAR_0;
}
