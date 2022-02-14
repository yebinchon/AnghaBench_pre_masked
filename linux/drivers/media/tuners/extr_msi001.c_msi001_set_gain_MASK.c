
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int dev; } ;
struct msi001_dev {struct spi_device* spi; } ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct msi001_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct msi001_dev *VAR_0, int VAR_1, int VAR_2,
      int VAR_3)
{
 struct spi_device *VAR_4 = VAR_0->spi;
 int VAR_5;
 u32 VAR_6;

 FUNC_0(&VAR_4->dev, "lna=%d mixer=%d if=%d\n",
  VAR_1, VAR_2, VAR_3);

 VAR_6 = 1 << 0;
 VAR_6 |= (59 - VAR_3) << 4;
 VAR_6 |= 0 << 10;
 VAR_6 |= (1 - VAR_2) << 12;
 VAR_6 |= (1 - VAR_1) << 13;
 VAR_6 |= 4 << 14;
 VAR_6 |= 0 << 17;
 VAR_5 = FUNC_1(VAR_0, VAR_6);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed %d\n", VAR_5);
 return VAR_5;
}
