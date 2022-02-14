
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int filter_flags; } ;
struct il_priv {int mutex; TYPE_1__ staging; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
typedef int __le32 ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct ieee80211_hw *VAR_7, unsigned int VAR_8,
   unsigned int *VAR_9, u64 VAR_10)
{
 struct il_priv *VAR_11 = VAR_7->priv;
 __le32 VAR_12 = 0, VAR_13 = 0;
 FUNC_1("Enter: changed: 0x%x, total: 0x%x\n", VAR_8,
     *VAR_9);

 do { if (*VAR_9 & (VAR_3)) VAR_12 |= (VAR_6); else VAR_13 |= (VAR_6); } while (0);

 do { if (*VAR_9 & (VAR_2)) VAR_12 |= (VAR_5 | VAR_6); else VAR_13 |= (VAR_5 | VAR_6); } while (0);
 do { if (*VAR_9 & (VAR_1)) VAR_12 |= (VAR_4); else VAR_13 |= (VAR_4); } while (0);



 FUNC_2(&VAR_11->mutex);

 VAR_11->staging.filter_flags &= ~VAR_13;
 VAR_11->staging.filter_flags |= VAR_12;






 FUNC_3(&VAR_11->mutex);







 *VAR_9 &=
     VAR_3 | VAR_0 |
     VAR_1 | VAR_2;
}
