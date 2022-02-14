
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoe_addr {scalar_t__ sid; int remote; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct pppoe_addr *VAR_0, struct pppoe_addr *VAR_1)
{
 return VAR_0->sid == VAR_1->sid && FUNC_0(VAR_0->remote, VAR_1->remote);
}
