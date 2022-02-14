
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adp8870_led {int id; int flags; struct i2c_client* client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct adp8870_led *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_5, VAR_0 + VAR_4->id - 1, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1, 1 << (VAR_4->id - 1));
 if (VAR_6)
  return VAR_6;

 if (VAR_4->id > 4)
  VAR_6 = FUNC_0(VAR_5, VAR_2,
    (VAR_4->flags & 0x3) << ((VAR_4->id - 5) * 2));
 else
  VAR_6 = FUNC_0(VAR_5, VAR_3,
    (VAR_4->flags & 0x3) << ((VAR_4->id - 1) * 2));

 return VAR_6;
}
