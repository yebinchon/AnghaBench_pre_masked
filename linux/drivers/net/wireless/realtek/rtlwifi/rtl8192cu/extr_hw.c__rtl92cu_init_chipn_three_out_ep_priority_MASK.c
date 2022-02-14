
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3,
            bool VAR_4,
            u8 VAR_5)
{
 u16 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (!VAR_4) {
  VAR_6 = VAR_1;
  VAR_7 = VAR_1;
  VAR_8 = VAR_2;
  VAR_9 = VAR_0;
  VAR_10 = VAR_0;
  VAR_11 = VAR_0;
 } else {
  VAR_6 = VAR_1;
  VAR_7 = VAR_2;
  VAR_8 = VAR_2;
  VAR_9 = VAR_0;
  VAR_10 = VAR_0;
  VAR_11 = VAR_0;
 }
 FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 FUNC_1("Tx queue select :0x%02x..\n", VAR_5);
}
