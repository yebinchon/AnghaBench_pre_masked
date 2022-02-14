
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {scalar_t__ cl_cons_state; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(const struct nfs_client *VAR_1)
{
 return VAR_1->cl_cons_state <= VAR_0;
}
