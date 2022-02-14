
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct i2c_client {int dummy; } ;
struct bt866 {size_t* reg; int sd; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,size_t*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct i2c_client* FUNC_3 (int *) ;
 int FUNC_4 (int,int ,struct i2c_client*,char*,size_t,size_t) ;
 int FUNC_5 (struct i2c_client*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct bt866 *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(&VAR_1->sd);
 u8 VAR_5[2];
 int VAR_6;

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;

 VAR_1->reg[VAR_2] = VAR_3;

 FUNC_4(1, VAR_0, VAR_4, "write 0x%02x = 0x%02x\n", VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < 3;) {
  if (FUNC_0(VAR_4, VAR_5, 2) == 2)
   break;
  VAR_6++;
  FUNC_5(VAR_4, "error #%d writing to 0x%02x\n",
    VAR_6, VAR_2);
  FUNC_2(FUNC_1(100));
 }
 if (VAR_6 == 3) {
  FUNC_5(VAR_4, "giving up\n");
  return -1;
 }

 return 0;
}
