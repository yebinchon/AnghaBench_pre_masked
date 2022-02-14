
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_tx_queue_params {int aifs; void* cw_max; void* cw_min; int txop; } ;
struct edcf_acparam {int ACI; int ECW; int TXOP; int member_2; int member_1; int member_0; } ;
struct brcms_c_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct brcms_c_info*) ;
 int FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_c_info*,int,struct ieee80211_tx_queue_params*,int) ;

__attribute__((used)) static void FUNC_4(struct brcms_c_info *VAR_6, bool VAR_7)
{
 u16 VAR_8;
 int VAR_9;
 struct ieee80211_tx_queue_params VAR_10;
 static const struct edcf_acparam VAR_11[] = {
   {139, 138, 137},
   {136, 135, 134},
   {133, 132, 131},
   {130, 129, 128}
 };
 const struct edcf_acparam *VAR_12 = &VAR_11[0];

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++, VAR_12++) {

  VAR_8 = (VAR_12->ACI & VAR_0) >> VAR_1;


  VAR_10.txop = VAR_12->TXOP;
  VAR_10.aifs = VAR_12->ACI;


  VAR_10.cw_min = FUNC_0(VAR_12->ECW & VAR_4);

  VAR_10.cw_max = FUNC_0((VAR_12->ECW & VAR_2)
         >> VAR_3);
  FUNC_3(VAR_6, VAR_8, &VAR_10, VAR_7);
 }

 if (VAR_7) {
  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
 }
}
