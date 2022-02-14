
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_common {int keymax; int crypt_caps; int keymap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct ath_common *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_2->keymax / 2; VAR_3++) {
  if (FUNC_0(VAR_3, VAR_2->keymap) ||
      FUNC_0(VAR_3 + 64, VAR_2->keymap))
   continue;
  if (!(VAR_2->crypt_caps & VAR_0) &&
      (FUNC_0(VAR_3 + 32, VAR_2->keymap) ||
       FUNC_0(VAR_3 + 64 + 32, VAR_2->keymap)))
   continue;


  return VAR_3;
 }
 return -1;
}
