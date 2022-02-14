
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* prev; } ;
struct bpf_lru_node {int type; TYPE_1__ list; } ;
struct bpf_lru_list {TYPE_1__* next_inactive_rotation; } ;
typedef enum bpf_lru_list_type { ____Placeholder_bpf_lru_list_type } bpf_lru_list_type ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_lru_list*,int) ;
 int FUNC_3 (TYPE_1__*,struct list_head*) ;

__attribute__((used)) static void FUNC_4(struct bpf_lru_list *VAR_0,
     struct bpf_lru_node *VAR_1,
     struct list_head *VAR_2,
     enum bpf_lru_list_type VAR_3)
{
 if (FUNC_1(FUNC_0(VAR_1->type)))
  return;




 if (&VAR_1->list == VAR_0->next_inactive_rotation)
  VAR_0->next_inactive_rotation = VAR_0->next_inactive_rotation->prev;

 FUNC_2(VAR_0, VAR_1->type);

 VAR_1->type = VAR_3;
 FUNC_3(&VAR_1->list, VAR_2);
}
