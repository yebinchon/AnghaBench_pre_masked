
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int next; } ;
struct eth_hash_entry {int node; } ;


 struct eth_hash_entry* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct list_head*) ;

__attribute__((used)) static inline struct eth_hash_entry
*FUNC_3(struct list_head *VAR_0)
{
 struct eth_hash_entry *VAR_1 = ((void*)0);

 if (!FUNC_2(VAR_0)) {
  VAR_1 = FUNC_0(VAR_0->next);
  FUNC_1(&VAR_1->node);
 }
 return VAR_1;
}
