
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_spi {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sprd_spi *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_6->base + VAR_0);

 VAR_7 &= VAR_5;
 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_7 >> VAR_3;
 FUNC_1(VAR_8, VAR_6->base + VAR_0);

 VAR_8 = VAR_7 & VAR_4;
 FUNC_1(VAR_8, VAR_6->base + VAR_1);
}
