
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htab_elem {int lru_node; } ;
struct bpf_map {int key_size; } ;


 struct htab_elem* FUNC_0 (struct bpf_map*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct htab_elem*,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(struct bpf_map *VAR_0, void *VAR_1)
{
 struct htab_elem *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2) {
  FUNC_1(&VAR_2->lru_node);
  return FUNC_3(FUNC_2(VAR_2, VAR_0->key_size));
 }

 return ((void*)0);
}
