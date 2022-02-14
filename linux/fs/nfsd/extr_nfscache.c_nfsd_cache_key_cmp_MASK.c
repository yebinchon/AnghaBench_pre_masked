
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ k_xid; scalar_t__ k_csum; } ;
struct svc_cacherep {TYPE_1__ c_key; } ;
struct nfsd_net {int payload_misses; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1(const struct svc_cacherep *VAR_0,
   const struct svc_cacherep *VAR_1, struct nfsd_net *VAR_2)
{
 if (VAR_0->c_key.k_xid == VAR_1->c_key.k_xid &&
     VAR_0->c_key.k_csum != VAR_1->c_key.k_csum)
  ++VAR_2->payload_misses;

 return FUNC_0(&VAR_0->c_key, &VAR_1->c_key, sizeof(VAR_0->c_key));
}
