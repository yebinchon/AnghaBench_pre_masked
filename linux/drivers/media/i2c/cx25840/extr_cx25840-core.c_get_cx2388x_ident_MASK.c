
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (struct i2c_client*,char*) ;

__attribute__((used)) static u32 FUNC_3(struct i2c_client *VAR_3)
{
 u32 VAR_4;


 FUNC_1(VAR_3, 0x000, 0);
 if (FUNC_0(VAR_3, 0x204) & 0xffff) {




  VAR_4 = FUNC_0(VAR_3, 0x300);
  if (((VAR_4 & 0xffff0000) >> 16) == (VAR_4 & 0xffff)) {

   VAR_4 = VAR_0;
  } else {




   VAR_4 = VAR_1;
  }
 } else if (FUNC_0(VAR_3, 0x300) & 0x0fffffff) {

  VAR_4 = VAR_2;
 } else {
  FUNC_2(VAR_3, "Unable to detect h/w, assuming cx23887\n");
  VAR_4 = VAR_1;
 }


 FUNC_1(VAR_3, 0x000, 2);
 return VAR_4;
}
