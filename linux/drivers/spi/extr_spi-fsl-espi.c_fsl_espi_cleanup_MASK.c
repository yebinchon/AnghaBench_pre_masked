
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct fsl_espi_cs {int dummy; } ;


 int FUNC_0 (struct fsl_espi_cs*) ;
 struct fsl_espi_cs* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,int *) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_0)
{
 struct fsl_espi_cs *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);
 FUNC_2(VAR_0, ((void*)0));
}
