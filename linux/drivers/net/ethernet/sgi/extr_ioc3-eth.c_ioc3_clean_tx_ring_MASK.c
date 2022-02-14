
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ioc3_private {scalar_t__ tx_ci; scalar_t__ tx_pi; TYPE_1__* txr; struct sk_buff** tx_skbs; } ;
struct TYPE_2__ {scalar_t__ cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ioc3_private*,int) ;

__attribute__((used)) static inline void FUNC_2(struct ioc3_private *VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->tx_skbs[VAR_3];
  if (VAR_2) {
   FUNC_1(VAR_1, VAR_3);
   VAR_1->tx_skbs[VAR_3] = ((void*)0);
   FUNC_0(VAR_2);
  }
  VAR_1->txr[VAR_3].cmd = 0;
 }
 VAR_1->tx_pi = 0;
 VAR_1->tx_ci = 0;
}
