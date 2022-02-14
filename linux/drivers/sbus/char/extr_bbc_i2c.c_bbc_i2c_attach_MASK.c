
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct bbc_i2c_client {int address; int bus; struct platform_device* op; struct bbc_i2c_bus* bp; } ;
struct bbc_i2c_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bbc_i2c_bus*,struct platform_device*) ;
 int FUNC_1 (struct bbc_i2c_client*) ;
 struct bbc_i2c_client* FUNC_2 (int,int ) ;
 int * FUNC_3 (int ,char*,int *) ;

struct bbc_i2c_client *FUNC_4(struct bbc_i2c_bus *VAR_1, struct platform_device *VAR_2)
{
 struct bbc_i2c_client *VAR_3;
 const u32 *VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->bp = VAR_1;
 VAR_3->op = VAR_2;

 VAR_4 = FUNC_3(VAR_2->dev.of_node, "reg", ((void*)0));
 if (!VAR_4) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 VAR_3->bus = VAR_4[0];
 VAR_3->address = VAR_4[1];

 FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
