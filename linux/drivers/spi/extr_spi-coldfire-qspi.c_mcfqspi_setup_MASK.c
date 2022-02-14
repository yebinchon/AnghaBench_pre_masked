
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int max_speed_hz; int chip_select; int bits_per_word; int dev; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_2)
{
 FUNC_1(FUNC_3(VAR_2->master),
       VAR_2->chip_select, VAR_2->mode & VAR_1);

 FUNC_0(&VAR_2->dev,
   "bits per word %d, chip select %d, speed %d KHz\n",
   VAR_2->bits_per_word, VAR_2->chip_select,
   (VAR_0 / FUNC_2(VAR_2->max_speed_hz))
   / 1000);

 return 0;
}
