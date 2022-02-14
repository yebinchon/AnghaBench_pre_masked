
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lpspi_config {unsigned int speed_hz; int prescale; } ;
struct fsl_lpspi_data {int dev; scalar_t__ base; struct lpspi_config config; int clk_per; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int* VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,int,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fsl_lpspi_data *VAR_3)
{
 struct lpspi_config VAR_4 = VAR_3->config;
 unsigned int VAR_5, VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_0(VAR_3->clk_per);

 if (VAR_4.speed_hz > VAR_5 / 2) {
  FUNC_2(VAR_3->dev,
        "per-clk should be at least two times of transfer speed");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_6 = VAR_5 /
    (VAR_2[VAR_7] * VAR_4.speed_hz) - 2;
  if (VAR_6 < 256) {
   VAR_3->config.prescale = VAR_7;
   break;
  }
 }

 if (VAR_7 == 8 && VAR_6 >= 256)
  return -VAR_0;

 FUNC_3(VAR_6 | (VAR_6 << 8) | ((VAR_6 >> 1) << 16),
     VAR_3->base + VAR_1);

 FUNC_1(VAR_3->dev, "perclk=%d, speed=%d, prescale=%d, scldiv=%d\n",
  VAR_5, VAR_4.speed_hz, VAR_7, VAR_6);

 return 0;
}
