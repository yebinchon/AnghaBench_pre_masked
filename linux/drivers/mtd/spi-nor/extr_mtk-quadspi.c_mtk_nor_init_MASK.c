
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_nor_hwcaps {int mask; } ;
struct TYPE_2__ {char* name; } ;
struct spi_nor {TYPE_1__ mtd; int write_reg; int write; int read_reg; int read; struct mtk_nor* priv; int dev; } ;
struct mtk_nor {int dev; struct spi_nor nor; scalar_t__ base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct spi_nor*,int *,struct spi_nor_hwcaps const*) ;
 int FUNC_2 (struct spi_nor*,struct device_node*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mtk_nor *VAR_10,
   struct device_node *VAR_11)
{
 const struct spi_nor_hwcaps VAR_12 = {
  .mask = VAR_3 |
   VAR_5 |
   VAR_4 |
   VAR_2,
 };
 int VAR_13;
 struct spi_nor *VAR_14;


 FUNC_3(VAR_0, VAR_10->base + VAR_1);

 VAR_14 = &VAR_10->nor;
 VAR_14->dev = VAR_10->dev;
 VAR_14->priv = VAR_10;
 FUNC_2(VAR_14, VAR_11);


 VAR_14->read = VAR_6;
 VAR_14->read_reg = VAR_7;
 VAR_14->write = VAR_8;
 VAR_14->write_reg = VAR_9;
 VAR_14->mtd.name = "mtk_nor";

 VAR_13 = FUNC_1(VAR_14, ((void*)0), &VAR_12);
 if (VAR_13)
  return VAR_13;

 return FUNC_0(&VAR_14->mtd, ((void*)0), 0);
}
