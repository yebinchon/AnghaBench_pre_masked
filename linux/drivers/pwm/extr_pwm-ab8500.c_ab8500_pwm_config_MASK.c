
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int base; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
        int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7, VAR_8;
 u8 VAR_9;





 VAR_8 = VAR_4 & 0x00FF;




 VAR_7 = ((VAR_4 & 0x0300) >> 8);

 VAR_9 = VAR_1 + ((VAR_2->base - 1) * 2);

 VAR_6 = FUNC_0(VAR_2->dev, VAR_0,
   VAR_9, (u8)VAR_8);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_2->dev, VAR_0,
   (VAR_9 + 1), (u8)VAR_7);

 return VAR_6;
}
