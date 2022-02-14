
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ath_keyval {int kv_type; scalar_t__ kv_len; scalar_t__ kv_mic; scalar_t__ kv_txmic; scalar_t__ kv_val; } ;
struct ath_common {scalar_t__ keymax; int crypt_caps; void* ah; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,int ,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (struct ath_common*,int ,char*,...) ;
 int FUNC_12 (struct ath_common*,char*,scalar_t__) ;
 int FUNC_13 (struct ath_common*,scalar_t__,int const*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static bool FUNC_16(struct ath_common *VAR_12, u16 VAR_13,
          const struct ath_keyval *VAR_14,
          const u8 *VAR_15)
{
 void *VAR_16 = VAR_12->ah;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 if (VAR_13 >= VAR_12->keymax) {
  FUNC_12(VAR_12, "set-entry: keycache entry %u out of range\n",
   VAR_13);
  return 0;
 }

 switch (VAR_14->kv_type) {
 case 131:
  VAR_22 = VAR_4;
  break;
 case 132:
  if (!(VAR_12->crypt_caps & VAR_8)) {
   FUNC_11(VAR_12, VAR_0,
    "AES-CCM not supported by this mac rev\n");
   return 0;
  }
  VAR_22 = VAR_5;
  break;
 case 129:
  VAR_22 = VAR_7;
  if (VAR_13 + 64 >= VAR_12->keymax) {
   FUNC_11(VAR_12, VAR_0,
    "entry %u inappropriate for TKIP\n", VAR_13);
   return 0;
  }
  break;
 case 128:
  if (VAR_14->kv_len < VAR_11) {
   FUNC_11(VAR_12, VAR_0, "WEP key length %u too small\n",
    VAR_14->kv_len);
   return 0;
  }
  if (VAR_14->kv_len <= VAR_11)
   VAR_22 = VAR_3;
  else if (VAR_14->kv_len <= VAR_10)
   VAR_22 = VAR_1;
  else
   VAR_22 = VAR_2;
  break;
 case 130:
  VAR_22 = VAR_6;
  break;
 default:
  FUNC_12(VAR_12, "cipher %u not supported\n", VAR_14->kv_type);
  return 0;
 }

 VAR_17 = FUNC_15(VAR_14->kv_val + 0);
 VAR_18 = FUNC_14(VAR_14->kv_val + 4);
 VAR_19 = FUNC_15(VAR_14->kv_val + 6);
 VAR_20 = FUNC_14(VAR_14->kv_val + 10);
 VAR_21 = FUNC_15(VAR_14->kv_val + 12);
 if (VAR_14->kv_len <= VAR_10)
  VAR_21 &= 0xff;
 if (VAR_22 == VAR_7) {
  u16 VAR_23 = VAR_13 + 64;







  FUNC_10(VAR_16, FUNC_0(VAR_13), ~VAR_17);
  FUNC_10(VAR_16, FUNC_1(VAR_13), ~VAR_18);


  FUNC_10(VAR_16, FUNC_2(VAR_13), VAR_19);
  FUNC_10(VAR_16, FUNC_3(VAR_13), VAR_20);


  FUNC_10(VAR_16, FUNC_4(VAR_13), VAR_21);
  FUNC_10(VAR_16, FUNC_7(VAR_13), VAR_22);


  (void) FUNC_13(VAR_12, VAR_13, VAR_15);

  if (VAR_12->crypt_caps & VAR_9) {
   u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

   VAR_24 = FUNC_15(VAR_14->kv_mic + 0);
   VAR_26 = FUNC_15(VAR_14->kv_mic + 4);
   VAR_25 = FUNC_14(VAR_14->kv_txmic + 2) & 0xffff;
   VAR_27 = FUNC_14(VAR_14->kv_txmic + 0) & 0xffff;
   VAR_28 = FUNC_15(VAR_14->kv_txmic + 4);

   FUNC_8(VAR_16);


   FUNC_10(VAR_16, FUNC_0(VAR_23), VAR_24);
   FUNC_10(VAR_16, FUNC_1(VAR_23), VAR_25);


   FUNC_10(VAR_16, FUNC_2(VAR_23), VAR_26);
   FUNC_10(VAR_16, FUNC_3(VAR_23), VAR_27);


   FUNC_10(VAR_16, FUNC_4(VAR_23), VAR_28);
   FUNC_10(VAR_16, FUNC_7(VAR_23),
      VAR_6);

   FUNC_9(VAR_16);

  } else {
   u32 VAR_29, VAR_30;

   VAR_29 = FUNC_15(VAR_14->kv_mic + 0);
   VAR_30 = FUNC_15(VAR_14->kv_mic + 4);

   FUNC_8(VAR_16);


   FUNC_10(VAR_16, FUNC_0(VAR_23), VAR_29);
   FUNC_10(VAR_16, FUNC_1(VAR_23), 0);


   FUNC_10(VAR_16, FUNC_2(VAR_23), VAR_30);
   FUNC_10(VAR_16, FUNC_3(VAR_23), 0);


   FUNC_10(VAR_16, FUNC_4(VAR_23), 0);
   FUNC_10(VAR_16, FUNC_7(VAR_23),
      VAR_6);

   FUNC_9(VAR_16);
  }

  FUNC_8(VAR_16);


  FUNC_10(VAR_16, FUNC_5(VAR_23), 0);
  FUNC_10(VAR_16, FUNC_6(VAR_23), 0);






  FUNC_10(VAR_16, FUNC_0(VAR_13), VAR_17);
  FUNC_10(VAR_16, FUNC_1(VAR_13), VAR_18);

  FUNC_9(VAR_16);
 } else {
  FUNC_8(VAR_16);


  FUNC_10(VAR_16, FUNC_0(VAR_13), VAR_17);
  FUNC_10(VAR_16, FUNC_1(VAR_13), VAR_18);


  FUNC_10(VAR_16, FUNC_2(VAR_13), VAR_19);
  FUNC_10(VAR_16, FUNC_3(VAR_13), VAR_20);


  FUNC_10(VAR_16, FUNC_4(VAR_13), VAR_21);
  FUNC_10(VAR_16, FUNC_7(VAR_13), VAR_22);

  FUNC_9(VAR_16);


  (void) FUNC_13(VAR_12, VAR_13, VAR_15);
 }

 return 1;
}
