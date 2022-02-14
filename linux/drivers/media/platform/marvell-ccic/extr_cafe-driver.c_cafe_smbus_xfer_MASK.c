
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct cafe_camera {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (struct cafe_camera*,int ,int ,int *) ;
 int FUNC_1 (struct cafe_camera*,int ,int ,int ) ;
 int FUNC_2 (struct cafe_camera*,char*,int) ;
 struct cafe_camera* FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_4, u16 VAR_5,
  unsigned short VAR_6, char VAR_7, u8 VAR_8,
  int VAR_9, union i2c_smbus_data *VAR_10)
{
 struct cafe_camera *VAR_11 = FUNC_3(VAR_4);
 int VAR_12 = -VAR_0;





 if (VAR_9 != VAR_1) {
  FUNC_2(VAR_11, "funky xfer size %d\n", VAR_9);
  return -VAR_0;
 }

 if (VAR_7 == VAR_3)
  VAR_12 = FUNC_1(VAR_11, VAR_5, VAR_8, VAR_10->byte);
 else if (VAR_7 == VAR_2)
  VAR_12 = FUNC_0(VAR_11, VAR_5, VAR_8, &VAR_10->byte);
 return VAR_12;
}
