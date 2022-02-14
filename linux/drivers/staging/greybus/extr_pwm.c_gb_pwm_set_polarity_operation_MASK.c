
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct gbphy_device {int dummy; } ;
struct gb_pwm_polarity_request {scalar_t__ polarity; scalar_t__ which; } ;
struct TYPE_2__ {int dev; } ;
struct gb_pwm_chip {scalar_t__ pwm_max; int connection; TYPE_1__ chip; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct gb_pwm_polarity_request*,int,int *,int ) ;
 int FUNC_1 (struct gbphy_device*) ;
 int FUNC_2 (struct gbphy_device*) ;
 struct gbphy_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gb_pwm_chip *VAR_2,
      u8 VAR_3, u8 VAR_4)
{
 struct gb_pwm_polarity_request VAR_5;
 struct gbphy_device *VAR_6;
 int VAR_7;

 if (VAR_3 > VAR_2->pwm_max)
  return -VAR_0;

 VAR_5.which = VAR_3;
 VAR_5.polarity = VAR_4;

 VAR_6 = FUNC_3(VAR_2->chip.dev);
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_2->connection, VAR_1,
    &VAR_5, sizeof(VAR_5), ((void*)0), 0);

 FUNC_2(VAR_6);

 return VAR_7;
}
