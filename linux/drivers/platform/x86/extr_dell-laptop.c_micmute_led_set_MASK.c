
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct calling_interface_token {int value; int location; } ;
struct calling_interface_buffer {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct calling_interface_buffer*,int ,int ,int ,int ) ;
 int FUNC_1 (struct calling_interface_buffer*,int ,int ) ;
 struct calling_interface_token* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_6,
      enum led_brightness VAR_7)
{
 struct calling_interface_buffer VAR_8;
 struct calling_interface_token *VAR_9;
 int VAR_10 = VAR_7 != VAR_4;

 if (VAR_10 == 0)
  VAR_9 = FUNC_2(VAR_2);
 else
  VAR_9 = FUNC_2(VAR_3);

 if (!VAR_9)
  return -VAR_1;

 FUNC_0(&VAR_8, VAR_9->location, VAR_9->value, 0, 0);
 FUNC_1(&VAR_8, VAR_0, VAR_5);

 return 0;
}
