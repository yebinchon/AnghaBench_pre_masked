
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct gbphy_device {int dummy; } ;
struct gb_pwm_config_request {void* period; void* duty; scalar_t__ which; } ;
struct TYPE_2__ {int dev; } ;
struct gb_pwm_chip {scalar_t__ pwm_max; int connection; TYPE_1__ chip; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct gb_pwm_config_request*,int,int *,int ) ;
 int FUNC_2 (struct gbphy_device*) ;
 int FUNC_3 (struct gbphy_device*) ;
 struct gbphy_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gb_pwm_chip *VAR_2,
       u8 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct gb_pwm_config_request VAR_6;
 struct gbphy_device *VAR_7;
 int VAR_8;

 if (VAR_3 > VAR_2->pwm_max)
  return -VAR_0;

 VAR_6.which = VAR_3;
 VAR_6.duty = FUNC_0(VAR_4);
 VAR_6.period = FUNC_0(VAR_5);

 VAR_7 = FUNC_4(VAR_2->chip.dev);
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_2->connection, VAR_1,
    &VAR_6, sizeof(VAR_6), ((void*)0), 0);

 FUNC_3(VAR_7);

 return VAR_8;
}
