
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lp3972_platform_data {int dummy; } ;
struct lp3972 {int io_lock; int * dev; struct i2c_client* i2c; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 struct lp3972_platform_data* FUNC_2 (int *) ;
 struct lp3972* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct lp3972*) ;
 int FUNC_5 (struct i2c_client*,int ,int,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct lp3972*,struct lp3972_platform_data*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
       const struct i2c_device_id *VAR_7)
{
 struct lp3972 *VAR_8;
 struct lp3972_platform_data *VAR_9 = FUNC_2(&VAR_6->dev);
 int VAR_10;
 u16 VAR_11;

 if (!VAR_9) {
  FUNC_0(&VAR_6->dev, "No platform init data supplied\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_3(&VAR_6->dev, sizeof(struct lp3972), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->i2c = VAR_6;
 VAR_8->dev = &VAR_6->dev;

 FUNC_6(&VAR_8->io_lock);


 VAR_10 = FUNC_5(VAR_6, VAR_3, 1, &VAR_11);
 if (VAR_10 == 0 &&
  (VAR_11 & VAR_4) != VAR_5) {
  VAR_10 = -VAR_0;
  FUNC_1(&VAR_6->dev, "chip reported: val = 0x%x\n", VAR_11);
 }
 if (VAR_10 < 0) {
  FUNC_1(&VAR_6->dev, "failed to detect device. ret = %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_8, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_4(VAR_6, VAR_8);
 return 0;
}
