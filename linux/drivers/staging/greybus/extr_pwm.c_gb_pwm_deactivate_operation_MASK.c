
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct gbphy_device {int dummy; } ;
struct gb_pwm_deactivate_request {scalar_t__ which; } ;
struct TYPE_2__ {int dev; } ;
struct gb_pwm_chip {scalar_t__ pwm_max; int connection; TYPE_1__ chip; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct gb_pwm_deactivate_request*,int,int *,int ) ;
 int FUNC_1 (struct gbphy_device*) ;
 int FUNC_2 (struct gbphy_device*) ;
 struct gbphy_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gb_pwm_chip *VAR_2,
           u8 VAR_3)
{
 struct gb_pwm_deactivate_request VAR_4;
 struct gbphy_device *VAR_5;
 int VAR_6;

 if (VAR_3 > VAR_2->pwm_max)
  return -VAR_0;

 VAR_4.which = VAR_3;

 VAR_5 = FUNC_3(VAR_2->chip.dev);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2->connection, VAR_1,
    &VAR_4, sizeof(VAR_4), ((void*)0), 0);

 FUNC_2(VAR_5);

 return VAR_6;
}
