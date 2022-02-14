
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_spi_glue {int core; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct wl12xx_spi_glue* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 struct wl12xx_spi_glue *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->core);

 return 0;
}
