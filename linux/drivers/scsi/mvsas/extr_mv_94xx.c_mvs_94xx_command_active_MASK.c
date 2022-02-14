
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct mvs_info*,scalar_t__) ;
 int FUNC_2 (struct mvs_info*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_1(VAR_1, VAR_0+(VAR_2 >> 3));
 if (VAR_3 & 1 << (VAR_2 % 32)) {
  FUNC_0("command active %08X,  slot [%x].\n", VAR_3, VAR_2);
  FUNC_2(VAR_1, VAR_0 + (VAR_2 >> 3),
   1 << (VAR_2 % 32));
  do {
   VAR_3 = FUNC_1(VAR_1,
    VAR_0 + (VAR_2 >> 3));
  } while (VAR_3 & 1 << (VAR_2 % 32));
 }
}
