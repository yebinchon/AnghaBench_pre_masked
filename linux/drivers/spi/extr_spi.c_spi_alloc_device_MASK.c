
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int release; int * bus; int * parent; } ;
struct TYPE_3__ {int lock; } ;
struct spi_device {TYPE_2__ dev; TYPE_1__ statistics; int cs_gpio; struct spi_controller* controller; struct spi_controller* master; } ;
struct spi_controller {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct spi_device* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct spi_controller*) ;
 int FUNC_3 (struct spi_controller*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

struct spi_device *FUNC_5(struct spi_controller *VAR_4)
{
 struct spi_device *VAR_5;

 if (!FUNC_2(VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 VAR_5->master = VAR_5->controller = VAR_4;
 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.bus = &VAR_2;
 VAR_5->dev.release = VAR_3;
 VAR_5->cs_gpio = -VAR_0;

 FUNC_4(&VAR_5->statistics.lock);

 FUNC_0(&VAR_5->dev);
 return VAR_5;
}
