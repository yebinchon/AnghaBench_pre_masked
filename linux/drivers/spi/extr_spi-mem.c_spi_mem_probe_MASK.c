
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_mem_driver {int (* probe ) (struct spi_mem*) ;} ;
struct spi_mem {int name; struct spi_device* spi; } ;
struct TYPE_5__ {int driver; } ;
struct spi_device {TYPE_2__ dev; struct spi_controller* controller; } ;
struct spi_controller {TYPE_1__* mem_ops; } ;
struct TYPE_4__ {int (* get_name ) (struct spi_mem*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 struct spi_mem* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct spi_device*,struct spi_mem*) ;
 int FUNC_5 (struct spi_mem*) ;
 int FUNC_6 (struct spi_mem*) ;
 struct spi_mem_driver* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_2)
{
 struct spi_mem_driver *VAR_3 = FUNC_7(VAR_2->dev.driver);
 struct spi_controller *VAR_4 = VAR_2->controller;
 struct spi_mem *VAR_5;

 VAR_5 = FUNC_3(&VAR_2->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->spi = VAR_2;

 if (VAR_4->mem_ops && VAR_4->mem_ops->get_name)
  VAR_5->name = VAR_4->mem_ops->get_name(VAR_5);
 else
  VAR_5->name = FUNC_2(&VAR_2->dev);

 if (FUNC_0(VAR_5->name))
  return FUNC_1(VAR_5->name);

 FUNC_4(VAR_2, VAR_5);

 return VAR_3->probe(VAR_5);
}
