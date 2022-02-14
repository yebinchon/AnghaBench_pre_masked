
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct corgi_lcd {int lcd_dev; TYPE_2__* bl_dev; } ;
struct TYPE_3__ {scalar_t__ brightness; int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 struct corgi_lcd* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2)
{
 struct corgi_lcd *VAR_3 = FUNC_2(VAR_2);

 VAR_3->bl_dev->props.power = VAR_1;
 VAR_3->bl_dev->props.brightness = 0;
 FUNC_0(VAR_3->bl_dev);
 FUNC_1(VAR_3->lcd_dev, VAR_0);
 return 0;
}
