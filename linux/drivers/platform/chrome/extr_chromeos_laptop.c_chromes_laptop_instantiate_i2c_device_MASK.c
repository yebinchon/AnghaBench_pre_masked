
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; } ;
struct i2c_board_info {unsigned short const addr; int member_0; } ;
struct i2c_adapter {int nr; } ;


 int FUNC_0 (char*,unsigned short const) ;
 unsigned short const VAR_0 ;
 struct i2c_client* FUNC_1 (struct i2c_adapter*,struct i2c_board_info*) ;
 struct i2c_client* FUNC_2 (struct i2c_adapter*,struct i2c_board_info*,unsigned short const*,int *) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (char*,int ,unsigned short const,...) ;

__attribute__((used)) static struct i2c_client *
FUNC_5(struct i2c_adapter *VAR_1,
          struct i2c_board_info *VAR_2,
          unsigned short VAR_3)
{
 const unsigned short VAR_4[] = { VAR_2->addr, VAR_0 };
 struct i2c_client *VAR_5;






 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4, ((void*)0));
 if (!VAR_5 && VAR_3) {
  struct i2c_board_info VAR_6 = {
   FUNC_0("dummy", VAR_2->addr),
  };
  const unsigned short VAR_7[] = {
   VAR_3, VAR_0
  };
  struct i2c_client *VAR_8;

  VAR_8 = FUNC_2(VAR_1, &VAR_6,
           VAR_7, ((void*)0));
  if (VAR_8) {
   FUNC_4("%d-%02x is probed at %02x\n",
     VAR_1->nr, VAR_2->addr, VAR_8->addr);
   FUNC_3(VAR_8);
   VAR_5 = FUNC_1(VAR_1, VAR_2);
  }
 }

 if (!VAR_5)
  FUNC_4("failed to register device %d-%02x\n",
    VAR_1->nr, VAR_2->addr);
 else
  FUNC_4("added i2c device %d-%02x\n",
    VAR_1->nr, VAR_2->addr);

 return VAR_5;
}
