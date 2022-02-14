
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,scalar_t__*) ;
 int FUNC_1 (int,int ,struct i2c_client*,char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3)
{
 u16 VAR_4 = 0;
 int VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_4);

 FUNC_1(1, VAR_2, VAR_3, "error: 0x%x (%d)\n", VAR_4, VAR_5);
 return VAR_5 ? VAR_5 : (VAR_4 ? -VAR_0 : 0);
}
