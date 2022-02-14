
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct berlin_pwm_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct berlin_pwm_channel* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pwm_device*,struct berlin_pwm_channel*) ;

__attribute__((used)) static int FUNC_2(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct berlin_pwm_channel *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4);
}
