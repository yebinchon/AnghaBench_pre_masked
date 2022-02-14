
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_5)
{
 u32 VAR_6 = VAR_4 + VAR_1;
 u32 VAR_7 = FUNC_0(VAR_6);
 u8 VAR_8;

 if (VAR_7 & VAR_0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;

 return VAR_8;
}
