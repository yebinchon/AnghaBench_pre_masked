
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tle62x0_state {int nr_gpio; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int ** VAR_1 ;
 int FUNC_1 (struct tle62x0_state*) ;
 struct tle62x0_state* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2)
{
 struct tle62x0_state *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_gpio; VAR_4++)
  FUNC_0(&VAR_2->dev, VAR_1[VAR_4]);

 FUNC_0(&VAR_2->dev, &VAR_0);
 FUNC_1(VAR_3);
 return 0;
}
