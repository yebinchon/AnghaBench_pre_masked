
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int bcast_id; } ;
struct il_priv {TYPE_1__ hw_params; } ;
struct TYPE_5__ {int life_time; } ;
struct TYPE_6__ {int tx_flags; int* supp_rates; int rate; int len; TYPE_2__ stop_time; int sta_id; } ;
struct il3945_tx_beacon_cmd {TYPE_3__ tx; int frame; } ;
struct il3945_frame {int u; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct il_priv*,int ,int) ;
 int FUNC_3 (struct il3945_tx_beacon_cmd*,int ,int) ;

unsigned int
FUNC_4(struct il_priv *VAR_7, struct il3945_frame *VAR_8,
    u8 VAR_9)
{
 struct il3945_tx_beacon_cmd *VAR_10;
 unsigned int VAR_11;

 VAR_10 = (struct il3945_tx_beacon_cmd *)&VAR_8->u;
 FUNC_3(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->tx.sta_id = VAR_7->hw_params.bcast_id;
 VAR_10->tx.stop_time.life_time = VAR_6;

 VAR_11 =
     FUNC_2(VAR_7, VAR_10->frame,
         sizeof(VAR_8->u) - sizeof(*VAR_10));

 FUNC_0(VAR_11 > VAR_3);
 VAR_10->tx.len = FUNC_1((u16) VAR_11);

 VAR_10->tx.rate = VAR_9;
 VAR_10->tx.tx_flags =
     (VAR_4 | VAR_5);


 VAR_10->tx.supp_rates[0] =
     (VAR_2 >> VAR_1) & 0xFF;

 VAR_10->tx.supp_rates[1] = (VAR_0 & 0xF);

 return sizeof(struct il3945_tx_beacon_cmd) + VAR_11;
}
