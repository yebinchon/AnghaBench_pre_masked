
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_lru_node {int dummy; } ;
struct bpf_lru_locallist {int next_steal; int lock; } ;
struct bpf_common_lru {int local_list; } ;
struct bpf_lru {struct bpf_common_lru common_lru; } ;


 int FUNC_0 (struct bpf_lru*,struct bpf_lru_locallist*,int,struct bpf_lru_node*,int ) ;
 struct bpf_lru_node* FUNC_1 (struct bpf_lru_locallist*) ;
 struct bpf_lru_node* FUNC_2 (struct bpf_lru*,struct bpf_lru_locallist*) ;
 int FUNC_3 (struct bpf_lru*,struct bpf_lru_locallist*) ;
 int FUNC_4 (int) ;
 struct bpf_lru_locallist* FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static struct bpf_lru_node *FUNC_9(struct bpf_lru *VAR_0,
          u32 VAR_1)
{
 struct bpf_lru_locallist *VAR_2, *VAR_3;
 struct bpf_common_lru *VAR_4 = &VAR_0->common_lru;
 struct bpf_lru_node *VAR_5;
 int VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9 = FUNC_6();

 VAR_2 = FUNC_5(VAR_4->local_list, VAR_9);

 FUNC_7(&VAR_2->lock, VAR_8);

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  FUNC_3(VAR_0, VAR_2);
  VAR_5 = FUNC_1(VAR_2);
 }

 if (VAR_5)
  FUNC_0(VAR_0, VAR_2, VAR_9, VAR_5, VAR_1);

 FUNC_8(&VAR_2->lock, VAR_8);

 if (VAR_5)
  return VAR_5;
 VAR_7 = VAR_2->next_steal;
 VAR_6 = VAR_7;
 do {
  VAR_3 = FUNC_5(VAR_4->local_list, VAR_6);

  FUNC_7(&VAR_3->lock, VAR_8);

  VAR_5 = FUNC_1(VAR_3);
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_0, VAR_3);

  FUNC_8(&VAR_3->lock, VAR_8);

  VAR_6 = FUNC_4(VAR_6);
 } while (!VAR_5 && VAR_6 != VAR_7);

 VAR_2->next_steal = VAR_6;

 if (VAR_5) {
  FUNC_7(&VAR_2->lock, VAR_8);
  FUNC_0(VAR_0, VAR_2, VAR_9, VAR_5, VAR_1);
  FUNC_8(&VAR_2->lock, VAR_8);
 }

 return VAR_5;
}
