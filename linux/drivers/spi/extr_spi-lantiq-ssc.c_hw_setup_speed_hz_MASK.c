
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct lantiq_ssc_spi {int dev; int fpi_clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct lantiq_ssc_spi const*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(const struct lantiq_ssc_spi *VAR_1,
         unsigned int VAR_2)
{
 u32 VAR_3, VAR_4;
 VAR_3 = FUNC_0(VAR_1->fpi_clk) / 2;

 if (VAR_2 > VAR_3)
  VAR_4 = 0;
 else
  VAR_4 = VAR_3 / VAR_2 - 1;

 if (VAR_4 > 0xFFFF)
  VAR_4 = 0xFFFF;

 FUNC_1(VAR_1->dev, "spi_clk %u, max_speed_hz %u, brt %u\n",
  VAR_3, VAR_2, VAR_4);

 FUNC_2(VAR_1, VAR_4, VAR_0);
}
