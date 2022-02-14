
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ fulldup; int persist; int txdelay; int slottime; scalar_t__ group; } ;
struct TYPE_3__ {scalar_t__ tx_state; } ;
struct scc_channel {int* wreg; TYPE_2__ kiss; scalar_t__ dcd; TYPE_1__ stat; int dev; int tx_queue; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct scc_channel* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_1 (struct scc_channel*) ;
 int FUNC_2 (int ) ;
 struct scc_channel* VAR_8 ;
 int FUNC_3 (struct scc_channel*,int ) ;
 int FUNC_4 (struct scc_channel*) ;
 int FUNC_5 (struct scc_channel*,void (*) (struct timer_list*),int ) ;
 scalar_t__ FUNC_6 (int *) ;
 void FUNC_7 (struct timer_list*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_10)
{
 struct scc_channel *VAR_11 = FUNC_0(VAR_11, VAR_10, VAR_9);

 if (VAR_11->stat.tx_state == VAR_6)
 {
  if (FUNC_6(&VAR_11->tx_queue)) {
   VAR_11->stat.tx_state = VAR_5;
   FUNC_2(VAR_11->dev);
   return;
  }

  VAR_11->stat.tx_state = VAR_4;
 }

 if (VAR_11->kiss.fulldup == VAR_0)
 {
  VAR_3 = VAR_3 * 17 + 31;

  if (VAR_11->dcd || (VAR_11->kiss.persist) < VAR_3 || (VAR_11->kiss.group && FUNC_1(VAR_11)) )
  {
   FUNC_4(VAR_11);
   FUNC_5(VAR_11, FUNC_8, VAR_11->kiss.slottime);
   return ;
  }
 }

 if ( !(VAR_11->wreg[VAR_1] & VAR_2) )
 {
  FUNC_3(VAR_11, VAR_7);
  FUNC_5(VAR_11, FUNC_7, VAR_11->kiss.txdelay);
 } else {
  FUNC_5(VAR_11, FUNC_7, 0);
 }
}
