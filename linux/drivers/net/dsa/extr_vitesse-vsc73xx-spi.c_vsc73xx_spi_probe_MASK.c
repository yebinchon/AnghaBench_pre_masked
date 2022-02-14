
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; struct vsc73xx_spi* priv; struct device* dev; } ;
struct vsc73xx_spi {TYPE_1__ vsc; int lock; int spi; } ;
struct device {int dummy; } ;
struct spi_device {int bits_per_word; int mode; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct vsc73xx_spi* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_device*) ;
 int FUNC_4 (struct spi_device*,struct vsc73xx_spi*) ;
 int FUNC_5 (struct spi_device*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct vsc73xx_spi *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_4, VAR_6);
 VAR_6->spi = FUNC_3(VAR_4);
 VAR_6->vsc.dev = VAR_5;
 VAR_6->vsc.priv = VAR_6;
 VAR_6->vsc.ops = &VAR_3;
 FUNC_2(&VAR_6->lock);

 VAR_4->mode = VAR_2;
 VAR_4->bits_per_word = 8;
 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5, "spi setup failed.\n");
  return VAR_7;
 }

 return FUNC_6(&VAR_6->vsc);
}
