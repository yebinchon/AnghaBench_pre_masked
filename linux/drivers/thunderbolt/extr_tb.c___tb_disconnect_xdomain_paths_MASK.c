
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct tb_xdomain {int route; TYPE_1__ dev; } ;
struct tb_switch {int dummy; } ;
struct tb_port {int dummy; } ;
struct tb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tb*,int ,int *,struct tb_port*) ;
 struct tb_port* FUNC_1 (int ,struct tb_switch*) ;
 struct tb_switch* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tb *VAR_1, struct tb_xdomain *VAR_2)
{
 struct tb_port *VAR_3;
 struct tb_switch *VAR_4;

 VAR_4 = FUNC_2(VAR_2->dev.parent);
 VAR_3 = FUNC_1(VAR_2->route, VAR_4);






 FUNC_0(VAR_1, VAR_0, ((void*)0), VAR_3);
}
