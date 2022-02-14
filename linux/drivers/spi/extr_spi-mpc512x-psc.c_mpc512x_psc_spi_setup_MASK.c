
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int mode; int max_speed_hz; struct mpc512x_psc_spi_cs* controller_state; int cs_gpio; int dev; } ;
struct mpc512x_psc_spi_cs {int bits_per_word; int speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mpc512x_psc_spi_cs*) ;
 struct mpc512x_psc_spi_cs* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_4)
{
 struct mpc512x_psc_spi_cs *VAR_5 = VAR_4->controller_state;
 int VAR_6;

 if (VAR_4->bits_per_word % 8)
  return -VAR_0;

 if (!VAR_5) {
  VAR_5 = FUNC_6(sizeof *VAR_5, VAR_2);
  if (!VAR_5)
   return -VAR_1;

  if (FUNC_3(VAR_4->cs_gpio)) {
   VAR_6 = FUNC_4(VAR_4->cs_gpio, FUNC_1(&VAR_4->dev));
   if (VAR_6) {
    FUNC_0(&VAR_4->dev, "can't get CS gpio: %d\n",
     VAR_6);
    FUNC_5(VAR_5);
    return VAR_6;
   }
   FUNC_2(VAR_4->cs_gpio,
     VAR_4->mode & VAR_3 ? 0 : 1);
  }

  VAR_4->controller_state = VAR_5;
 }

 VAR_5->bits_per_word = VAR_4->bits_per_word;
 VAR_5->speed_hz = VAR_4->max_speed_hz;

 return 0;
}
