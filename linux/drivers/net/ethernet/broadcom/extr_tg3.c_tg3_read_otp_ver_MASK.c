
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tg3 {int * fw_ver; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tg3*,scalar_t__,int*) ;
 scalar_t__ FUNC_4 (struct tg3*) ;

__attribute__((used)) static void FUNC_5(struct tg3 *VAR_3)
{
 u32 VAR_4, VAR_5;

 if (FUNC_4(VAR_3) != VAR_0)
  return;

 if (!FUNC_3(VAR_3, VAR_1, &VAR_4) &&
     !FUNC_3(VAR_3, VAR_1 + 4, &VAR_5) &&
     FUNC_0(VAR_4)) {
  u64 VAR_6 = (u64) VAR_4 << 32 | VAR_5;
  u32 VAR_7 = 0;
  int VAR_8, VAR_9;

  for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
   if ((VAR_6 & 0xff) == 0)
    break;
   VAR_7 = VAR_6 & 0xff;
   VAR_6 >>= 8;
  }
  VAR_9 = FUNC_2(VAR_3->fw_ver);
  FUNC_1(&VAR_3->fw_ver[VAR_9], VAR_2 - VAR_9, " .%02d", VAR_7);
 }
}
