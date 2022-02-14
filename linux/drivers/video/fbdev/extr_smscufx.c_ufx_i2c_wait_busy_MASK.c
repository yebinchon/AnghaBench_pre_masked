
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufx_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ufx_data*,int,int*) ;
 int FUNC_4 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_5(struct ufx_data *VAR_2)
{
 u32 VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 15; VAR_4++) {
  VAR_5 = FUNC_3(VAR_2, 0x1100, &VAR_3);
  FUNC_0(VAR_5, "0x1100 read failed");


  if ((VAR_3 & 0x80000000) == 0) {
   if (VAR_3 & 0x20000000) {
    FUNC_2("I2C read failed, 0x1100=0x%08x", VAR_3);
    return -VAR_0;
   }

   return 0;
  }


  if (VAR_4 >= 10)
   FUNC_1(10);
 }

 FUNC_2("I2C access timed out, resetting I2C hardware");
 VAR_5 = FUNC_4(VAR_2, 0x1100, 0x40000000);
 FUNC_0(VAR_5, "0x1100 write failed");

 return -VAR_1;
}
