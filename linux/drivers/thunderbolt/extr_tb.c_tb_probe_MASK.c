
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_nhi {int dummy; } ;
struct tb_cm {int tunnel_list; } ;
struct tb {int * cm_ops; int security_level; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tb* FUNC_1 (struct tb_nhi*,int) ;
 struct tb_cm* FUNC_2 (struct tb*) ;
 int VAR_2 ;

struct tb *FUNC_3(struct tb_nhi *VAR_3)
{
 struct tb_cm *VAR_4;
 struct tb *VAR_5;

 if (!VAR_2)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_4));
 if (!VAR_5)
  return ((void*)0);

 VAR_5->security_level = VAR_0;
 VAR_5->cm_ops = &VAR_1;

 VAR_4 = FUNC_2(VAR_5);
 FUNC_0(&VAR_4->tunnel_list);

 return VAR_5;
}
