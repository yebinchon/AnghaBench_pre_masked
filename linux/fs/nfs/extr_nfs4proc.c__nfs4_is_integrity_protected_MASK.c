
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_client {TYPE_2__* cl_rpcclient; } ;
typedef scalar_t__ rpc_authflavor_t ;
struct TYPE_4__ {TYPE_1__* cl_auth; } ;
struct TYPE_3__ {scalar_t__ au_flavor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct nfs_client *VAR_2)
{
 rpc_authflavor_t VAR_3 = VAR_2->cl_rpcclient->cl_auth->au_flavor;
 return (VAR_3 == VAR_0) || (VAR_3 == VAR_1);
}
