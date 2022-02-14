
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int enabled; } ;
struct tb_switch {TYPE_2__ dev; TYPE_1__ config; } ;
struct tb_port {int dummy; } ;


 int FUNC_0 (struct tb_port*,int) ;
 struct tb_port* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tb_switch*) ;
 int FUNC_3 (int ) ;
 struct tb_port* FUNC_4 (struct tb_switch*) ;

int FUNC_5(struct tb_switch *VAR_0)
{
 struct tb_port *VAR_1, *VAR_2;
 int VAR_3;

 if (!VAR_0->config.enabled || !FUNC_2(VAR_0))
  return 0;

 VAR_1 = FUNC_4(VAR_0);
 VAR_2 = FUNC_1(FUNC_2(VAR_0), FUNC_3(VAR_0->dev.parent));


 VAR_3 = FUNC_0(VAR_2, 1);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_1, 1);
 if (VAR_3)
  FUNC_0(VAR_2, 0);

 return VAR_3;
}
