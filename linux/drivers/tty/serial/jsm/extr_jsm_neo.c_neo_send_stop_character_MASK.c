
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {scalar_t__ ch_stopc; int ch_bd; TYPE_1__* ch_neo_uart; int ch_xoff_sends; } ;
struct TYPE_2__ {int txrx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->ch_stopc != VAR_0) {
  VAR_1->ch_xoff_sends++;
  FUNC_1(VAR_1->ch_stopc, &VAR_1->ch_neo_uart->txrx);


  FUNC_0(VAR_1->ch_bd);
 }
}
