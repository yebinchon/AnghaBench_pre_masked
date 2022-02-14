
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u32 ;
struct tg3 {int * fw_ver; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tg3*,int) ;
 scalar_t__ FUNC_4 (struct tg3*,int,int*) ;
 scalar_t__ FUNC_5 (struct tg3*,int,int *) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 bool VAR_12 = 0;

 if (FUNC_4(VAR_5, 0xc, &VAR_7) ||
     FUNC_4(VAR_5, 0x4, &VAR_8))
  return;

 VAR_7 = FUNC_3(VAR_5, VAR_7);

 if (FUNC_4(VAR_5, VAR_7, &VAR_6))
  return;

 if ((VAR_6 & 0xfc000000) == 0x0c000000) {
  if (FUNC_4(VAR_5, VAR_7 + 4, &VAR_6))
   return;

  if (VAR_6 == 0)
   VAR_12 = 1;
 }

 VAR_11 = FUNC_2(VAR_5->fw_ver);

 if (VAR_12) {
  if (VAR_4 - VAR_11 < 16 ||
      FUNC_4(VAR_5, VAR_7 + 8, &VAR_9))
   return;

  VAR_7 = VAR_7 + VAR_9 - VAR_8;
  for (VAR_10 = 0; VAR_10 < 16; VAR_10 += 4) {
   __be32 VAR_13;
   if (FUNC_5(VAR_5, VAR_7 + VAR_10, &VAR_13))
    return;

   FUNC_0(VAR_5->fw_ver + VAR_11 + VAR_10, &VAR_13, sizeof(VAR_13));
  }
 } else {
  u32 VAR_14, VAR_15;

  if (FUNC_4(VAR_5, VAR_3, &VAR_9))
   return;

  VAR_14 = (VAR_9 & VAR_0) >>
   VAR_1;
  VAR_15 = VAR_9 & VAR_2;
  FUNC_1(&VAR_5->fw_ver[VAR_11], VAR_4 - VAR_11,
    "v%d.%02d", VAR_14, VAR_15);
 }
}
