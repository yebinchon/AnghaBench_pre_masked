
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct a3700_spi {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct a3700_spi*,int ) ;
 int FUNC_1 (struct a3700_spi*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct a3700_spi *VAR_4,
         unsigned int VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_6 &= ~(VAR_0 << VAR_2);
 VAR_6 |= (VAR_5 - 1) << VAR_2;
 VAR_6 &= ~(VAR_0 << VAR_3);
 VAR_6 |= (7 - VAR_5) << VAR_3;
 FUNC_1(VAR_4, VAR_1, VAR_6);
}
