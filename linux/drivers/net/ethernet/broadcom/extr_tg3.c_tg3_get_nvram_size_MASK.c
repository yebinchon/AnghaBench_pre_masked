
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tg3 {int nvram_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*) ;
 scalar_t__ FUNC_3 (struct tg3*,int,int*) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_3)
{
 u32 VAR_4;

 if (FUNC_1(VAR_3, VAR_0) || FUNC_3(VAR_3, 0, &VAR_4) != 0)
  return;


 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_3);
  return;
 }

 if (FUNC_3(VAR_3, 0xf0, &VAR_4) == 0) {
  if (VAR_4 != 0) {
   VAR_3->nvram_size = FUNC_0((u16)(VAR_4 & 0x0000ffff)) * 1024;
   return;
  }
 }
 VAR_3->nvram_size = VAR_2;
}
