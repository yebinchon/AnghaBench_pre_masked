
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline void FUNC_1(u8 *VAR_0)
{
 int VAR_1;

 FUNC_0("#############################\n");
 for (VAR_1 = 0; VAR_1 < 64; VAR_1 = VAR_1+8)
  FUNC_0("%02X:%02X:%02X:%02X:%02X:%02X:%02X:%02X:\n", *(VAR_0+VAR_1),
  *(VAR_0+VAR_1+1), *(VAR_0+VAR_1+2), *(VAR_0+VAR_1+3), *(VAR_0+VAR_1+4), *(VAR_0+VAR_1+5), *(VAR_0+VAR_1+6), *(VAR_0+VAR_1+7));
 FUNC_0("#############################\n");
}
