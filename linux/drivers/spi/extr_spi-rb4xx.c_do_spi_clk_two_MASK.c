
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rb4xx_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rb4xx_spi*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct rb4xx_spi *VAR_4, u32 VAR_5,
       u8 VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_5;
 if (VAR_6 & FUNC_0(1))
  VAR_7 |= VAR_2;
 if (VAR_6 & FUNC_0(0))
  VAR_7 |= VAR_1;

 FUNC_1(VAR_4, VAR_3, VAR_7);
 FUNC_1(VAR_4, VAR_3, VAR_7 | VAR_0);
}
