
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
struct hexium_data {int adr; int byte; } ;
struct hexium {int i2c_adapter; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int ,int ,int,int ,union i2c_smbus_data*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct hexium *VAR_2, struct hexium_data *VAR_3)
{
 union i2c_smbus_data VAR_4;
 int VAR_5 = 0;

 FUNC_0("\n");

 while (VAR_3[VAR_5].adr != -1) {
  VAR_4.byte = VAR_3[VAR_5].byte;
  if (0 != FUNC_1(&VAR_2->i2c_adapter, 0x6c, 0, VAR_1, VAR_3[VAR_5].adr, VAR_0, &VAR_4)) {
   FUNC_2("hexium_init_done: hexium_set_standard() failed for address 0x%02x\n",
          VAR_5);
   return -1;
  }
  VAR_5++;
 }
 return 0;
}
