
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; } ;
struct spi_master {scalar_t__ (* can_dma ) (struct spi_master*,struct spi_device*,struct spi_transfer*) ;} ;
struct spi_device {int master; } ;
struct img_spfi {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_3 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 struct img_spfi* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_2,
     struct spi_device *VAR_3,
     struct spi_transfer *VAR_4)
{
 struct img_spfi *VAR_5 = FUNC_4(VAR_3->master);
 int VAR_6;

 if (VAR_4->len > VAR_1) {
  FUNC_0(VAR_5->dev,
   "Transfer length (%d) is greater than the max supported (%d)",
   VAR_4->len, VAR_1);
  return -VAR_0;
 }

 FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_2->can_dma && VAR_2->can_dma(VAR_2, VAR_3, VAR_4))
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 else
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);

 return VAR_6;
}
