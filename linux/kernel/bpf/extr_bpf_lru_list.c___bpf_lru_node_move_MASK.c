
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* prev; } ;
struct bpf_lru_node {int type; TYPE_1__ list; scalar_t__ ref; } ;
struct bpf_lru_list {int * lists; TYPE_1__* next_inactive_rotation; } ;
typedef enum bpf_lru_list_type { ____Placeholder_bpf_lru_list_type } bpf_lru_list_type ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_lru_list*,int) ;
 int FUNC_3 (struct bpf_lru_list*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_5(struct bpf_lru_list *VAR_0,
    struct bpf_lru_node *VAR_1,
    enum bpf_lru_list_type VAR_2)
{
 if (FUNC_1(FUNC_0(VAR_1->type)) ||
     FUNC_1(FUNC_0(VAR_2)))
  return;

 if (VAR_1->type != VAR_2) {
  FUNC_2(VAR_0, VAR_1->type);
  FUNC_3(VAR_0, VAR_2);
  VAR_1->type = VAR_2;
 }
 VAR_1->ref = 0;




 if (&VAR_1->list == VAR_0->next_inactive_rotation)
  VAR_0->next_inactive_rotation = VAR_0->next_inactive_rotation->prev;

 FUNC_4(&VAR_1->list, &VAR_0->lists[VAR_2]);
}
