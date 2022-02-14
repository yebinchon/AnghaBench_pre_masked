
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipaq_micro_msg {int tx_len; int* tx_data; int id; } ;
struct ipaq_micro {int dummy; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_1__ props; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ipaq_micro* FUNC_0 (int *) ;
 int FUNC_1 (struct ipaq_micro*,struct ipaq_micro_msg*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_4)
{
 struct ipaq_micro *VAR_5 = FUNC_0(&VAR_4->dev);
 int VAR_6 = VAR_4->props.brightness;
 struct ipaq_micro_msg VAR_7 = {
  .id = VAR_3,
  .tx_len = 3,
 };

 if (VAR_4->props.power != VAR_2)
  VAR_6 = 0;
 if (VAR_4->props.state & (VAR_0 | VAR_1))
  VAR_6 = 0;







 VAR_7.tx_data[0] = 0x01;
 VAR_7.tx_data[1] = VAR_6 > 0 ? 1 : 0;
 VAR_7.tx_data[2] = VAR_6;
 return FUNC_1(VAR_5, &VAR_7);
}
