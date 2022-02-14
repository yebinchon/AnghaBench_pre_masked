
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int mode; int master; } ;
struct cdns_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cdns_spi*,int ) ;
 int FUNC_1 (struct cdns_spi*,int ,int) ;
 struct cdns_spi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_8)
{
 struct cdns_spi *VAR_9 = FUNC_2(VAR_8->master);
 u32 VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_0);
 VAR_10 = VAR_11;


 VAR_11 &= ~(VAR_1 | VAR_2);
 if (VAR_8->mode & VAR_6)
  VAR_11 |= VAR_1;
 if (VAR_8->mode & VAR_7)
  VAR_11 |= VAR_2;

 if (VAR_11 != VAR_10) {






  FUNC_1(VAR_9, VAR_3, VAR_4);
  FUNC_1(VAR_9, VAR_0, VAR_11);
  FUNC_1(VAR_9, VAR_3, VAR_5);
 }
}
