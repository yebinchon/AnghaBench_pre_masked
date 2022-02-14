
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct wmm_qinfo {int weight; scalar_t__ pkt_contended; } ;
struct rsi_common {int min_weight; int * tx_queue; struct wmm_qinfo* tx_qinfo; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static u8 FUNC_1(struct rsi_common *VAR_1)
{
 struct wmm_qinfo *VAR_2 = VAR_1->tx_qinfo;
 u32 VAR_3 = 0;
 u8 VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_0(&VAR_1->tx_queue[VAR_4]);
  if ((VAR_2[VAR_4].pkt_contended) && VAR_3) {
   VAR_1->min_weight = VAR_2[VAR_4].weight;
   break;
  }
 }
 return VAR_4;
}
