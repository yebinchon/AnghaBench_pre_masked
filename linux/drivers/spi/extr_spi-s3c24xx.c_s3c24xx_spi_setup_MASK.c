
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {struct s3c24xx_spi_devstate* controller_state; int dev; } ;
struct s3c24xx_spi_devstate {int hz; int spcon; } ;
struct TYPE_2__ {int lock; int (* chipselect ) (struct spi_device*,int ) ;int busy; } ;
struct s3c24xx_spi {TYPE_1__ bitbang; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct s3c24xx_spi_devstate* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_device*,int *) ;
 int FUNC_4 (struct spi_device*,int ) ;
 struct s3c24xx_spi* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_4)
{
 struct s3c24xx_spi_devstate *VAR_5 = VAR_4->controller_state;
 struct s3c24xx_spi *VAR_6 = FUNC_5(VAR_4);
 int VAR_7;


 if (!VAR_5) {
  VAR_5 = FUNC_0(&VAR_4->dev,
      sizeof(struct s3c24xx_spi_devstate),
      VAR_2);
  if (!VAR_5)
   return -VAR_1;

  VAR_5->spcon = VAR_3;
  VAR_5->hz = -1;
  VAR_4->controller_state = VAR_5;
 }


 VAR_7 = FUNC_3(VAR_4, ((void*)0));
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_6->bitbang.lock);
 if (!VAR_6->bitbang.busy) {
  VAR_6->bitbang.chipselect(VAR_4, VAR_0);

 }
 FUNC_2(&VAR_6->bitbang.lock);

 return 0;
}
