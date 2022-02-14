
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int mode; scalar_t__ controller_state; int master; } ;
struct omap2_mcspi {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct omap2_mcspi* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct spi_device *VAR_2, bool VAR_3)
{
 struct omap2_mcspi *VAR_4 = FUNC_7(VAR_2->master);
 u32 VAR_5;





 if (VAR_2->mode & VAR_1)
  VAR_3 = !VAR_3;

 if (VAR_2->controller_state) {
  int VAR_6 = FUNC_3(VAR_4->dev);
  if (VAR_6 < 0) {
   FUNC_6(VAR_4->dev);
   FUNC_0(VAR_4->dev, "failed to get sync: %d\n", VAR_6);
   return;
  }

  VAR_5 = FUNC_1(VAR_2);

  if (VAR_3)
   VAR_5 &= ~VAR_0;
  else
   VAR_5 |= VAR_0;

  FUNC_2(VAR_2, VAR_5);

  FUNC_4(VAR_4->dev);
  FUNC_5(VAR_4->dev);
 }
}
