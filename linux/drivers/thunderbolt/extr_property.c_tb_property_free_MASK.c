
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tb_property* text; struct tb_property* data; int dir; } ;
struct tb_property {int type; TYPE_1__ value; } ;





 int FUNC_0 (struct tb_property*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tb_property *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
  FUNC_1(VAR_0->value.dir);
  break;

 case 130:
  FUNC_0(VAR_0->value.data);
  break;

 case 128:
  FUNC_0(VAR_0->value.text);
  break;

 default:
  break;
 }

 FUNC_0(VAR_0);
}
