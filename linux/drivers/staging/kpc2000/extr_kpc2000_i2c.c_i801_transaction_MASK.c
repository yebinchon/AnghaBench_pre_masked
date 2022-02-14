
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_device*) ;
 int FUNC_1 (struct i2c_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct i2c_device*,int,int) ;
 int FUNC_3 (struct i2c_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_device *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;



 FUNC_5(VAR_5 | VAR_0, FUNC_0(VAR_4));


 do {
  FUNC_6(250, 500);
  VAR_6 = FUNC_4(FUNC_1(VAR_4));
 } while ((VAR_6 & VAR_2) && (VAR_8++ < VAR_1));

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_8 > VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_5(VAR_3, FUNC_1(VAR_4));
 return 0;
}
