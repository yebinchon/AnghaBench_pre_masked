
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov2680_dev {int lock; struct i2c_client* i2c_client; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 struct ov2680_dev* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ov2680_dev*) ;
 int FUNC_6 (struct ov2680_dev*) ;
 int FUNC_7 (struct ov2680_dev*) ;
 int FUNC_8 (struct ov2680_dev*) ;
 int FUNC_9 (struct ov2680_dev*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct ov2680_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->i2c_client = VAR_3;

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4, "failed to get regulators\n");
  return VAR_6;
 }

 FUNC_4(&VAR_5->lock);

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 < 0)
  goto lock_destroy;

 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6 < 0)
  goto lock_destroy;

 FUNC_1(VAR_4, "ov2680 init correctly\n");

 return 0;

lock_destroy:
 FUNC_0(VAR_4, "ov2680 init fail: %d\n", VAR_6);
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
