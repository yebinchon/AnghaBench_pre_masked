
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fwrn5_i2c_phy {int mode; int mutex; scalar_t__ irq_skip; int ndev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct s3fwrn5_i2c_phy*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct s3fwrn5_i2c_phy *VAR_5 = VAR_4;
 int VAR_6 = 0;

 if (!VAR_5 || !VAR_5->ndev) {
  FUNC_0(1);
  return VAR_2;
 }

 FUNC_1(&VAR_5->mutex);

 if (VAR_5->irq_skip)
  goto out;

 switch (VAR_5->mode) {
 case 128:
 case 129:
  VAR_6 = FUNC_3(VAR_5);
  break;
 case 130:
  VAR_6 = -VAR_0;
  break;
 }

out:
 FUNC_2(&VAR_5->mutex);

 return VAR_1;
}
