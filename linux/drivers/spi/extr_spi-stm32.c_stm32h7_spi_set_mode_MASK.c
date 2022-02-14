
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct stm32_spi*,int ,int ) ;
 int FUNC_2 (struct stm32_spi*,int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stm32_spi *VAR_13, unsigned int VAR_14)
{
 u32 VAR_15;
 u32 VAR_16 = 0, VAR_17 = 0;

 if (VAR_14 == VAR_0) {
  VAR_15 = VAR_10;
  FUNC_1(VAR_13, VAR_7, VAR_8);
 } else if (VAR_14 == VAR_1) {
  VAR_15 = VAR_10;
  FUNC_2(VAR_13, VAR_7, VAR_8);
 } else if (VAR_14 == VAR_2) {
  VAR_15 = VAR_11;
 } else if (VAR_14 == VAR_3) {
  VAR_15 = VAR_12;
 } else {
  VAR_15 = VAR_9;
 }

 VAR_16 |= VAR_5;
 VAR_17 |= (VAR_15 << VAR_6) &
       VAR_5;

 FUNC_3(
  (FUNC_0(VAR_13->base + VAR_4) &
   ~VAR_16) | VAR_17,
  VAR_13->base + VAR_4);

 return 0;
}
