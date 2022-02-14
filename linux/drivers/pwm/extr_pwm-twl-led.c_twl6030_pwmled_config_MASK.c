
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwm_device {int label; } ;
struct pwm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pwm_chip *VAR_3, struct pwm_device *VAR_4,
         int VAR_5, int VAR_6)
{
 int VAR_7 = (VAR_5 * VAR_0) / VAR_6;
 u8 VAR_8;
 int VAR_9;

 VAR_8 = VAR_7 & 0xff;

 VAR_9 = FUNC_1(VAR_2, VAR_8,
          VAR_1);
 if (VAR_9 < 0)
  FUNC_0(VAR_3->dev, "%s: Failed to configure PWM\n", VAR_4->label);

 return VAR_9;
}
