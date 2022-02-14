
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_spi {int hclk; int mclk; } ;
struct spi_master {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct spi_master* FUNC_3 (struct device*) ;
 struct sun4i_spi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct sun4i_spi*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4)
{
 struct spi_master *VAR_5 = FUNC_3(VAR_4);
 struct sun4i_spi *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6->hclk);
 if (VAR_7) {
  FUNC_2(VAR_4, "Couldn't enable AHB clock\n");
  goto out;
 }

 VAR_7 = FUNC_1(VAR_6->mclk);
 if (VAR_7) {
  FUNC_2(VAR_4, "Couldn't enable module clock\n");
  goto err;
 }

 FUNC_5(VAR_6, VAR_2,
   VAR_0 | VAR_1 | VAR_3);

 return 0;

err:
 FUNC_0(VAR_6->hclk);
out:
 return VAR_7;
}
