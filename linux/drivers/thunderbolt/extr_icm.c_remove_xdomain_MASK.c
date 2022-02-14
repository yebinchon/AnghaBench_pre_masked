
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct tb_xdomain {int route; TYPE_1__ dev; } ;
struct tb_switch {int dummy; } ;
struct TYPE_4__ {int * xdomain; } ;


 TYPE_2__* FUNC_0 (int ,struct tb_switch*) ;
 struct tb_switch* FUNC_1 (int ) ;
 int FUNC_2 (struct tb_xdomain*) ;

__attribute__((used)) static void FUNC_3(struct tb_xdomain *VAR_0)
{
 struct tb_switch *VAR_1;

 VAR_1 = FUNC_1(VAR_0->dev.parent);
 FUNC_0(VAR_0->route, VAR_1)->xdomain = ((void*)0);
 FUNC_2(VAR_0);
}
