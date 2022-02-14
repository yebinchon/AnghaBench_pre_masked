
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spinand_device {int lock; struct spi_mem* spimem; } ;
struct spi_mem {TYPE_2__* spi; } ;
struct TYPE_4__ {TYPE_3__* parent; } ;
struct mtd_info {TYPE_1__ dev; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spinand_device* FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (struct mtd_info*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_mem*,struct spinand_device*) ;
 int FUNC_4 (struct spinand_device*) ;
 int FUNC_5 (struct spinand_device*) ;
 int FUNC_6 (struct spinand_device*,int ) ;
 struct mtd_info* FUNC_7 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_mem *VAR_2)
{
 struct spinand_device *VAR_3;
 struct mtd_info *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(&VAR_2->spi->dev, sizeof(*VAR_3),
          VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->spimem = VAR_2;
 FUNC_3(VAR_2, VAR_3);
 FUNC_6(VAR_3, VAR_2->spi->dev.of_node);
 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_7(VAR_3);
 VAR_4->dev.parent = &VAR_2->spi->dev;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4, ((void*)0), 0);
 if (VAR_5)
  goto err_spinand_cleanup;

 return 0;

err_spinand_cleanup:
 FUNC_4(VAR_3);

 return VAR_5;
}
