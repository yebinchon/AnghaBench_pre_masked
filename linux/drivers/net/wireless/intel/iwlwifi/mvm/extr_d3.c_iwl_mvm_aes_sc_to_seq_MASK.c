
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int* pn; } ;
struct ieee80211_key_seq {TYPE_1__ ccmp; } ;
struct aes_sc {int pn; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct aes_sc *VAR_0,
      struct ieee80211_key_seq *VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_0(VAR_0->pn);
 VAR_1->ccmp.pn[0] = VAR_2 >> 40;
 VAR_1->ccmp.pn[1] = VAR_2 >> 32;
 VAR_1->ccmp.pn[2] = VAR_2 >> 24;
 VAR_1->ccmp.pn[3] = VAR_2 >> 16;
 VAR_1->ccmp.pn[4] = VAR_2 >> 8;
 VAR_1->ccmp.pn[5] = VAR_2;
}
