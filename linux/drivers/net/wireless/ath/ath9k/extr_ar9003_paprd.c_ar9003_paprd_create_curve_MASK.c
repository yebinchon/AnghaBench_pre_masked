
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;
struct ath9k_hw_cal_data {scalar_t__** pa_table; int * small_signal_gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ath_hw*,scalar_t__) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ath_hw*,struct ath9k_hw_cal_data*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 (int,int,int ) ;
 int FUNC_7 (scalar_t__*,int ,int) ;

int FUNC_8(struct ath_hw *VAR_8,
         struct ath9k_hw_cal_data *VAR_9, int VAR_10)
{
 u16 *VAR_11 = &VAR_9->small_signal_gain[VAR_10];
 u32 *VAR_12 = VAR_9->pa_table[VAR_10];
 u32 *VAR_13, *VAR_14;
 int VAR_15, VAR_16 = 0;
 u32 *VAR_17;
 u32 VAR_18;

 FUNC_7(VAR_9->pa_table[VAR_10], 0, sizeof(VAR_9->pa_table[VAR_10]));

 VAR_17 = FUNC_6(2 * 48, sizeof(u32), VAR_7);
 if (!VAR_17)
  return -VAR_6;

 VAR_13 = &VAR_17[0];
 VAR_14 = &VAR_17[48];

 FUNC_0(VAR_8, VAR_0,
      VAR_1);

 VAR_18 = VAR_2;
 for (VAR_15 = 0; VAR_15 < 48; VAR_15++)
  VAR_13[VAR_15] = FUNC_1(VAR_8, VAR_18 + (VAR_15 << 2));

 FUNC_2(VAR_8, VAR_0,
      VAR_1);

 for (VAR_15 = 0; VAR_15 < 48; VAR_15++)
  VAR_14[VAR_15] = FUNC_1(VAR_8, VAR_18 + (VAR_15 << 2));

 if (!FUNC_4(VAR_13, VAR_14, VAR_12, VAR_11))
  VAR_16 = -2;

 if (FUNC_3(VAR_8, VAR_9, VAR_10))
  VAR_16 = -VAR_5;

 FUNC_0(VAR_8, VAR_3,
      VAR_4);

 FUNC_5(VAR_17);

 return VAR_16;
}
