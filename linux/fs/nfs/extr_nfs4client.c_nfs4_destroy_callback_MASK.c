
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {int cl_net; TYPE_1__* cl_mvops; int cl_res_state; } ;
struct TYPE_2__ {int minor_version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nfs_client *VAR_1)
{
 if (FUNC_0(VAR_0, &VAR_1->cl_res_state))
  FUNC_1(VAR_1->cl_mvops->minor_version, VAR_1->cl_net);
}
