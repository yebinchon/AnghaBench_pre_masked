
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spi_nor_hwcaps {int mask; } ;
struct TYPE_6__ {scalar_t__ name; } ;
struct spi_nor {scalar_t__ page_size; scalar_t__ bouncebuf_size; TYPE_1__ mtd; int bouncebuf; TYPE_2__* dev; struct spi_mem* spimem; } ;
struct spi_mem {struct spi_device* spi; } ;
struct TYPE_7__ {int of_node; } ;
struct spi_device {char* modalias; TYPE_2__ dev; } ;
struct flash_platform_data {char* type; int nr_parts; int * parts; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct flash_platform_data* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 struct spi_nor* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_5 (struct spi_mem*) ;
 int FUNC_6 (struct spi_mem*,struct spi_nor*) ;
 int FUNC_7 (struct spi_nor*,char*,struct spi_nor_hwcaps const*) ;
 int FUNC_8 (struct spi_nor*,int ) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(struct spi_mem *VAR_4)
{
 struct spi_device *VAR_5 = VAR_4->spi;
 struct flash_platform_data *VAR_6 = FUNC_0(&VAR_5->dev);
 struct spi_nor *VAR_7;




 const struct spi_nor_hwcaps VAR_8 = { .mask = VAR_3 };
 char *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->spimem = VAR_4;
 VAR_7->dev = &VAR_5->dev;
 FUNC_8(VAR_7, VAR_5->dev.of_node);

 FUNC_6(VAR_4, VAR_7);

 if (VAR_6 && VAR_6->name)
  VAR_7->mtd.name = VAR_6->name;

 if (!VAR_7->mtd.name)
  VAR_7->mtd.name = FUNC_5(VAR_4);







 if (VAR_6 && VAR_6->type)
  VAR_9 = VAR_6->type;
 else if (!FUNC_9(VAR_5->modalias, "spi-nor"))
  VAR_9 = ((void*)0);
 else
  VAR_9 = VAR_5->modalias;

 VAR_10 = FUNC_7(VAR_7, VAR_9, &VAR_8);
 if (VAR_10)
  return VAR_10;






 if (VAR_7->page_size > VAR_2) {
  VAR_7->bouncebuf_size = VAR_7->page_size;
  FUNC_1(VAR_7->dev, VAR_7->bouncebuf);
  VAR_7->bouncebuf = FUNC_2(VAR_7->dev,
           VAR_7->bouncebuf_size,
           VAR_1);
  if (!VAR_7->bouncebuf)
   return -VAR_0;
 }

 return FUNC_4(&VAR_7->mtd, VAR_6 ? VAR_6->parts : ((void*)0),
       VAR_6 ? VAR_6->nr_parts : 0);
}
