
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct spi_bitbang {int lock; scalar_t__ busy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct spi_bitbang* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static int FUNC_3(struct spi_master *VAR_0)
{
 struct spi_bitbang *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->lock);
 VAR_1->busy = 0;
 FUNC_1(&VAR_1->lock);

 return 0;
}
