
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ath_keyval {int kv_mic; int kv_txmic; } ;
struct ath_common {int crypt_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_common*,char*) ;
 int FUNC_1 (struct ath_common*,scalar_t__,struct ath_keyval*,int const*) ;
 int FUNC_2 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct ath_common *VAR_3, u16 VAR_4, const u8 *VAR_5,
      struct ath_keyval *VAR_6, const u8 *VAR_7,
      bool VAR_8)
{
 const u8 *VAR_9;
 const u8 *VAR_10;

 VAR_10 = VAR_5 + VAR_2;
 VAR_9 = VAR_5 + VAR_1;

 if (VAR_7 == ((void*)0)) {





  if (VAR_8) {
   FUNC_2(VAR_6->kv_mic, VAR_10, sizeof(VAR_6->kv_mic));
   FUNC_2(VAR_6->kv_txmic, VAR_10, sizeof(VAR_6->kv_mic));
  } else {
   FUNC_2(VAR_6->kv_mic, VAR_9, sizeof(VAR_6->kv_mic));
   FUNC_2(VAR_6->kv_txmic, VAR_9, sizeof(VAR_6->kv_mic));
  }
  return FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7);
 }
 if (VAR_3->crypt_caps & VAR_0) {

  FUNC_2(VAR_6->kv_mic, VAR_9, sizeof(VAR_6->kv_mic));
  FUNC_2(VAR_6->kv_txmic, VAR_10, sizeof(VAR_6->kv_txmic));
  return FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7);
 }




 FUNC_2(VAR_6->kv_mic, VAR_10, sizeof(VAR_6->kv_mic));
 if (!FUNC_1(VAR_3, VAR_4, VAR_6, ((void*)0))) {

  FUNC_0(VAR_3, "Setting TX MIC Key Failed\n");
  return 0;
 }

 FUNC_2(VAR_6->kv_mic, VAR_9, sizeof(VAR_6->kv_mic));

 return FUNC_1(VAR_3, VAR_4 + 32, VAR_6, VAR_7);
}
