
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_4, u8 *VAR_5)
{
 int VAR_6;
 u16 VAR_7;

 VAR_7 = FUNC_1(VAR_4->io + VAR_3);
 VAR_6 = (VAR_7 & VAR_0);
 VAR_6 <<= 8;
 VAR_6 |= (VAR_7 & VAR_1) >> 8;
 VAR_6 = FUNC_0(VAR_6 * 100, VAR_2);
 *VAR_5 = (u8) VAR_6;
}
