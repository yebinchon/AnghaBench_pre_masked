
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pismo_data {int vpp_data; int (* vpp ) (int ,int) ;} ;
struct i2c_client {int dummy; } ;


 struct pismo_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int) ;
 struct i2c_client* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(VAR_0->dev.parent);
 struct pismo_data *VAR_3 = FUNC_0(VAR_2);

 VAR_3->vpp(VAR_3->vpp_data, VAR_1);
}
