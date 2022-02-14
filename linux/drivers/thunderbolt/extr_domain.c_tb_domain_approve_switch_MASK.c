
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct tb_switch {int authorized; TYPE_1__ dev; } ;
struct tb {TYPE_2__* cm_ops; } ;
struct TYPE_4__ {int (* approve_switch ) (struct tb*,struct tb_switch*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb*,struct tb_switch*) ;
 struct tb_switch* FUNC_1 (int ) ;

int FUNC_2(struct tb *VAR_2, struct tb_switch *VAR_3)
{
 struct tb_switch *VAR_4;

 if (!VAR_2->cm_ops->approve_switch)
  return -VAR_1;


 VAR_4 = FUNC_1(VAR_3->dev.parent);
 if (!VAR_4 || !VAR_4->authorized)
  return -VAR_0;

 return VAR_2->cm_ops->approve_switch(VAR_2, VAR_3);
}
