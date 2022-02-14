
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ath_softc {TYPE_3__* sc_ah; TYPE_1__* cur_chan; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {scalar_t__ beacon_interval; } ;
struct TYPE_6__ {int sw_beacon_response_time; } ;
struct TYPE_7__ {scalar_t__ opmode; TYPE_2__ config; } ;
struct TYPE_5__ {struct ath_beacon_config beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ath_common* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct ath_common*,int ,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct ath_softc *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_2(VAR_5->sc_ah);
 struct ath_beacon_config *VAR_7 = &VAR_5->cur_chan->beacon;
 u16 VAR_8;
 u32 VAR_9;
 u64 VAR_10;
 int VAR_11;

 if (VAR_5->sc_ah->opmode != VAR_3 &&
     VAR_5->sc_ah->opmode != VAR_4) {
  FUNC_4(VAR_6, VAR_2, "slot 0, tsf: %llu\n",
   FUNC_3(VAR_5->sc_ah));
  return 0;
 }

 VAR_8 = VAR_7->beacon_interval ? : VAR_1;
 VAR_10 = FUNC_3(VAR_5->sc_ah);
 VAR_10 += FUNC_1(VAR_5->sc_ah->config.sw_beacon_response_time);
 VAR_9 = FUNC_0((VAR_10 * VAR_0) >>32, VAR_10 * VAR_0);
 VAR_11 = (VAR_9 % (VAR_8 * VAR_0)) / VAR_8;

 FUNC_4(VAR_6, VAR_2, "slot: %d tsf: %llu tsftu: %u\n",
  VAR_11, VAR_10, VAR_9 / VAR_0);

 return VAR_11;
}
