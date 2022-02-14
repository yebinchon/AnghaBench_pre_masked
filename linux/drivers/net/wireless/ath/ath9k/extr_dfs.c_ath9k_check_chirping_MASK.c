
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_dfs_fft_40 {int dummy; } ;
struct ath9k_dfs_fft_20 {int lower_bins; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ath9k_dfs_fft_40*,int,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static bool FUNC_8(struct ath_softc *VAR_6, u8 *VAR_7,
     int VAR_8, bool VAR_9, bool VAR_10)
{
 int VAR_11;
 int VAR_12[VAR_3];
 struct ath_hw *VAR_13 = VAR_6->sc_ah;
 struct ath_common *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;

 if (FUNC_0(VAR_13->curchan)) {
  struct ath9k_dfs_fft_40 *VAR_16 = (struct ath9k_dfs_fft_40 *) VAR_7;
  int VAR_17 = VAR_8 / sizeof(*VAR_16);
  if (VAR_17 == 0)
   return 0;

  FUNC_5(VAR_14, VAR_2, "HT40: datalen=%d, num_fft_packets=%d\n",
   VAR_8, VAR_17);
  if (VAR_17 < VAR_3) {
   FUNC_5(VAR_14, VAR_2, "not enough packets for chirp\n");
   return 0;
  }

  if ((VAR_8 % sizeof(*VAR_16)) == 2) {
   VAR_16 = (struct ath9k_dfs_fft_40 *) (VAR_7 + 2);
   FUNC_5(VAR_14, VAR_2, "fixing datalen by 2\n");
  }
  if (FUNC_1(VAR_13->curchan))
   FUNC_7(VAR_9, VAR_10);

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   VAR_12[VAR_11] = FUNC_3(VAR_16 + VAR_11, VAR_9,
             VAR_10);
 } else {
  struct ath9k_dfs_fft_20 *VAR_18 = (struct ath9k_dfs_fft_20 *) VAR_7;
  int VAR_19 = VAR_8 / sizeof(*VAR_18);
  if (VAR_19 == 0)
   return 0;
  FUNC_5(VAR_14, VAR_2, "HT20: datalen=%d, num_fft_packets=%d\n",
   VAR_8, VAR_19);
  if (VAR_19 < VAR_3) {
   FUNC_5(VAR_14, VAR_2, "not enough packets for chirp\n");
   return 0;
  }

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   VAR_12[VAR_11] = FUNC_6(VAR_18[VAR_11].lower_bins) ^ 0x20;
 }
 FUNC_5(VAR_14, VAR_2, "bin_max = [%d, %d, %d, %d]\n",
  VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3]);





 VAR_15 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  int VAR_20 = -1;
  int VAR_21 = VAR_12[VAR_11 + 1] - VAR_12[VAR_11];


  if (FUNC_2(VAR_21) < VAR_1 || FUNC_2(VAR_21) > VAR_0) {
   FUNC_5(VAR_14, VAR_2, "CHIRP: invalid delta %d "
    "in sample %d\n", VAR_21, VAR_11);
   return 0;
  }
  if (VAR_11 == 0)
   goto done;
  VAR_20 = VAR_21 - VAR_15;
  if (FUNC_2(VAR_20) > VAR_4) {
   FUNC_5(VAR_14, VAR_2, "CHIRP: ddelta %d too high\n",
    VAR_20);
   return 0;
  }
done:
  FUNC_5(VAR_14, VAR_2, "CHIRP - %d: delta=%d, ddelta=%d\n",
   VAR_11, VAR_21, VAR_20);
  VAR_15 = VAR_21;
 }
 return 1;
}
