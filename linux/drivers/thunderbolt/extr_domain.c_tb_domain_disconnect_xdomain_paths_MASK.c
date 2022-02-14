
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_xdomain {int dummy; } ;
struct tb {TYPE_1__* cm_ops; } ;
struct TYPE_2__ {int (* disconnect_xdomain_paths ) (struct tb*,struct tb_xdomain*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tb*,struct tb_xdomain*) ;

int FUNC_1(struct tb *VAR_1, struct tb_xdomain *VAR_2)
{
 if (!VAR_1->cm_ops->disconnect_xdomain_paths)
  return -VAR_0;

 return VAR_1->cm_ops->disconnect_xdomain_paths(VAR_1, VAR_2);
}
