
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct spi_device {int mode; int cs_gpio; int master; struct mpc512x_psc_spi_cs* controller_state; } ;
struct mpc512x_psc_spi_cs {int speed_hz; int bits_per_word; } ;
struct mpc512x_psc_spi {int mclk_rate; int (* cs_control ) (struct spi_device*,int) ;int bits_per_word; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct mpc512x_psc_spi*,int) ;
 struct mpc512x_psc_spi* FUNC_4 (int ) ;
 int FUNC_5 (struct spi_device*,int) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_4)
{
 struct mpc512x_psc_spi_cs *VAR_5 = VAR_4->controller_state;
 struct mpc512x_psc_spi *VAR_6 = FUNC_4(VAR_4->master);
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;
 u16 VAR_10;

 VAR_7 = FUNC_1(FUNC_3(VAR_6, VAR_7));


 if (VAR_4->mode & VAR_0)
  VAR_7 |= 0x00001000;
 else
  VAR_7 &= ~0x00001000;

 if (VAR_4->mode & VAR_1)
  VAR_7 |= 0x00002000;
 else
  VAR_7 &= ~0x00002000;

 if (VAR_4->mode & VAR_3)
  VAR_7 |= 0x10000000;
 else
  VAR_7 &= ~0x10000000;
 FUNC_2(FUNC_3(VAR_6, VAR_7), VAR_7);

 VAR_8 = FUNC_1(FUNC_3(VAR_6, VAR_8));
 VAR_8 &= 0xFF000000;
 VAR_9 = VAR_5->speed_hz;
 if (!VAR_9)
  VAR_9 = 1000000;
 VAR_10 = (VAR_6->mclk_rate / VAR_9) - 1;

 VAR_8 |= (((VAR_10 & 0xff) << 16) | (((VAR_10 >> 8) & 0xff) << 8));
 FUNC_2(FUNC_3(VAR_6, VAR_8), VAR_8);
 VAR_6->bits_per_word = VAR_5->bits_per_word;

 if (VAR_6->cs_control && FUNC_0(VAR_4->cs_gpio))
  VAR_6->cs_control(VAR_4, (VAR_4->mode & VAR_2) ? 1 : 0);
}
