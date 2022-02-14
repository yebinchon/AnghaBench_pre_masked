
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a3700_spi {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct a3700_spi*,int ) ;
 int FUNC_3 (struct a3700_spi*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct a3700_spi *VAR_5,
    unsigned int VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_0(FUNC_1(VAR_5->clk), VAR_6);





 if (VAR_8 > 15)
  VAR_8 = VAR_1 + FUNC_0(VAR_8, 2);

 VAR_7 = FUNC_2(VAR_5, VAR_3);
 VAR_7 = VAR_7 & ~VAR_2;

 VAR_7 = VAR_7 | (VAR_8 & VAR_2);
 FUNC_3(VAR_5, VAR_3, VAR_7);

 if (VAR_8 <= 2) {
  VAR_7 = FUNC_2(VAR_5, VAR_4);
  VAR_7 |= VAR_0;
  FUNC_3(VAR_5, VAR_4, VAR_7);
 }
}
