
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct timing_phase_path {int start; int end; int len; int mid; } ;
struct sd_info {int dummy; } ;
struct rtsx_chip {scalar_t__ sd_default_tx_phase; scalar_t__ sd_default_rx_phase; struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct rtsx_chip*) ;

__attribute__((used)) static u8 FUNC_4(struct rtsx_chip *VAR_3, u32 VAR_4,
    u8 VAR_5)
{
 struct sd_info *VAR_6 = &VAR_3->sd_card;
 struct timing_phase_path VAR_7[VAR_0 + 1];
 int VAR_8, VAR_9, VAR_10;
 bool VAR_11;
 int VAR_12, VAR_13;
 u8 VAR_14 = 0xFF;

 if (VAR_4 == 0xFFFFFFFF) {
  if (VAR_5 == VAR_1)
   VAR_14 = (u8)VAR_3->sd_default_rx_phase;
  else
   VAR_14 = (u8)VAR_3->sd_default_tx_phase;

  goto search_finish;
 }

 VAR_10 = 0;
 VAR_11 = 1;
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_0 + 1; VAR_8++) {
  if (VAR_4 & (1 << VAR_8)) {
   if (VAR_11) {
    VAR_11 = 0;
    VAR_9 = VAR_10++;
    VAR_7[VAR_9].start = VAR_8;
    VAR_7[VAR_9].end = VAR_8;
   } else {
    VAR_7[VAR_9].end = VAR_8;
   }
  } else {
   VAR_11 = 1;
   if (VAR_10) {
    int VAR_15 = VAR_10 - 1;

    VAR_7[VAR_15].len = VAR_7[VAR_15].end -
     VAR_7[VAR_15].start + 1;
    VAR_7[VAR_15].mid = VAR_7[VAR_15].start +
     VAR_7[VAR_15].len / 2;
   }
  }
 }

 if (VAR_10 == 0) {
  FUNC_2(FUNC_3(VAR_3), "No continuous phase path\n");
  goto search_finish;
 } else {
  int VAR_16 = VAR_10 - 1;

  VAR_7[VAR_16].len = VAR_7[VAR_16].end - VAR_7[VAR_16].start + 1;
  VAR_7[VAR_16].mid = VAR_7[VAR_16].start + VAR_7[VAR_16].len / 2;
 }

 if ((VAR_7[0].start == 0) &&
     (VAR_7[VAR_10 - 1].end == VAR_0)) {
  VAR_7[0].start = VAR_7[VAR_10 - 1].start - VAR_0 - 1;
  VAR_7[0].len += VAR_7[VAR_10 - 1].len;
  VAR_7[0].mid = VAR_7[0].start + VAR_7[0].len / 2;
  if (VAR_7[0].mid < 0)
   VAR_7[0].mid += VAR_0 + 1;

  VAR_10--;
 }

 VAR_12 = 0;
 VAR_14 = 0;
 VAR_13 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  if (VAR_7[VAR_8].len > VAR_12) {
   VAR_12 = VAR_7[VAR_8].len;
   VAR_14 = (u8)VAR_7[VAR_8].mid;
   VAR_13 = VAR_8;
  }

  FUNC_2(FUNC_3(VAR_3), "path[%d].start = %d\n",
   VAR_8, VAR_7[VAR_8].start);
  FUNC_2(FUNC_3(VAR_3), "path[%d].end = %d\n", VAR_8, VAR_7[VAR_8].end);
  FUNC_2(FUNC_3(VAR_3), "path[%d].len = %d\n", VAR_8, VAR_7[VAR_8].len);
  FUNC_2(FUNC_3(VAR_3), "path[%d].mid = %d\n", VAR_8, VAR_7[VAR_8].mid);
  FUNC_2(FUNC_3(VAR_3), "\n");
 }

 if (VAR_5 == VAR_2) {
  if (FUNC_0(VAR_6)) {
   if (VAR_12 > 15) {
    int VAR_17 = (VAR_12 - 16) / 2;
    int VAR_18 =
     VAR_7[VAR_13].end -
     (VAR_12 - (6 + VAR_17));

    if (VAR_18 < 0)
     VAR_14 = (u8)(VAR_18 +
       VAR_0 + 1);
    else
     VAR_14 = (u8)VAR_18;
   }
  } else if (FUNC_1(VAR_6)) {
   if (VAR_12 > 12) {
    int VAR_19 = (VAR_12 - 13) / 2;
    int VAR_20 =
     VAR_7[VAR_13].end -
     (VAR_12 - (3 + VAR_19));

    if (VAR_20 < 0)
     VAR_14 = (u8)(VAR_20 +
       VAR_0 + 1);
    else
     VAR_14 = (u8)VAR_20;
   }
  }
 }

search_finish:
 FUNC_2(FUNC_3(VAR_3), "Final chosen phase: %d\n", VAR_14);
 return VAR_14;
}
