
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tb_xdomain {int dummy; } ;
struct tb_switch {int dev; struct tb* tb; } ;
struct tb_port {struct tb_switch* sw; } ;
struct tb {TYPE_1__* root_switch; } ;
struct TYPE_4__ {struct tb_xdomain* xdomain; } ;
struct TYPE_3__ {int uuid; } ;


 int FUNC_0 (struct tb_port*) ;
 TYPE_2__* FUNC_1 (int ,struct tb_switch*) ;
 int FUNC_2 (struct tb_xdomain*) ;
 struct tb_xdomain* FUNC_3 (struct tb*,int *,int ,int ,int *) ;
 struct tb_xdomain* FUNC_4 (struct tb*,int ) ;
 int FUNC_5 (struct tb_xdomain*) ;

__attribute__((used)) static void FUNC_6(struct tb_port *VAR_0)
{
 struct tb_switch *VAR_1 = VAR_0->sw;
 struct tb *VAR_2 = VAR_1->tb;
 struct tb_xdomain *VAR_3;
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 VAR_3 = FUNC_4(VAR_2, VAR_4);
 if (VAR_3) {
  FUNC_5(VAR_3);
  return;
 }

 VAR_3 = FUNC_3(VAR_2, &VAR_1->dev, VAR_4, VAR_2->root_switch->uuid,
         ((void*)0));
 if (VAR_3) {
  FUNC_1(VAR_4, VAR_1)->xdomain = VAR_3;
  FUNC_2(VAR_3);
 }
}
