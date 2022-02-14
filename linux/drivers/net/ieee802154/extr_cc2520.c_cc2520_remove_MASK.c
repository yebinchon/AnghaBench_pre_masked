
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct cc2520_private {int hw; int fifop_irqwork; int buffer_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct cc2520_private* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct cc2520_private *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(&VAR_1->buffer_mutex);
 FUNC_0(&VAR_1->fifop_irqwork);

 FUNC_2(VAR_1->hw);
 FUNC_1(VAR_1->hw);

 return 0;
}
