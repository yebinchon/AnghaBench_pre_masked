
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int mode; int dev; } ;
struct of_device_id {int dummy; } ;
struct cpcap_ddata {struct spi_device* spi; int regmap; int * regmap_conf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct cpcap_ddata*) ;
 int FUNC_4 (struct cpcap_ddata*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,char*,int) ;
 struct cpcap_ddata* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,int ,int ,int *,int ,int *) ;
 int FUNC_8 (struct spi_device*,int *) ;
 struct of_device_id* FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct spi_device*,struct cpcap_ddata*) ;
 int FUNC_12 (struct spi_device*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_8)
{
 const struct of_device_id *VAR_9;
 struct cpcap_ddata *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_9(FUNC_10(VAR_6), &VAR_8->dev);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->spi = VAR_8;
 FUNC_11(VAR_8, VAR_10);

 VAR_8->bits_per_word = 16;
 VAR_8->mode = VAR_4 | VAR_3;

 VAR_11 = FUNC_12(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10->regmap_conf = &VAR_7;
 VAR_10->regmap = FUNC_8(VAR_8, &VAR_7);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_11 = FUNC_2(VAR_10->regmap);
  FUNC_5(&VAR_10->spi->dev, "Failed to initialize regmap: %d\n",
   VAR_11);

  return VAR_11;
 }

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11) {
  FUNC_5(&VAR_10->spi->dev, "Failed to detect CPCAP: %i\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  return VAR_11;

 return FUNC_7(&VAR_8->dev, 0, VAR_5,
        FUNC_0(VAR_5), ((void*)0), 0, ((void*)0));
}
