
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int bits_per_word; int speed_hz; } ;
struct spi_mpc8xxx_cs {int hw_mode; } ;
struct spi_device {int bits_per_word; int max_speed_hz; int dev; int master; struct spi_mpc8xxx_cs* controller_state; } ;
struct mpc8xxx_spi {int flags; int spibrg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_device*) ;
 int FUNC_5 (struct spi_mpc8xxx_cs*,struct spi_device*,struct mpc8xxx_spi*,int) ;
 int FUNC_6 (struct spi_mpc8xxx_cs*,struct spi_device*,int) ;
 struct mpc8xxx_spi* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_3,
     struct spi_transfer *VAR_4)
{
 struct mpc8xxx_spi *VAR_5;
 int VAR_6 = 0;
 u8 VAR_7;
 u32 VAR_8 = 0;
 struct spi_mpc8xxx_cs *VAR_9 = VAR_3->controller_state;

 VAR_5 = FUNC_7(VAR_3->master);

 if (VAR_4) {
  VAR_6 = VAR_4->bits_per_word;
  VAR_8 = VAR_4->speed_hz;
 }


 if (!VAR_6)
  VAR_6 = VAR_3->bits_per_word;

 if (!VAR_8)
  VAR_8 = VAR_3->max_speed_hz;

 if (!(VAR_5->flags & VAR_0))
  VAR_6 = FUNC_5(VAR_9, VAR_3,
          VAR_5,
          VAR_6);
 else if (VAR_5->flags & VAR_1)
  VAR_6 = FUNC_6(VAR_9, VAR_3,
         VAR_6);

 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 == 32)
  VAR_6 = 0;
 else
  VAR_6 = VAR_6 - 1;


 VAR_9->hw_mode &= ~(FUNC_0(0xF) | VAR_2
      | FUNC_1(0xF));

 VAR_9->hw_mode |= FUNC_0(VAR_6);

 if ((VAR_5->spibrg / VAR_8) > 64) {
  VAR_9->hw_mode |= VAR_2;
  VAR_7 = (VAR_5->spibrg - 1) / (VAR_8 * 64) + 1;
  FUNC_2(VAR_7 > 16,
     "%s: Requested speed is too low: %d Hz. Will use %d Hz instead.\n",
     FUNC_3(&VAR_3->dev), VAR_8, VAR_5->spibrg / 1024);
  if (VAR_7 > 16)
   VAR_7 = 16;
 } else {
  VAR_7 = (VAR_5->spibrg - 1) / (VAR_8 * 4) + 1;
 }
 if (VAR_7)
  VAR_7--;

 VAR_9->hw_mode |= FUNC_1(VAR_7);

 FUNC_4(VAR_3);
 return 0;
}
