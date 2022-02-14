
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct il_chain_noise_data {scalar_t__* delta_gain_code; int radio_write; int state; int * disconn_array; } ;
struct il_priv {struct il_chain_noise_data chain_noise_data; } ;
struct TYPE_2__ {int op_code; } ;
struct il_calib_diff_gain_cmd {int diff_gain_a; int diff_gain_b; int diff_gain_c; TYPE_1__ hdr; } ;
typedef int s32 ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct il_priv*,int ,int,struct il_calib_diff_gain_cmd*) ;
 int FUNC_2 (struct il_calib_diff_gain_cmd*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,void*) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_6, u32 * VAR_7,
   u16 VAR_8, u32 VAR_9,
   u8 VAR_10)
{
 int VAR_11, VAR_12;
 struct il_chain_noise_data *VAR_13 = &VAR_6->chain_noise_data;

 VAR_13->delta_gain_code[VAR_8] = 0;

 for (VAR_11 = VAR_10; VAR_11 < VAR_5; VAR_11++) {
  s32 VAR_14 = 0;

  if (!VAR_13->disconn_array[VAR_11] &&
      VAR_13->delta_gain_code[VAR_11] ==
      VAR_0) {
   VAR_14 = VAR_7[VAR_11] - VAR_9;
   VAR_13->delta_gain_code[VAR_11] = (u8) ((VAR_14 * 10) / 15);
   VAR_13->delta_gain_code[VAR_11] =
       FUNC_3(VAR_13->delta_gain_code[VAR_11],
    (u8) VAR_1);

   VAR_13->delta_gain_code[VAR_11] =
       (VAR_13->delta_gain_code[VAR_11] | (1 << 2));
  } else {
   VAR_13->delta_gain_code[VAR_11] = 0;
  }
 }
 FUNC_0("delta_gain_codes: a %d b %d c %d\n", VAR_13->delta_gain_code[0],
  VAR_13->delta_gain_code[1], VAR_13->delta_gain_code[2]);


 if (!VAR_13->radio_write) {
  struct il_calib_diff_gain_cmd VAR_15;
  VAR_13->radio_write = 1;

  FUNC_2(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.hdr.op_code = VAR_4;
  VAR_15.diff_gain_a = VAR_13->delta_gain_code[0];
  VAR_15.diff_gain_b = VAR_13->delta_gain_code[1];
  VAR_15.diff_gain_c = VAR_13->delta_gain_code[2];
  VAR_12 = FUNC_1(VAR_6, VAR_2, sizeof(VAR_15), &VAR_15);
  if (VAR_12)
   FUNC_0("fail sending cmd " "C_PHY_CALIBRATION\n");





  VAR_13->state = VAR_3;
 }
}
