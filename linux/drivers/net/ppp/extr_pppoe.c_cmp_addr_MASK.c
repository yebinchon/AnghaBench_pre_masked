
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoe_addr {scalar_t__ sid; int remote; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int FUNC_1(struct pppoe_addr *VAR_0, __be16 VAR_1, char *VAR_2)
{
 return VAR_0->sid == VAR_1 && FUNC_0(VAR_0->remote, VAR_2);
}
