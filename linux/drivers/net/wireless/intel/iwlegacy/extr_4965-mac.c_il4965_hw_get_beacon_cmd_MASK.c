
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_6__ {int life_time; } ;
struct TYPE_8__ {int tx_flags; int rate_n_flags; TYPE_2__ stop_time; int sta_id; int len; } ;
struct il_tx_beacon_cmd {TYPE_4__ tx; scalar_t__ frame; } ;
struct TYPE_7__ {int valid_tx_ant; int bcast_id; } ;
struct il_priv {int mgmt_tx_ant; TYPE_3__ hw_params; int beacon_enabled; int mutex; } ;
struct TYPE_5__ {struct il_tx_beacon_cmd beacon; } ;
struct il_frame {TYPE_1__ u; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct il_priv*,scalar_t__,int) ;
 int FUNC_6 (struct il_priv*,struct il_tx_beacon_cmd*,int *,scalar_t__) ;
 int FUNC_7 (struct il_priv*,int *,int ) ;
 scalar_t__ FUNC_8 (struct il_priv*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct il_tx_beacon_cmd*,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_11(struct il_priv *VAR_9, struct il_frame *VAR_10)
{
 struct il_tx_beacon_cmd *VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;





 FUNC_9(&VAR_9->mutex);

 if (!VAR_9->beacon_enabled) {
  FUNC_1("Trying to build beacon without beaconing enabled\n");
  return 0;
 }


 VAR_11 = &VAR_10->u.beacon;
 FUNC_10(VAR_11, 0, sizeof(*VAR_11));


 VAR_12 =
     FUNC_5(VAR_9, VAR_11->frame,
         sizeof(VAR_10->u) - sizeof(*VAR_11));
 if (FUNC_2(VAR_12 > VAR_2))
  return 0;
 if (!VAR_12)
  return 0;


 VAR_11->tx.len = FUNC_3((u16) VAR_12);
 VAR_11->tx.sta_id = VAR_9->hw_params.bcast_id;
 VAR_11->tx.stop_time.life_time = VAR_8;
 VAR_11->tx.tx_flags =
     VAR_5 | VAR_7 |
     VAR_6;


 FUNC_6(VAR_9, VAR_11, (u8 *) VAR_11->frame,
         VAR_12);


 VAR_14 = FUNC_8(VAR_9);
 FUNC_7(VAR_9, &VAR_9->mgmt_tx_ant, VAR_9->hw_params.valid_tx_ant);
 VAR_13 = FUNC_0(VAR_9->mgmt_tx_ant) << VAR_3;
 if ((VAR_14 >= VAR_0) && (VAR_14 <= VAR_1))
  VAR_13 |= VAR_4;
 VAR_11->tx.rate_n_flags = FUNC_4(VAR_14 | VAR_13);

 return sizeof(*VAR_11) + VAR_12;
}
