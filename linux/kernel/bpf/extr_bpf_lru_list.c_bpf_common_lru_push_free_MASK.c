
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_lru_node {scalar_t__ type; int list; scalar_t__ ref; int cpu; } ;
struct bpf_lru_locallist {int lock; } ;
struct TYPE_2__ {int lru_list; int local_list; } ;
struct bpf_lru {TYPE_1__ common_lru; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct bpf_lru_node*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct bpf_lru_locallist*) ;
 struct bpf_lru_locallist* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct bpf_lru *VAR_3,
         struct bpf_lru_node *VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_0(VAR_4->type == VAR_0) ||
     FUNC_0(VAR_4->type == VAR_1))
  return;

 if (VAR_4->type == VAR_2) {
  struct bpf_lru_locallist *VAR_6;

  VAR_6 = FUNC_4(VAR_3->common_lru.local_list, VAR_4->cpu);

  FUNC_5(&VAR_6->lock, VAR_5);

  if (FUNC_7(VAR_4->type != VAR_2)) {
   FUNC_6(&VAR_6->lock, VAR_5);
   goto check_lru_list;
  }

  VAR_4->type = VAR_1;
  VAR_4->ref = 0;
  FUNC_2(&VAR_4->list, FUNC_3(VAR_6));

  FUNC_6(&VAR_6->lock, VAR_5);
  return;
 }

check_lru_list:
 FUNC_1(&VAR_3->common_lru.lru_list, VAR_4);
}
