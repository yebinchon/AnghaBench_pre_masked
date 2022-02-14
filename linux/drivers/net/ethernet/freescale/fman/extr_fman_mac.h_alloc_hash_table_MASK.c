
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct list_head {int dummy; } ;
struct eth_hash_t {size_t size; int * lsts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct eth_hash_t*) ;
 void* FUNC_2 (size_t,int,int ) ;

__attribute__((used)) static inline struct eth_hash_t *FUNC_3(u16 VAR_1)
{
 u32 VAR_2;
 struct eth_hash_t *VAR_3;


 VAR_3 = FUNC_2(VAR_1, sizeof(struct eth_hash_t *), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->size = VAR_1;

 VAR_3->lsts = FUNC_2(VAR_3->size, sizeof(struct list_head),
       VAR_0);
 if (!VAR_3->lsts) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_3->size; VAR_2++)
  FUNC_0(&VAR_3->lsts[VAR_2]);

 return VAR_3;
}
