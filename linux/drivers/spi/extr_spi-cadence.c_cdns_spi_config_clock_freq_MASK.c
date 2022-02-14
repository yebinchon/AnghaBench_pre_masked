
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {unsigned long speed_hz; } ;
struct spi_device {int master; } ;
struct cdns_spi {unsigned long speed_hz; int ref_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cdns_spi*,int ) ;
 int FUNC_1 (struct cdns_spi*,int ,int) ;
 unsigned long FUNC_2 (int ) ;
 struct cdns_spi* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_5,
           struct spi_transfer *VAR_6)
{
 struct cdns_spi *VAR_7 = FUNC_3(VAR_5->master);
 u32 VAR_8, VAR_9;
 unsigned long VAR_10;

 VAR_10 = FUNC_2(VAR_7->ref_clk);

 VAR_8 = FUNC_0(VAR_7, VAR_3);


 if (VAR_7->speed_hz != VAR_6->speed_hz) {

  VAR_9 = VAR_1;
  while ((VAR_9 < VAR_0) &&
         (VAR_10 / (2 << VAR_9)) > VAR_6->speed_hz)
   VAR_9++;

  VAR_8 &= ~VAR_4;
  VAR_8 |= VAR_9 << VAR_2;

  VAR_7->speed_hz = VAR_10 / (2 << VAR_9);
 }
 FUNC_1(VAR_7, VAR_3, VAR_8);
}
