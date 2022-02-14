
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {int lock; int regulator; int ddev; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct trf7970a* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct trf7970a*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_0)
{
 struct trf7970a *VAR_1 = FUNC_6(VAR_0);

 FUNC_1(&VAR_1->lock);

 FUNC_7(VAR_1);

 FUNC_2(&VAR_1->lock);

 FUNC_4(VAR_1->ddev);
 FUNC_3(VAR_1->ddev);

 FUNC_5(VAR_1->regulator);

 FUNC_0(&VAR_1->lock);

 return 0;
}
