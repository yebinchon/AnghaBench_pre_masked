
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct tb_switch {int authorized; TYPE_2__ dev; } ;
struct tb {TYPE_1__* cm_ops; } ;
struct TYPE_3__ {int (* approve_switch ) (struct tb*,struct tb_switch*) ;int (* add_switch_key ) (struct tb*,struct tb_switch*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb*,struct tb_switch*) ;
 int FUNC_1 (struct tb*,struct tb_switch*) ;
 struct tb_switch* FUNC_2 (int ) ;

int FUNC_3(struct tb *VAR_2, struct tb_switch *VAR_3)
{
 struct tb_switch *VAR_4;
 int VAR_5;

 if (!VAR_2->cm_ops->approve_switch || !VAR_2->cm_ops->add_switch_key)
  return -VAR_1;


 VAR_4 = FUNC_2(VAR_3->dev.parent);
 if (!VAR_4 || !VAR_4->authorized)
  return -VAR_0;

 VAR_5 = VAR_2->cm_ops->add_switch_key(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 return VAR_2->cm_ops->approve_switch(VAR_2, VAR_3);
}
