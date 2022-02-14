
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9spi {int lock; } ;
struct spi_device {int max_speed_hz; int mode; int dev; int chip_select; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct txx9spi* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_device*,struct txx9spi*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_3)
{
 struct txx9spi *VAR_4 = FUNC_2(VAR_3->master);

 if (!VAR_3->max_speed_hz)
  return -VAR_0;

 if (FUNC_1(VAR_3->chip_select,
   !(VAR_3->mode & VAR_2))) {
  FUNC_0(&VAR_3->dev, "Cannot setup GPIO for chipselect.\n");
  return -VAR_0;
 }


 FUNC_3(&VAR_4->lock);
 FUNC_5(VAR_3, VAR_4, 0, (VAR_1 / 2) / VAR_3->max_speed_hz);
 FUNC_4(&VAR_4->lock);

 return 0;
}
