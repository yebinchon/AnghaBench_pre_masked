
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct watchdog_device {int parent; } ;
struct i2c_client {int dummy; } ;
typedef int address ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int,int *) ;
 int FUNC_1 (int const,int *) ;
 struct i2c_client* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1, u32 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_1->parent);
 const u16 VAR_4 = (u16)VAR_2 / 2;
 u8 VAR_5[2];

 FUNC_1(VAR_4, VAR_5);

 return FUNC_0(VAR_3,
       VAR_0,
       sizeof(VAR_5), VAR_5);
}
