
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct s3fwrn5_i2c_phy {int irq_skip; int mutex; int i2c_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, struct sk_buff *VAR_2)
{
 struct s3fwrn5_i2c_phy *VAR_3 = VAR_1;
 int VAR_4;

 FUNC_1(&VAR_3->mutex);

 VAR_3->irq_skip = 0;

 VAR_4 = FUNC_0(VAR_3->i2c_dev, VAR_2->data, VAR_2->len);
 if (VAR_4 == -VAR_0) {

  FUNC_3(110000, 120000);
  VAR_4 = FUNC_0(VAR_3->i2c_dev, VAR_2->data, VAR_2->len);
 }

 FUNC_2(&VAR_3->mutex);

 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_4 != VAR_2->len)
  return -VAR_0;

 return 0;
}
