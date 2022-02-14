
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_policy {int defined; unsigned int retry_count; int * tbl; } ;
struct ieee80211_tx_rate {scalar_t__ idx; unsigned int count; int flags; } ;
struct cw1200_common {unsigned int short_frame_max_tx_count; } ;
struct TYPE_2__ {int hw_value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 (struct cw1200_common const*,struct ieee80211_tx_rate*) ;
 int FUNC_3 (struct tx_policy*,int ,int) ;
 int FUNC_4 (char*,size_t,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_5(const struct cw1200_common *VAR_1,
             struct tx_policy *VAR_2,
 struct ieee80211_tx_rate *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6;
 unsigned VAR_7 = VAR_1->short_frame_max_tx_count;
 unsigned VAR_8 = 0;
 FUNC_0(VAR_3[0].idx < 0);
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));


 for (VAR_5 = 1; VAR_5 < VAR_4; ++VAR_5) {
  if (VAR_3[VAR_5].idx < 0) {
   VAR_4 = VAR_5;
   break;
  }
  if (VAR_3[VAR_5].idx > VAR_3[VAR_5 - 1].idx) {
   struct ieee80211_tx_rate VAR_9 = VAR_3[VAR_5 - 1];
   VAR_3[VAR_5 - 1] = VAR_3[VAR_5];
   VAR_3[VAR_5] = VAR_9;
  }
 }


 VAR_8 = VAR_3[0].count;
 for (VAR_5 = 0, VAR_6 = 1; VAR_6 < VAR_4; ++VAR_6) {
  if (VAR_3[VAR_6].idx == VAR_3[VAR_5].idx) {
   VAR_3[VAR_5].count += VAR_3[VAR_6].count;
  } else if (VAR_3[VAR_6].idx > VAR_3[VAR_5].idx) {
   break;
  } else {
   ++VAR_5;
   if (VAR_5 != VAR_6)
    VAR_3[VAR_5] = VAR_3[VAR_6];
  }
  VAR_8 += VAR_3[VAR_6].count;
 }
 VAR_4 = VAR_5 + 1;




 if (VAR_7 < VAR_4)
  VAR_7 = VAR_4;
 if (VAR_8 > VAR_7) {
  for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
   int VAR_10 = VAR_4 - VAR_5 - 1;
   if (VAR_3[VAR_5].count > VAR_7 - VAR_10)
    VAR_3[VAR_5].count = VAR_7 - VAR_10;
   VAR_7 -= VAR_3[VAR_5].count;
  }
 }







 if (VAR_4 == 2 && !(VAR_3[0].flags & VAR_0) &&
     VAR_3[0].idx > 4 && VAR_3[0].count > 2 &&
     VAR_3[1].idx < 2) {
  int VAR_11 = (VAR_3[0].idx + 4) >> 1;


  VAR_3[0].count -= 2;

  if (VAR_11 != 4) {

   VAR_3[3] = VAR_3[1];


   VAR_3[2].idx = 4;
   VAR_3[2].count = 1;
   VAR_3[2].flags = VAR_3[1].flags;


   VAR_3[1].idx = VAR_11;
   VAR_3[1].count = 1;






   if (VAR_3[0].count >= 3) {
    --VAR_3[0].count;
    ++VAR_3[2].count;
   }


   VAR_4 += 2;
  } else {

   VAR_3[2] = VAR_3[1];


   VAR_3[1].idx = 4;
   VAR_3[1].count = 2;


   VAR_4 += 1;
  }
 }

 VAR_2->defined = FUNC_2(VAR_1, &VAR_3[0])->hw_value + 1;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  register unsigned VAR_12, VAR_13, VAR_14, VAR_15;

  VAR_12 = FUNC_2(VAR_1, &VAR_3[VAR_5])->hw_value;
  VAR_13 = VAR_12 >> 3;
  VAR_14 = (VAR_12 & 0x07) << 2;

  VAR_15 = VAR_3[VAR_5].count;
  if (VAR_15 > 0x0F) {
   VAR_3[VAR_5].count = 0x0f;
   VAR_15 = 0x0F;
  }
  VAR_2->tbl[VAR_13] |= FUNC_1(VAR_15 << VAR_14);
  VAR_2->retry_count += VAR_15;
 }

 FUNC_4("[TX policy] Policy (%zu): %d:%d, %d:%d, %d:%d, %d:%d\n",
   VAR_4,
   VAR_3[0].idx, VAR_3[0].count,
   VAR_3[1].idx, VAR_3[1].count,
   VAR_3[2].idx, VAR_3[2].count,
   VAR_3[3].idx, VAR_3[3].count);
}
