
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int spi; } ;
struct spi_master {int dummy; } ;
struct geni_se {int dummy; } ;
struct spi_geni_master {int dev; struct geni_se se; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct geni_se*,int ) ;
 int FUNC_2 (int ,struct spi_master*) ;
 struct spi_geni_master* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_1,
     struct spi_message *VAR_2)
{
 int VAR_3;
 struct spi_geni_master *VAR_4 = FUNC_3(VAR_1);
 struct geni_se *VAR_5 = &VAR_4->se;

 FUNC_1(VAR_5, VAR_0);
 VAR_3 = FUNC_2(VAR_2->spi, VAR_1);
 if (VAR_3)
  FUNC_0(VAR_4->dev, "Couldn't select mode %d\n", VAR_3);
 return VAR_3;
}
