
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(u16 VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 if (!VAR_4 || (VAR_5 < VAR_0))
  return;

 FUNC_0(VAR_4, 0xFF, VAR_0);

 if (VAR_3 == VAR_1) {

  VAR_4[0] = 0xB8;
 } else {

  VAR_4[0] = 0x98;
 }

 VAR_4[2] = (u8)(VAR_2 >> 8);
 VAR_4[3] = (u8)VAR_2;
}
