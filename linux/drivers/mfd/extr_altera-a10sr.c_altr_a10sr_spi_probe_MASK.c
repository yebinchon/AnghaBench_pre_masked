
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int dev; int mode; } ;
struct altr_a10sr {int * dev; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,int) ;
 struct altr_a10sr* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct spi_device*,int *) ;
 int FUNC_7 (struct spi_device*,struct altr_a10sr*) ;
 int FUNC_8 (struct spi_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_6)
{
 int VAR_7;
 struct altr_a10sr *VAR_8;

 VAR_8 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8),
        VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_6->mode = VAR_3;
 VAR_6->bits_per_word = 8;
 FUNC_8(VAR_6);

 VAR_8->dev = &VAR_6->dev;

 FUNC_7(VAR_6, VAR_8);

 VAR_8->regmap = FUNC_6(VAR_6, &VAR_4);
 if (FUNC_1(VAR_8->regmap)) {
  VAR_7 = FUNC_2(VAR_8->regmap);
  FUNC_3(&VAR_6->dev, "Failed to allocate register map: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_5(VAR_8->dev, VAR_2,
       VAR_5,
       FUNC_0(VAR_5),
       ((void*)0), 0, ((void*)0));
 if (VAR_7)
  FUNC_3(VAR_8->dev, "Failed to register sub-devices: %d\n",
   VAR_7);

 return VAR_7;
}
