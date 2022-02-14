
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt9v022 {int chip_control; int hdl; TYPE_1__* reg; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int max_total_shutter_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct mt9v022* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7)
{
 struct mt9v022 *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;






 VAR_8->chip_control |= 0x10;
 VAR_9 = FUNC_2(VAR_7, VAR_3, VAR_8->chip_control);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_7, VAR_5, 0x300);


 if (!VAR_9)

  VAR_9 = FUNC_1(VAR_7, VAR_0, 0x3);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_7, VAR_1, 16);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_7, VAR_6, 480);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_7, VAR_8->reg->max_total_shutter_width, 480);
 if (!VAR_9)

  VAR_9 = FUNC_0(VAR_7, VAR_2, 1);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_7, VAR_4, 0);
 if (!VAR_9)
  return FUNC_4(&VAR_8->hdl);

 return VAR_9;
}
