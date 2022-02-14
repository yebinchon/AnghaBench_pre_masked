
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,int const*,int) ;
 int FUNC_1 (struct adapter*,scalar_t__) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_1,
      u32 VAR_2, const u8 *VAR_3, u32 VAR_4)
{
 u8 VAR_5;
 u8 VAR_6 = (u8)(VAR_2 & 0x07);

 VAR_5 = (FUNC_1(VAR_1, VAR_0 + 2) & 0xF8) | VAR_6;

 FUNC_2(VAR_1, (VAR_0 + 2), VAR_5);
 FUNC_0(VAR_1, VAR_3, VAR_4);
}
