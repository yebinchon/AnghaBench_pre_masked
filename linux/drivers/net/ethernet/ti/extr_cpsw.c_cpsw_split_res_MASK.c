
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_vector {int budget; int ch; } ;
struct cpsw_common {int tx_ch_num; int speed; int rx_ch_num; TYPE_1__* rxv; struct cpsw_vector* txv; } ;
struct TYPE_2__ {int budget; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct cpsw_common *VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0;
 struct cpsw_vector *VAR_4 = VAR_1->txv;
 int VAR_5, VAR_6, VAR_7 = 0;
 int VAR_8, VAR_9 = 0;
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->tx_ch_num; VAR_5++) {
  VAR_10 = FUNC_0(VAR_4[VAR_5].ch);
  if (!VAR_10)
   continue;

  VAR_7++;
  VAR_2 += VAR_10;
 }

 if (VAR_1->tx_ch_num == VAR_7) {
  VAR_11 = VAR_2;
 } else if (!VAR_7) {
  VAR_12 = VAR_0 / VAR_1->tx_ch_num;
  VAR_3 = 0;
  VAR_11 = VAR_2;
 } else {
  VAR_11 = VAR_1->speed * 1000;




  if (VAR_11 < VAR_2)
   VAR_11 *= 10;

  if (VAR_11 < VAR_2)
   VAR_11 *= 10;

  VAR_12 = (VAR_2 * VAR_0) / VAR_11;
  VAR_12 = (VAR_0 - VAR_12) /
       (VAR_1->tx_ch_num - VAR_7);
  VAR_3 = (VAR_11 - VAR_2) /
         (VAR_1->tx_ch_num - VAR_7);
 }


 VAR_8 = VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_1->tx_ch_num; VAR_5++) {
  VAR_10 = FUNC_0(VAR_4[VAR_5].ch);
  if (VAR_10) {
   VAR_4[VAR_5].budget = (VAR_10 * VAR_0) / VAR_11;
   if (!VAR_4[VAR_5].budget)
    VAR_4[VAR_5].budget++;
   if (VAR_10 > VAR_3) {
    VAR_9 = VAR_5;
    VAR_3 = VAR_10;
   }

   VAR_6 = (VAR_10 * 100) / VAR_11;
   if (!VAR_6)
    VAR_6++;
   FUNC_1(VAR_1->txv[VAR_5].ch, VAR_6);
  } else {
   VAR_4[VAR_5].budget = VAR_12;
   if (!VAR_9)
    VAR_9 = VAR_5;
   FUNC_1(VAR_1->txv[VAR_5].ch, 0);
  }

  VAR_8 -= VAR_4[VAR_5].budget;
 }

 if (VAR_8)
  VAR_4[VAR_9].budget += VAR_8;


 VAR_8 = VAR_0;
 VAR_12 = VAR_8 / VAR_1->rx_ch_num;
 for (VAR_5 = 0; VAR_5 < VAR_1->rx_ch_num; VAR_5++) {
  VAR_1->rxv[VAR_5].budget = VAR_12;
  VAR_8 -= VAR_12;
 }

 if (VAR_8)
  VAR_1->rxv[0].budget += VAR_8;
}
