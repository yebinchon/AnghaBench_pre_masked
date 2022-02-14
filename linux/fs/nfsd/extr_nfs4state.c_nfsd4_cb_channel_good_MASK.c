
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_client {scalar_t__ cl_cb_state; scalar_t__ cl_minorversion; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct nfs4_client *VAR_2)
{
 if (VAR_2->cl_cb_state == VAR_1)
  return 1;





 return VAR_2->cl_minorversion && VAR_2->cl_cb_state == VAR_0;
}
