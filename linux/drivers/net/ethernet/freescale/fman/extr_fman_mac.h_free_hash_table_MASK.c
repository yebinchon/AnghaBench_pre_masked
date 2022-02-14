
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_hash_t {int size; struct eth_hash_t* lsts; } ;
struct eth_hash_entry {int size; struct eth_hash_entry* lsts; } ;


 struct eth_hash_t* FUNC_0 (struct eth_hash_t*) ;
 int FUNC_1 (struct eth_hash_t*) ;

__attribute__((used)) static inline void FUNC_2(struct eth_hash_t *VAR_0)
{
 struct eth_hash_entry *VAR_1;
 int VAR_2 = 0;

 if (VAR_0) {
  if (VAR_0->lsts) {
   for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++) {
    VAR_1 =
    FUNC_0(&VAR_0->lsts[VAR_2]);
    while (VAR_1) {
     FUNC_1(VAR_1);
     VAR_1 =
     FUNC_0(&VAR_0->
             lsts[VAR_2]);
    }
   }

   FUNC_1(VAR_0->lsts);
  }

  FUNC_1(VAR_0);
 }
}
