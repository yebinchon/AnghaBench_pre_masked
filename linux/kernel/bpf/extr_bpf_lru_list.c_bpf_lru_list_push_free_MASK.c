
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_node {int type; } ;
struct bpf_lru_list {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_lru_list*,struct bpf_lru_node*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct bpf_lru_list *VAR_1,
       struct bpf_lru_node *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_1(FUNC_0(VAR_2->type)))
  return;

 FUNC_3(&VAR_1->lock, VAR_3);
 FUNC_2(VAR_1, VAR_2, VAR_0);
 FUNC_4(&VAR_1->lock, VAR_3);
}
