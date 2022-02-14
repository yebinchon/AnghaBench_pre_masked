
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm3225a_data {int power; int spi; } ;
struct lcd_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct otm3225a_data* FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct lcd_device *VAR_3, int VAR_4)
{
 struct otm3225a_data *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 == VAR_5->power)
  return 0;

 if (VAR_4 > VAR_0)
  FUNC_2(VAR_5->spi, VAR_1, FUNC_0(VAR_1));
 else
  FUNC_2(VAR_5->spi, VAR_2, FUNC_0(VAR_2));
 VAR_5->power = VAR_4;

 return 0;
}
