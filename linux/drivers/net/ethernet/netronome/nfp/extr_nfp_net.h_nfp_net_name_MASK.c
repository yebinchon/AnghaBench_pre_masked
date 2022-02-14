
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* netdev; } ;
struct nfp_net {TYPE_2__ dp; } ;
struct TYPE_3__ {char const* name; } ;



__attribute__((used)) static inline const char *FUNC_0(struct nfp_net *VAR_0)
{
 return VAR_0->dp.netdev ? VAR_0->dp.netdev->name : "ctrl";
}
