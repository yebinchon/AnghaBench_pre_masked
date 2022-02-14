
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int chip_select; int master; } ;
struct sc18is602 {scalar_t__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sc18is602* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_2)
{
 struct sc18is602 *VAR_3 = FUNC_0(VAR_2->master);


 if (VAR_3->id == VAR_1 && VAR_2->chip_select == 2)
  return -VAR_0;

 return 0;
}
