
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm3225a_data {int power; } ;
struct lcd_device {int dummy; } ;


 struct otm3225a_data* FUNC_0 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_1(struct lcd_device *VAR_0)
{
 struct otm3225a_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->power;
}
