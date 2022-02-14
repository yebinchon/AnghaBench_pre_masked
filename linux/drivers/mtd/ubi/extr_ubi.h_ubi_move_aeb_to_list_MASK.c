
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_ainf_volume {int root; } ;
struct TYPE_2__ {int list; int rb; } ;
struct ubi_ainf_peb {TYPE_1__ u; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct ubi_ainf_volume *VAR_0,
      struct ubi_ainf_peb *VAR_1,
      struct list_head *VAR_2)
{
  FUNC_1(&VAR_1->u.rb, &VAR_0->root);
  FUNC_0(&VAR_1->u.list, VAR_2);
}
