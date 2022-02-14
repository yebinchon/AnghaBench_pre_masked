
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1, u32 VAR_2,
        u32 VAR_3, enum radio_path VAR_4,
        u32 VAR_5)
{
 if (VAR_2 == 0xffe) {
  FUNC_0(50);
 } else if (VAR_2 == 0xfd) {
  FUNC_0(5);
 } else if (VAR_2 == 0xfc) {
  FUNC_0(1);
 } else if (VAR_2 == 0xfb) {
  FUNC_2(50);
 } else if (VAR_2 == 0xfa) {
  FUNC_2(5);
 } else if (VAR_2 == 0xf9) {
  FUNC_2(1);
 } else {
  FUNC_1(VAR_1, VAR_4, VAR_5,
         VAR_0,
         VAR_3);
  FUNC_2(1);
 }
}
