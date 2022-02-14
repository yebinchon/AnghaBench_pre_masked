
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath_common {int crypt_caps; int keymax; int keymap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath_common*) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ath_common *VAR_3,
          u32 VAR_4)
{
 int VAR_5;

 if (VAR_4 == VAR_2)
  return FUNC_0(VAR_3);


 if (!(VAR_3->crypt_caps & VAR_0)) {
  for (VAR_5 = VAR_1; VAR_5 < VAR_3->keymax / 4; VAR_5++) {
   if (!FUNC_1(VAR_5, VAR_3->keymap) &&
       (FUNC_1(VAR_5 + 32, VAR_3->keymap) ||
        FUNC_1(VAR_5 + 64, VAR_3->keymap) ||
        FUNC_1(VAR_5 + 64 + 32, VAR_3->keymap)))
    return VAR_5;
   if (!FUNC_1(VAR_5 + 32, VAR_3->keymap) &&
       (FUNC_1(VAR_5, VAR_3->keymap) ||
        FUNC_1(VAR_5 + 64, VAR_3->keymap) ||
        FUNC_1(VAR_5 + 64 + 32, VAR_3->keymap)))
    return VAR_5 + 32;
   if (!FUNC_1(VAR_5 + 64, VAR_3->keymap) &&
       (FUNC_1(VAR_5 , VAR_3->keymap) ||
        FUNC_1(VAR_5 + 32, VAR_3->keymap) ||
        FUNC_1(VAR_5 + 64 + 32, VAR_3->keymap)))
    return VAR_5 + 64;
   if (!FUNC_1(VAR_5 + 64 + 32, VAR_3->keymap) &&
       (FUNC_1(VAR_5, VAR_3->keymap) ||
        FUNC_1(VAR_5 + 32, VAR_3->keymap) ||
        FUNC_1(VAR_5 + 64, VAR_3->keymap)))
    return VAR_5 + 64 + 32;
  }
 } else {
  for (VAR_5 = VAR_1; VAR_5 < VAR_3->keymax / 2; VAR_5++) {
   if (!FUNC_1(VAR_5, VAR_3->keymap) &&
       FUNC_1(VAR_5 + 64, VAR_3->keymap))
    return VAR_5;
   if (FUNC_1(VAR_5, VAR_3->keymap) &&
       !FUNC_1(VAR_5 + 64, VAR_3->keymap))
    return VAR_5 + 64;
  }
 }


 for (VAR_5 = VAR_1; VAR_5 < VAR_3->keymax; VAR_5++) {



  if (VAR_5 >= 64 && VAR_5 < 64 + VAR_1)
   continue;
  if (!(VAR_3->crypt_caps & VAR_0)) {
   if (VAR_5 >= 32 && VAR_5 < 32 + VAR_1)
    continue;
   if (VAR_5 >= 64 + 32 && VAR_5 < 64 + 32 + VAR_1)
    continue;
  }

  if (!FUNC_1(VAR_5, VAR_3->keymap))
   return VAR_5;
 }


 return -1;
}
