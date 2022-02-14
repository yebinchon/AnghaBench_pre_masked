
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int header; } ;
struct ctl_table_set {int (* is_seen ) (struct ctl_table_set*) ;TYPE_1__ dir; } ;
struct ctl_table_root {int dummy; } ;


 int FUNC_0 (int *,struct ctl_table_root*,struct ctl_table_set*,int *,int ) ;
 int FUNC_1 (struct ctl_table_set*,int ,int) ;
 int VAR_0 ;

void FUNC_2(struct ctl_table_set *VAR_1,
 struct ctl_table_root *VAR_2,
 int (*VAR_3)(struct ctl_table_set *))
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->is_seen = VAR_3;
 FUNC_0(&VAR_1->dir.header, VAR_2, VAR_1, ((void*)0), VAR_0);
}
