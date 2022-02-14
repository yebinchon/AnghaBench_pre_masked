
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct tb_switch {TYPE_1__ dev; } ;
struct TYPE_4__ {int * remote; } ;


 TYPE_2__* FUNC_0 (int ,struct tb_switch*) ;
 int FUNC_1 (struct tb_switch*) ;
 int FUNC_2 (struct tb_switch*) ;
 struct tb_switch* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tb_switch *VAR_0)
{
 struct tb_switch *VAR_1;

 VAR_1 = FUNC_3(VAR_0->dev.parent);
 FUNC_0(FUNC_1(VAR_0), VAR_1)->remote = ((void*)0);
 FUNC_2(VAR_0);
}
