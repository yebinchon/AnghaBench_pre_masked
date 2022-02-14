
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_chip {int base; scalar_t__ npwm; int * ops; int * dev; } ;
struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int dev; TYPE_1__* cport_desc; int bundle; } ;
struct gb_pwm_chip {scalar_t__ pwm_max; struct pwm_chip chip; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int *,char*,int) ;
 struct gb_connection* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_connection*) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*,struct gb_pwm_chip*) ;
 int FUNC_8 (struct gbphy_device*,struct gb_pwm_chip*) ;
 int FUNC_9 (struct gb_pwm_chip*) ;
 int VAR_2 ;
 int FUNC_10 (struct gbphy_device*) ;
 int FUNC_11 (struct gb_pwm_chip*) ;
 struct gb_pwm_chip* FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_15(struct gbphy_device *VAR_3,
   const struct gbphy_device_id *VAR_4)
{
 struct gb_connection *VAR_5;
 struct gb_pwm_chip *VAR_6;
 struct pwm_chip *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_12(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3->bundle,
       FUNC_13(VAR_3->cport_desc->id),
       ((void*)0));
 if (FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5);
  goto exit_pwmc_free;
 }

 VAR_6->connection = VAR_5;
 FUNC_7(VAR_5, VAR_6);
 FUNC_8(VAR_3, VAR_6);

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8)
  goto exit_connection_destroy;


 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  goto exit_connection_disable;

 VAR_7 = &VAR_6->chip;

 VAR_7->dev = &VAR_3->dev;
 VAR_7->ops = &VAR_2;
 VAR_7->base = -1;
 VAR_7->npwm = VAR_6->pwm_max + 1;

 VAR_8 = FUNC_14(VAR_7);
 if (VAR_8) {
  FUNC_2(&VAR_3->dev,
   "failed to register PWM: %d\n", VAR_8);
  goto exit_connection_disable;
 }

 FUNC_10(VAR_3);
 return 0;

exit_connection_disable:
 FUNC_5(VAR_5);
exit_connection_destroy:
 FUNC_4(VAR_5);
exit_pwmc_free:
 FUNC_11(VAR_6);
 return VAR_8;
}
