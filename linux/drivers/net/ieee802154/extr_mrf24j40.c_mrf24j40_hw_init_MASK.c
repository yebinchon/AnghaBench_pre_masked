
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mrf24j40 {int regmap_long; TYPE_2__* spi; int regmap_short; } ;
struct TYPE_4__ {int dev; int irq; } ;
struct TYPE_3__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mrf24j40 *VAR_23)
{
 u32 VAR_24;
 int VAR_25;



 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_19, 0x07);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_7, 0x98);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_22, 0x95);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_long, VAR_8, 0x03);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_long, VAR_9, 0x01);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_long, VAR_10, 0x80);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_long, VAR_12, 0x90);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_long, VAR_13, 0x80);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_long, VAR_14, 0x10);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_long, VAR_18, 0x21);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_3, 0x80);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_5, 0x60);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_4, 0x40);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_15, 0x04);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_23->regmap_short, VAR_15, 0x0);
 if (VAR_25)
  goto err_ret;

 FUNC_5(192);


 VAR_25 = FUNC_2(VAR_23->regmap_short, VAR_16, 0x03, 0x00);
 if (VAR_25)
  goto err_ret;

 if (FUNC_4(VAR_23->spi)->driver_data == VAR_2) {



  FUNC_2(VAR_23->regmap_long, VAR_20, 0x07,
       0x07);


  FUNC_2(VAR_23->regmap_short, VAR_21, 0x08,
       0x08);


  FUNC_2(VAR_23->regmap_short, VAR_6, 0x08, 0x08);




  FUNC_3(VAR_23->regmap_long, VAR_11, 0x28);
 }

 VAR_24 = FUNC_1(VAR_23->spi->irq);
 if (VAR_24 == 129 ||
     VAR_24 == VAR_1)
  FUNC_0(&VAR_23->spi->dev,
    "Using edge triggered irq's are not recommended, because it can cause races and result in a non-functional driver!\n");
 switch (VAR_24) {
 case 129:
 case 128:

  VAR_25 = FUNC_2(VAR_23->regmap_long, VAR_17,
      VAR_0, VAR_0);
  if (VAR_25)
   goto err_ret;
  break;
 default:

  break;
 }

 return 0;

err_ret:
 return VAR_25;
}
