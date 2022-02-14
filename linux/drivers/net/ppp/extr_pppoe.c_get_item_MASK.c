
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppox_sock {int dummy; } ;
struct pppoe_net {int hash_lock; } ;
typedef int __be16 ;


 struct pppox_sock* FUNC_0 (struct pppoe_net*,int ,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pppox_sock*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline struct pppox_sock *FUNC_5(struct pppoe_net *VAR_0, __be16 VAR_1,
     unsigned char *VAR_2, int VAR_3)
{
 struct pppox_sock *VAR_4;

 FUNC_1(&VAR_0->hash_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  FUNC_4(FUNC_3(VAR_4));
 FUNC_2(&VAR_0->hash_lock);

 return VAR_4;
}
