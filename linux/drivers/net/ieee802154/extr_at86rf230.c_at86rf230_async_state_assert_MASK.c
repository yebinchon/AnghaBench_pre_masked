
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct at86rf230_state_change {scalar_t__* buf; scalar_t__ const to_state; int (* complete ) (void*) ;int from_state; struct at86rf230_local* lp; } ;
struct at86rf230_local {scalar_t__ tx_retry; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ const VAR_6 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,scalar_t__,int (*) (void*)) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,scalar_t__ const) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_7)
{
 struct at86rf230_state_change *VAR_8 = VAR_7;
 struct at86rf230_local *VAR_9 = VAR_8->lp;
 const u8 *VAR_10 = VAR_8->buf;
 const u8 VAR_11 = VAR_10[1] & VAR_6;


 if (VAR_11 != VAR_8->to_state) {



  if (VAR_11 == VAR_1) {






   if (VAR_8->to_state == VAR_3)
    goto done;
   if (VAR_8->to_state == VAR_5 ||
       VAR_8->to_state == VAR_4) {
    u8 VAR_12 = VAR_8->to_state;

    if (VAR_9->tx_retry >= VAR_0)
     VAR_12 = VAR_2;
    VAR_9->tx_retry++;

    FUNC_0(VAR_9, VAR_8, VAR_12,
            VAR_8->complete);
    return;
   }
  }

  FUNC_1(&VAR_9->spi->dev, "unexcept state change from 0x%02x to 0x%02x. Actual state: 0x%02x\n",
    VAR_8->from_state, VAR_8->to_state, VAR_11);
 }

done:
 if (VAR_8->complete)
  VAR_8->complete(VAR_7);
}
