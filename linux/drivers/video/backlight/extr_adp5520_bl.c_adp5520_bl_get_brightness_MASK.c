
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct backlight_device {int dummy; } ;
struct adp5520_bl {int current_brightness; int master; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 struct adp5520_bl* FUNC_1 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct adp5520_bl *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;
 uint8_t VAR_4;

 VAR_3 = FUNC_0(VAR_2->master, VAR_0, &VAR_4);

 return VAR_3 ? VAR_2->current_brightness : VAR_4;
}
