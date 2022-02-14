
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct txpower_info {int** cck_index; int** ht40_1sindex; int** ht40_2sindexdiff; int** ht20indexdiff; int** ofdmindexdiff; int** ht40maxoffset; int** ht20maxoffset; int* tssi_a; int* tssi_b; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int FUNC_0 (struct txpower_info*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct txpower_info *VAR_21,
     u8 *VAR_22, bool VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 u8 VAR_29;

 FUNC_0(VAR_21, 0, sizeof(struct txpower_info));
 if (VAR_23) {
  for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++) {
   for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
    if (VAR_26 < VAR_1) {
     VAR_21->cck_index[VAR_24][VAR_26] =
         VAR_9;
     VAR_21->ht40_1sindex[VAR_24][VAR_26] =
         VAR_9;
    } else {
     VAR_21->ht40_1sindex[VAR_24][VAR_26] =
         VAR_10;
    }
    VAR_21->ht40_2sindexdiff[VAR_24][VAR_26] =
        VAR_5;
    VAR_21->ht20indexdiff[VAR_24][VAR_26] =
        VAR_3;
    VAR_21->ofdmindexdiff[VAR_24][VAR_26] =
        VAR_7;
    VAR_21->ht40maxoffset[VAR_24][VAR_26] =
        VAR_6;
    VAR_21->ht20maxoffset[VAR_24][VAR_26] =
        VAR_4;
   }
  }
  for (VAR_29 = 0; VAR_29 < 3; VAR_29++) {
   VAR_21->tssi_a[VAR_29] = VAR_8;
   VAR_21->tssi_b[VAR_29] = VAR_8;
  }
  return;
 }



 for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
  for (VAR_26 = 0; VAR_26 < VAR_1; VAR_26++) {
   VAR_25 = VAR_2 + (VAR_24 * 3)
     + VAR_26;
   VAR_21->cck_index[VAR_24][VAR_26] =
     (VAR_22[VAR_25] == 0xFF) ?
          (VAR_25 > 0x7B ?
          VAR_10 :
          VAR_9) :
          VAR_22[VAR_25];
  }
 }
 for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
  for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++) {
   VAR_27 = VAR_26 / 3;
   VAR_28 = VAR_26 % 3;
   VAR_25 = VAR_13 + (VAR_24 * 3) +
       VAR_28 + VAR_27 * 21;
   VAR_21->ht40_1sindex[VAR_24][VAR_26] =
       (VAR_22[VAR_25] == 0xFF) ? (VAR_25 > 0x7B ?
          VAR_10 :
          VAR_9) :
       VAR_22[VAR_25];
  }
 }

 for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++) {
  for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
   int VAR_30 = VAR_14;

   VAR_27 = VAR_26 / 3;
   VAR_28 = VAR_26 % 3;

   if (VAR_22[VAR_30 + VAR_28 + VAR_27 * 21] != 0xFF)
    VAR_21->ht40_2sindexdiff[VAR_24][VAR_26] =
        (VAR_22[VAR_30 +
         VAR_28 + VAR_27 * 21] >> (VAR_24 * 4))
         & 0xF;
   else
    VAR_21->ht40_2sindexdiff[VAR_24][VAR_26] =
        VAR_5;
   if (VAR_22[VAR_12 + VAR_28
       + VAR_27 * 21] != 0xFF)
    VAR_21->ht20indexdiff[VAR_24][VAR_26] =
        (VAR_22[VAR_12
        + VAR_28 + VAR_27 * 21] >> (VAR_24 * 4))
        & 0xF;
   else
    VAR_21->ht20indexdiff[VAR_24][VAR_26] =
        VAR_3;
   if (VAR_22[VAR_16 + VAR_28
       + VAR_27 * 21] != 0xFF)
    VAR_21->ofdmindexdiff[VAR_24][VAR_26] =
        (VAR_22[VAR_16
         + VAR_28 + VAR_27 * 21] >> (VAR_24 * 4))
         & 0xF;
   else
    VAR_21->ofdmindexdiff[VAR_24][VAR_26] =
        VAR_7;
   if (VAR_22[VAR_15 + VAR_28
       + VAR_27 * 21] != 0xFF)
    VAR_21->ht40maxoffset[VAR_24][VAR_26] =
        (VAR_22[VAR_15
        + VAR_28 + VAR_27 * 21] >> (VAR_24 * 4))
        & 0xF;
   else
    VAR_21->ht40maxoffset[VAR_24][VAR_26] =
        VAR_6;
   if (VAR_22[VAR_11 + VAR_28
       + VAR_27 * 21] != 0xFF)
    VAR_21->ht20maxoffset[VAR_24][VAR_26] =
        (VAR_22[VAR_11 +
         VAR_28 + VAR_27 * 21] >> (VAR_24 * 4)) &
         0xF;
   else
    VAR_21->ht20maxoffset[VAR_24][VAR_26] =
        VAR_4;
  }
 }
 if (VAR_22[VAR_18] != 0xFF) {

  VAR_21->tssi_a[0] = VAR_22[VAR_18] & 0x3F;
  VAR_21->tssi_b[0] = VAR_22[VAR_19] & 0x3F;

  VAR_21->tssi_a[1] = VAR_22[VAR_17] & 0x3F;
  VAR_21->tssi_b[1] =
      (VAR_22[VAR_17] & 0xC0) >> 6 |
      (VAR_22[VAR_17 + 1] & 0x0F) << 2;

  VAR_21->tssi_a[2] = (VAR_22[VAR_17 + 1] &
          0xF0) >> 4 |
      (VAR_22[VAR_17 + 2] & 0x03) << 4;
  VAR_21->tssi_b[2] = (VAR_22[VAR_17 + 2] &
          0xFC) >> 2;
 } else {
  for (VAR_29 = 0; VAR_29 < 3; VAR_29++) {
   VAR_21->tssi_a[VAR_29] = VAR_8;
   VAR_21->tssi_b[VAR_29] = VAR_8;
  }
 }
}
