
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct iwl_chain_noise_data {int* delta_gain_code; int radio_write; int state; scalar_t__* disconn_array; } ;
struct iwl_priv {int phy_calib_chain_noise_gain_cmd; TYPE_1__* lib; struct iwl_chain_noise_data chain_noise_data; } ;
struct iwl_calib_chain_noise_gain_cmd {int delta_gain_1; int delta_gain_2; int hdr; } ;
typedef int s32 ;
typedef int cmd ;
struct TYPE_2__ {int chain_noise_scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_priv*,int ,int ,int,struct iwl_calib_chain_noise_gain_cmd*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_calib_chain_noise_gain_cmd*,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_5,
        u32 VAR_6[VAR_3],
        u8 VAR_7)
{
 int VAR_8;
 s32 VAR_9;
 struct iwl_chain_noise_data *VAR_10 = &VAR_5->chain_noise_data;




 for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_3; VAR_8++) {
  if ((VAR_10->disconn_array[VAR_8])) {
   VAR_10->delta_gain_code[VAR_8] = 0;
   continue;
  }

  VAR_9 = (VAR_5->lib->chain_noise_scale *
   ((s32)VAR_6[VAR_7] -
   (s32)VAR_6[VAR_8])) / 1500;


  VAR_10->delta_gain_code[VAR_8] =
   FUNC_5(FUNC_1(VAR_9), VAR_0);

  if (VAR_9 < 0)
   VAR_10->delta_gain_code[VAR_8] |= (1 << 2);
 }

 FUNC_0(VAR_5, "Delta gains: ANT_B = %d  ANT_C = %d\n",
   VAR_10->delta_gain_code[1], VAR_10->delta_gain_code[2]);

 if (!VAR_10->radio_write) {
  struct iwl_calib_chain_noise_gain_cmd VAR_11;

  FUNC_4(&VAR_11, 0, sizeof(VAR_11));

  FUNC_3(&VAR_11.hdr,
   VAR_5->phy_calib_chain_noise_gain_cmd);
  VAR_11.delta_gain_1 = VAR_10->delta_gain_code[1];
  VAR_11.delta_gain_2 = VAR_10->delta_gain_code[2];
  FUNC_2(VAR_5, VAR_4,
   VAR_1, sizeof(VAR_11), &VAR_11);

  VAR_10->radio_write = 1;
  VAR_10->state = VAR_2;
 }
}
