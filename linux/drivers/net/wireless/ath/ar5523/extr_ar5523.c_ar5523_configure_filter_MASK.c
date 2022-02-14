
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {int mutex; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ar5523*,char*) ;
 int FUNC_1 (struct ar5523*) ;
 int FUNC_2 (struct ar5523*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_8,
        unsigned int VAR_9,
        unsigned int *VAR_10,
        u64 VAR_11)
{
 struct ar5523 *VAR_12 = VAR_8->priv;
 u32 VAR_13 = 0;

 FUNC_0(VAR_12, "configure_filter called\n");
 FUNC_3(&VAR_12->mutex);
 FUNC_1(VAR_12);

 *VAR_10 &= VAR_0;





 VAR_13 |= VAR_7 | VAR_5 |
    VAR_3 | VAR_4 |
    VAR_6;

 FUNC_2(VAR_12, 0, VAR_1);
 FUNC_2(VAR_12, VAR_13, VAR_2);

 FUNC_4(&VAR_12->mutex);
}
