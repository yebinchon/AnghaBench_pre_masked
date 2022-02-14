
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int valid_rx_ant; scalar_t__ valid_tx_ant; scalar_t__ tx_chains_num; } ;
struct TYPE_5__ {int active_chains; } ;
struct il_priv {TYPE_3__ hw_params; TYPE_2__ chain_noise_data; TYPE_1__* cfg; } ;
struct il_chain_noise_data {int chain_signal_a; int chain_signal_b; int chain_signal_c; int* disconn_array; int active_chains; } ;
typedef int s32 ;
struct TYPE_4__ {int chain_noise_num_beacons; int valid_tx_ant; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_2, u32 * VAR_3,
       struct il_chain_noise_data *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6;
 u16 VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u16 VAR_10 = 0;

 VAR_3[0] =
     VAR_4->chain_signal_a /
     VAR_2->cfg->chain_noise_num_beacons;
 VAR_3[1] =
     VAR_4->chain_signal_b /
     VAR_2->cfg->chain_noise_num_beacons;
 VAR_3[2] =
     VAR_4->chain_signal_c /
     VAR_2->cfg->chain_noise_num_beacons;

 if (VAR_3[0] >= VAR_3[1]) {
  VAR_6 = VAR_3[0];
  VAR_7 = 0;
  VAR_5 = (1 << VAR_7);
 } else {
  VAR_6 = VAR_3[1];
  VAR_7 = 1;
  VAR_5 = (1 << VAR_7);
 }

 if (VAR_3[2] >= VAR_6) {
  VAR_6 = VAR_3[2];
  VAR_7 = 2;
  VAR_5 = (1 << VAR_7);
 }

 FUNC_1("average_sig: a %d b %d c %d\n", VAR_3[0], VAR_3[1],
  VAR_3[2]);
 FUNC_1("max_average_sig = %d, antenna %d\n", VAR_6,
  VAR_7);


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_10 != VAR_7) {
   s32 VAR_11 = (VAR_6 - VAR_3[VAR_10]);



   if (VAR_11 > VAR_0)
    VAR_4->disconn_array[VAR_10] = 1;
   else
    VAR_5 |= (1 << VAR_10);
   FUNC_1("i = %d  rssiDelta = %d  "
    "disconn_array[i] = %d\n", VAR_10, VAR_11,
    VAR_4->disconn_array[VAR_10]);
  }
 }
 VAR_5 &= VAR_2->hw_params.valid_rx_ant;

 VAR_8 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {


  u8 VAR_12 = (1 << VAR_10);
  if (!(VAR_2->hw_params.valid_tx_ant & VAR_12))
   continue;

  VAR_8++;
  if (VAR_4->disconn_array[VAR_10] == 0)

   break;
  if (VAR_8 == VAR_2->hw_params.tx_chains_num &&
      VAR_4->disconn_array[VAR_10]) {




   VAR_9 =
       FUNC_2(VAR_2->cfg->valid_tx_ant);
   VAR_4->disconn_array[VAR_9] = 0;
   VAR_5 |= FUNC_0(VAR_9);
   FUNC_1("All Tx chains are disconnected"
    "- declare %d as connected\n", VAR_9);
   break;
  }
 }

 if (VAR_5 != VAR_2->hw_params.valid_rx_ant &&
     VAR_5 != VAR_2->chain_noise_data.active_chains)
  FUNC_1("Detected that not all antennas are connected! "
   "Connected: %#x, valid: %#x.\n", VAR_5,
   VAR_2->hw_params.valid_rx_ant);


 VAR_4->active_chains = VAR_5;
 FUNC_1("active_chains (bitwise) = 0x%x\n", VAR_5);
}
