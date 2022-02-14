
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fwrn5_i2c_phy {int mutex; int gpio_fw_wake; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, bool VAR_2)
{
 struct s3fwrn5_i2c_phy *VAR_3 = VAR_1;

 FUNC_2(&VAR_3->mutex);
 FUNC_0(VAR_3->gpio_fw_wake, VAR_2);
 FUNC_1(VAR_0/2);
 FUNC_3(&VAR_3->mutex);
}
