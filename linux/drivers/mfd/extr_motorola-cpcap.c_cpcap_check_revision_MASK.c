
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct cpcap_ddata {TYPE_1__* spi; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (int *,char*,...) ;

__attribute__((used)) static int FUNC_5(struct cpcap_ddata *VAR_3)
{
 u16 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_3->spi->dev, VAR_3->regmap, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(&VAR_3->spi->dev, VAR_3->regmap, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_4(&VAR_3->spi->dev, "CPCAP vendor: %s rev: %i.%i (%x)\n",
   VAR_4 == VAR_1 ? "ST" : "TI",
   FUNC_0(VAR_5), FUNC_1(VAR_5),
   VAR_5);

 if (VAR_5 < VAR_0) {
  FUNC_4(&VAR_3->spi->dev,
    "Please add old CPCAP revision support as needed\n");
  return -VAR_2;
 }

 return 0;
}
