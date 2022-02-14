
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoe_net {int hash_lock; } ;
typedef int __be16 ;


 int FUNC_0 (struct pppoe_net*,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct pppoe_net *VAR_0, __be16 VAR_1,
     char *VAR_2, int VAR_3)
{
 FUNC_1(&VAR_0->hash_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->hash_lock);
}
