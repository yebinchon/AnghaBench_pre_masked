
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int max_speed_hz; int dev; } ;
struct mt7621_spi {int sys_freq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct mt7621_spi* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 struct mt7621_spi *VAR_2 = FUNC_1(VAR_1);

 if ((VAR_1->max_speed_hz == 0) ||
     (VAR_1->max_speed_hz > (VAR_2->sys_freq / 2)))
  VAR_1->max_speed_hz = VAR_2->sys_freq / 2;

 if (VAR_1->max_speed_hz < (VAR_2->sys_freq / 4097)) {
  FUNC_0(&VAR_1->dev, "setup: requested speed is too low %d Hz\n",
   VAR_1->max_speed_hz);
  return -VAR_0;
 }

 return 0;
}
