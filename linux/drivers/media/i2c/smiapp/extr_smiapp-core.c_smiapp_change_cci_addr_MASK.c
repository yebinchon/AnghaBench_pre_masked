
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct smiapp_sensor {TYPE_2__* hwcfg; TYPE_1__* src; } ;
struct i2c_client {int addr; } ;
struct TYPE_4__ {int i2c_addr_dfl; int i2c_addr_alt; } ;
struct TYPE_3__ {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smiapp_sensor*,int ,int*) ;
 int FUNC_1 (struct smiapp_sensor*,int ,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct smiapp_sensor *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_2->src->sd);
 int VAR_4;
 u32 VAR_5;

 VAR_3->addr = VAR_2->hwcfg->i2c_addr_dfl;

 VAR_4 = FUNC_1(VAR_2,
       VAR_1,
       VAR_2->hwcfg->i2c_addr_alt << 1);
 if (VAR_4)
  return VAR_4;

 VAR_3->addr = VAR_2->hwcfg->i2c_addr_alt;


 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (VAR_5 != VAR_2->hwcfg->i2c_addr_alt << 1)
  return -VAR_0;

 return 0;
}
