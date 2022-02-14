
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct ddb_port {TYPE_1__* i2c; } ;
struct TYPE_2__ {struct i2c_adapter adap; } ;


 int FUNC_0 (struct i2c_adapter*,int,int,int *) ;
 int FUNC_1 (struct i2c_adapter*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ddb_port *VAR_0, u8 *VAR_1)
{
 struct i2c_adapter *VAR_2 = &VAR_0->i2c->adap;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_0->i2c->adap, 0x6e, 0, 0);
 if (VAR_3)
  return 0;
 VAR_3 = FUNC_0(VAR_2, 0x6e, 0xfd, VAR_1);
 if (VAR_3)
  return 0;
 return 1;
}
