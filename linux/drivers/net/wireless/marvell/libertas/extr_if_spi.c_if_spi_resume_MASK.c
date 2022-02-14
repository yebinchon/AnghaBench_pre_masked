
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct if_spi_card {int resume_work; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct if_spi_card* FUNC_1 (struct spi_device*) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct spi_device *VAR_1 = FUNC_2(VAR_0);
 struct if_spi_card *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(&VAR_2->resume_work);

 return 0;
}
