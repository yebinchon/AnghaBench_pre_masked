
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; int * class; } ;
struct spi_controller {int bus_num; int num_chipselect; int slave; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 size_t FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 struct spi_controller* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct spi_controller*,void*) ;
 int VAR_2 ;
 int VAR_3 ;

struct spi_controller *FUNC_7(struct device *VAR_4,
           unsigned int VAR_5, bool VAR_6)
{
 struct spi_controller *VAR_7;
 size_t VAR_8 = FUNC_0(sizeof(*VAR_7), FUNC_3());

 if (!VAR_4)
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_5 + VAR_8, VAR_1);
 if (!VAR_7)
  return ((void*)0);

 FUNC_2(&VAR_7->dev);
 VAR_7->bus_num = -1;
 VAR_7->num_chipselect = 1;
 VAR_7->slave = VAR_6;
 if (FUNC_1(VAR_0) && VAR_6)
  VAR_7->dev.class = &VAR_3;
 else
  VAR_7->dev.class = &VAR_2;
 VAR_7->dev.parent = VAR_4;
 FUNC_5(&VAR_7->dev, 1);
 FUNC_6(VAR_7, (void *)VAR_7 + VAR_8);

 return VAR_7;
}
