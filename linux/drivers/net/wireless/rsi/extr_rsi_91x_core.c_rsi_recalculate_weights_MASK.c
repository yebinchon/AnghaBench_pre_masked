
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct wmm_qinfo {int pkt_contended; scalar_t__ weight; scalar_t__ wme_params; } ;
struct rsi_common {scalar_t__ min_weight; int * tx_queue; struct wmm_qinfo* tx_qinfo; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct rsi_common *VAR_1)
{
 struct wmm_qinfo *VAR_2 = VAR_1->tx_qinfo;
 bool VAR_3 = 0;
 u8 VAR_4 = 0;
 u32 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_0(&VAR_1->tx_queue[VAR_4]);

  if (VAR_5) {
   if (VAR_2[VAR_4].pkt_contended) {
    VAR_2[VAR_4].weight =
    ((VAR_2[VAR_4].weight > VAR_1->min_weight) ?
     VAR_2[VAR_4].weight - VAR_1->min_weight : 0);
   } else {
    VAR_2[VAR_4].pkt_contended = 1;
    VAR_2[VAR_4].weight = VAR_2[VAR_4].wme_params;
    VAR_3 = 1;
   }
  } else {
   VAR_2[VAR_4].weight = 0;
   VAR_2[VAR_4].pkt_contended = 0;
  }
 }

 return VAR_3;
}
