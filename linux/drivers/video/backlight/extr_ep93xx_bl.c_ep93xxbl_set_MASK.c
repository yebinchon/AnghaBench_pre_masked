
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xxbl {int brightness; int mmio; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 struct ep93xxbl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1, int VAR_2)
{
 struct ep93xxbl *VAR_3 = FUNC_0(VAR_1);

 FUNC_1((VAR_2 << 8) | VAR_0, VAR_3->mmio);

 VAR_3->brightness = VAR_2;

 return 0;
}
