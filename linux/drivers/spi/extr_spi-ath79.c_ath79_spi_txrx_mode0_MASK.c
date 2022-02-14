
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_device {int dummy; } ;
struct ath79_spi {int ioc_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath79_spi*,unsigned int) ;
 int FUNC_1 (struct ath79_spi*,int ) ;
 int FUNC_2 (struct ath79_spi*,int ,int) ;
 struct ath79_spi* FUNC_3 (struct spi_device*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(struct spi_device *VAR_4, unsigned int VAR_5,
          u32 VAR_6, u8 VAR_7, unsigned VAR_8)
{
 struct ath79_spi *VAR_9 = FUNC_3(VAR_4);
 u32 VAR_10 = VAR_9->ioc_base;


 for (VAR_6 <<= (32 - VAR_7); FUNC_4(VAR_7); VAR_7--) {
  u32 VAR_11;

  if (VAR_6 & (1 << 31))
   VAR_11 = VAR_10 | VAR_1;
  else
   VAR_11 = VAR_10 & ~VAR_1;


  FUNC_2(VAR_9, VAR_2, VAR_11);
  FUNC_0(VAR_9, VAR_5);
  FUNC_2(VAR_9, VAR_2, VAR_11 | VAR_0);
  FUNC_0(VAR_9, VAR_5);
  if (VAR_7 == 1)
   FUNC_2(VAR_9, VAR_2, VAR_11);

  VAR_6 <<= 1;
 }

 return FUNC_1(VAR_9, VAR_3);
}
