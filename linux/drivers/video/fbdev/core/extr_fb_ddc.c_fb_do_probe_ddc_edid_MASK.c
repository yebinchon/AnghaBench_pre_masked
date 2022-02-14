
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;

__attribute__((used)) static unsigned char *FUNC_4(struct i2c_adapter *VAR_4)
{
 unsigned char VAR_5 = 0x0;
 unsigned char *VAR_6 = FUNC_3(VAR_1, VAR_2);
 struct i2c_msg VAR_7[] = {
  {
   .addr = VAR_0,
   .flags = 0,
   .len = 1,
   .buf = &VAR_5,
  }, {
   .addr = VAR_0,
   .flags = VAR_3,
   .len = VAR_1,
   .buf = VAR_6,
  }
 };

 if (!VAR_6) {
  FUNC_0(&VAR_4->dev, "unable to allocate memory for EDID "
    "block.\n");
  return ((void*)0);
 }

 if (FUNC_1(VAR_4, VAR_7, 2) == 2)
  return VAR_6;

 FUNC_0(&VAR_4->dev, "unable to read EDID block.\n");
 FUNC_2(VAR_6);
 return ((void*)0);
}
