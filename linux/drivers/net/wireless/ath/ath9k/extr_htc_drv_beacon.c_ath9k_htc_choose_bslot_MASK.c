
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_event_swba {int tsf; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int beacon_interval; } ;
struct ath9k_htc_priv {TYPE_1__ cur_beacon_conf; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,int,int,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ath9k_htc_priv *VAR_2,
      struct wmi_event_swba *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_2->ah);
 u64 VAR_5;
 u32 VAR_6;
 u16 VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->cur_beacon_conf.beacon_interval;

 VAR_5 = FUNC_3(VAR_3->tsf);
 VAR_6 = FUNC_0(VAR_5 >> 32, VAR_5);
 VAR_8 = ((VAR_6 % VAR_7) * VAR_0) / VAR_7;
 VAR_8 = VAR_0 - VAR_8 - 1;

 FUNC_2(VAR_4, VAR_1,
  "Choose slot: %d, tsf: %llu, tsftu: %u, intval: %u\n",
  VAR_8, VAR_5, VAR_6, VAR_7);

 return VAR_8;
}
