
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fwrn5_i2c_phy {int mode; int irq_skip; int mutex; int gpio_en; int gpio_fw_wake; } ;
typedef enum s3fwrn5_mode { ____Placeholder_s3fwrn5_mode } s3fwrn5_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, enum s3fwrn5_mode VAR_4)
{
 struct s3fwrn5_i2c_phy *VAR_5 = VAR_3;

 FUNC_2(&VAR_5->mutex);

 if (VAR_5->mode == VAR_4)
  goto out;

 VAR_5->mode = VAR_4;

 FUNC_0(VAR_5->gpio_en, 1);
 FUNC_0(VAR_5->gpio_fw_wake, 0);
 if (VAR_4 == VAR_2)
  FUNC_0(VAR_5->gpio_fw_wake, 1);

 if (VAR_4 != VAR_1) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_5->gpio_en, 0);
  FUNC_1(VAR_0/2);
 }

 VAR_5->irq_skip = 1;

out:
 FUNC_3(&VAR_5->mutex);
}
