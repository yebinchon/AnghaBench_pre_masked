
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_driver {int (* remove ) (int ) ;} ;
struct device {int driver; } ;


 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct spi_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 const struct spi_driver *VAR_1 = FUNC_3(VAR_0->driver);
 int VAR_2;

 VAR_2 = VAR_1->remove(FUNC_2(VAR_0));
 FUNC_0(VAR_0, 1);

 return VAR_2;
}
