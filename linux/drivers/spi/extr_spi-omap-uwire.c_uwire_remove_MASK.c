
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwire_spi {int bitbang; } ;
struct platform_device {int dummy; } ;


 struct uwire_spi* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwire_spi*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct uwire_spi *VAR_1 = FUNC_0(VAR_0);



 FUNC_1(&VAR_1->bitbang);
 FUNC_2(VAR_1);
 return 0;
}
