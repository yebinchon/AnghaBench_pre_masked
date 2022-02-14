
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct at803x_context {void* led_control; void* smart_speed; void* int_enable; void* control1000; void* advertise; void* bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_6,
    struct at803x_context *VAR_7)
{
 VAR_7->bmcr = FUNC_0(VAR_6, VAR_4);
 VAR_7->advertise = FUNC_0(VAR_6, VAR_3);
 VAR_7->control1000 = FUNC_0(VAR_6, VAR_5);
 VAR_7->int_enable = FUNC_0(VAR_6, VAR_0);
 VAR_7->smart_speed = FUNC_0(VAR_6, VAR_2);
 VAR_7->led_control = FUNC_0(VAR_6, VAR_1);
}
