
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {TYPE_1__* desc; } ;
struct max8998_data {TYPE_2__* iodev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; struct i2c_client* i2c; } ;
struct TYPE_3__ {unsigned int uV_step; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct i2c_client*,int ,int*) ;
 struct max8998_data* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_6,
          unsigned int VAR_7,
          unsigned int VAR_8)
{
 struct max8998_data *VAR_9 = FUNC_2(VAR_6);
 struct i2c_client *VAR_10 = VAR_9->iodev->i2c;
 int VAR_11 = FUNC_3(VAR_6);
 u8 VAR_12 = 0;
 int VAR_13, VAR_14;

 if (VAR_11 < VAR_1 || VAR_11 > VAR_2)
  return -VAR_0;


 VAR_14 = FUNC_1(VAR_10, VAR_4, &VAR_12);
 if (VAR_14)
  return VAR_14;



 if (VAR_9->iodev->type == VAR_5 && !(VAR_12 & VAR_3))
  return 0;

 VAR_13 = (VAR_8 - VAR_7) * VAR_6->desc->uV_step / 1000;
 if (VAR_13 > 0)
  return FUNC_0(VAR_13, (VAR_12 & 0x0f) + 1);

 return 0;
}
