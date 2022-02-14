
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dummy; } ;
struct l4f00242t03_priv {int lcd_state; } ;


 struct l4f00242t03_priv* FUNC_0 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_1(struct lcd_device *VAR_0)
{
 struct l4f00242t03_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->lcd_state;
}
