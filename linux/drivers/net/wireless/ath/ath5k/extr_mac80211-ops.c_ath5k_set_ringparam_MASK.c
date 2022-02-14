
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {TYPE_1__* txqs; } ;
struct TYPE_2__ {scalar_t__ qnum; scalar_t__ txq_max; scalar_t__ txq_len; int setup; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ieee80211_hw*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct ath5k_hw *VAR_8 = VAR_5->priv;
 u16 VAR_9;


 if (VAR_7 != VAR_3)
  return -VAR_4;


 if (!VAR_6 || VAR_6 > VAR_2)
  return -VAR_4;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8->txqs); VAR_9++) {
  if (!VAR_8->txqs[VAR_9].setup)
   continue;
  if (VAR_8->txqs[VAR_9].qnum < VAR_1 ||
      VAR_8->txqs[VAR_9].qnum > VAR_0)
   continue;

  VAR_8->txqs[VAR_9].txq_max = VAR_6;
  if (VAR_8->txqs[VAR_9].txq_len >= VAR_8->txqs[VAR_9].txq_max)
   FUNC_1(VAR_5, VAR_8->txqs[VAR_9].qnum);
 }

 return 0;
}
