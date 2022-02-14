
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_1)
{
 int VAR_2;

 FUNC_1(0x03, 0x52f);
 FUNC_1(0xbf, 0x52e);
 VAR_2 = FUNC_0(0x52f) >> 4;

 if (VAR_0)
  FUNC_2("read brightness of %d\n", VAR_2);

 return VAR_2;
}
