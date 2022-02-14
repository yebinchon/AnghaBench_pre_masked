
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct bt819 {int sd; } ;


 int FUNC_0 (struct i2c_client*,int ) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct bt819 *VAR_0, u8 VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(&VAR_0->sd);

 return FUNC_0(VAR_2, VAR_1);
}
