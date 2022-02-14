
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_7__ {int name; } ;


 TYPE_2__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->dev.of_node, 0, &VAR_2);
 if (VAR_4 < 0) {
  FUNC_3("of_address_to_resource() failed for %pOF with %d\n",
         VAR_3->dev.of_node, VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(&VAR_1);
 if (VAR_4) {
  FUNC_3("cannot register device %s\n",
         VAR_1.name);
  goto err_register_mc;
 }

 VAR_4 = FUNC_1(&VAR_0);
 if (VAR_4) {
  FUNC_3("cannot register device %s\n",
         VAR_0.name);
  goto err_register_aiop;
 }

 return 0;

err_register_aiop:
 FUNC_0(&VAR_1);
err_register_mc:
 return VAR_4;
}
