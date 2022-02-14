
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct at803x_context {int led_control; int smart_speed; int int_enable; int control1000; int advertise; int bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_6,
       const struct at803x_context *VAR_7)
{
 FUNC_0(VAR_6, VAR_4, VAR_7->bmcr);
 FUNC_0(VAR_6, VAR_3, VAR_7->advertise);
 FUNC_0(VAR_6, VAR_5, VAR_7->control1000);
 FUNC_0(VAR_6, VAR_0, VAR_7->int_enable);
 FUNC_0(VAR_6, VAR_2, VAR_7->smart_speed);
 FUNC_0(VAR_6, VAR_1, VAR_7->led_control);
}
