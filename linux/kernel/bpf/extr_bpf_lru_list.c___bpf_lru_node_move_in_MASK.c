
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_node {int type; int list; scalar_t__ ref; } ;
struct bpf_lru_list {int * lists; } ;
typedef enum bpf_lru_list_type { ____Placeholder_bpf_lru_list_type } bpf_lru_list_type ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct bpf_lru_list*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct bpf_lru_list *VAR_0,
       struct bpf_lru_node *VAR_1,
       enum bpf_lru_list_type VAR_2)
{
 if (FUNC_1(!FUNC_0(VAR_1->type)) ||
     FUNC_1(FUNC_0(VAR_2)))
  return;

 FUNC_2(VAR_0, VAR_2);
 VAR_1->type = VAR_2;
 VAR_1->ref = 0;
 FUNC_3(&VAR_1->list, &VAR_0->lists[VAR_2]);
}
