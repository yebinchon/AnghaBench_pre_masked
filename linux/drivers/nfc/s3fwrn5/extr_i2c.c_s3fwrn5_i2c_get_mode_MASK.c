
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fwrn5_i2c_phy {int mode; int mutex; } ;
typedef enum s3fwrn5_mode { ____Placeholder_s3fwrn5_mode } s3fwrn5_mode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum s3fwrn5_mode FUNC_2(void *VAR_0)
{
 struct s3fwrn5_i2c_phy *VAR_1 = VAR_0;
 enum s3fwrn5_mode VAR_2;

 FUNC_0(&VAR_1->mutex);

 VAR_2 = VAR_1->mode;

 FUNC_1(&VAR_1->mutex);

 return VAR_2;
}
