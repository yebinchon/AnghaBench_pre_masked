
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int netdev; } ;
struct nfp_net {TYPE_1__ dp; scalar_t__ port; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct nfp_net *VAR_0)
{
 FUNC_0(!VAR_0->dp.netdev && VAR_0->port);
 return !!VAR_0->dp.netdev;
}
