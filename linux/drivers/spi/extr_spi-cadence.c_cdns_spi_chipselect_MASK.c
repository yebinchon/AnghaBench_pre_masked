
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int chip_select; int master; } ;
struct cdns_spi {int is_decoded_cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cdns_spi*,int ) ;
 int FUNC_1 (struct cdns_spi*,int ,int) ;
 struct cdns_spi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_4, bool VAR_5)
{
 struct cdns_spi *VAR_6 = FUNC_2(VAR_4->master);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_0);

 if (!VAR_5) {

  VAR_7 |= VAR_1;
 } else {

  VAR_7 &= ~VAR_1;
  if (!(VAR_6->is_decoded_cs))
   VAR_7 |= ((~(VAR_2 << VAR_4->chip_select)) <<
         VAR_3) &
         VAR_1;
  else
   VAR_7 |= (VAR_4->chip_select << VAR_3) &
         VAR_1;
 }

 FUNC_1(VAR_6, VAR_0, VAR_7);
}
