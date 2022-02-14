
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct rsi_common {TYPE_2__* tx_qinfo; TYPE_1__* edca_params; } ;
struct TYPE_4__ {scalar_t__ pkt_contended; scalar_t__ wme_params; scalar_t__ weight; } ;
struct TYPE_3__ {int cw_min; int aifs; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct rsi_common *VAR_3)
{
 u8 VAR_4 = 0;

 for (; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->tx_qinfo[VAR_4].wme_params =
   (((VAR_3->edca_params[VAR_4].cw_min / 2) +
     (VAR_3->edca_params[VAR_4].aifs)) *
     VAR_2 + VAR_1);
  VAR_3->tx_qinfo[VAR_4].weight = VAR_3->tx_qinfo[VAR_4].wme_params;
  VAR_3->tx_qinfo[VAR_4].pkt_contended = 0;
 }
}
