
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int mode; int chip_select; } ;
struct ath79_spi {int ioc_base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath79_spi*,int ,int ) ;
 struct ath79_spi* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_2, int VAR_3)
{
 struct ath79_spi *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = (VAR_2->mode & VAR_1) ? VAR_3 : !VAR_3;
 u32 VAR_6 = FUNC_0(VAR_2->chip_select);

 if (VAR_5)
  VAR_4->ioc_base |= VAR_6;
 else
  VAR_4->ioc_base &= ~VAR_6;

 FUNC_1(VAR_4, VAR_0, VAR_4->ioc_base);
}
