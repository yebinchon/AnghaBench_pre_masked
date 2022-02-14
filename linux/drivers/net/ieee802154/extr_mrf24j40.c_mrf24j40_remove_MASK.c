
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct mrf24j40 {int hw; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mrf24j40*) ;
 struct mrf24j40* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct mrf24j40 *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(FUNC_3(VAR_1), "remove\n");

 FUNC_2(VAR_1->hw);
 FUNC_1(VAR_1->hw);



 return 0;
}
