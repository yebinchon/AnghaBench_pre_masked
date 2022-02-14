
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_5, u8 VAR_6)
{
 u16 VAR_7;
 u32 VAR_8 = ((u32) VAR_3 * (u32) VAR_6 / 100);

 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;

 VAR_7 = FUNC_0(VAR_5->io + VAR_4);
 VAR_7 &= ~(VAR_2 | VAR_1);
 VAR_7 |= ((VAR_8 & 0x00FF) << 8) | ((VAR_8 & 0xFF00) >> 8);
 FUNC_1(VAR_7, VAR_5->io + VAR_4);
}
