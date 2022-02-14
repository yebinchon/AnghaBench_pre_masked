
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned long u32 ;
struct spi_master {int max_speed_hz; int min_speed_hz; } ;
struct ep93xx_spi {int clk; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int ,int ) ;
 unsigned long FUNC_1 (int ) ;
 struct ep93xx_spi* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static int FUNC_3(struct spi_master *VAR_1,
        u32 VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct ep93xx_spi *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6 = FUNC_1(VAR_5->clk);
 int VAR_7, VAR_8;





 VAR_2 = FUNC_0(VAR_2, VAR_1->min_speed_hz, VAR_1->max_speed_hz);
 for (VAR_7 = 2; VAR_7 <= 254; VAR_7 += 2) {
  for (VAR_8 = 0; VAR_8 <= 255; VAR_8++) {
   if ((VAR_6 / (VAR_7 * (VAR_8 + 1))) <= VAR_2) {
    *VAR_4 = (u8)VAR_8;
    *VAR_3 = (u8)VAR_7;
    return 0;
   }
  }
 }

 return -VAR_0;
}
