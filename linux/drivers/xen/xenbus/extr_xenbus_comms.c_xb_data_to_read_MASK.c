
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenstore_domain_interface {scalar_t__ rsp_cons; scalar_t__ rsp_prod; } ;


 struct xenstore_domain_interface* VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 struct xenstore_domain_interface *VAR_1 = VAR_0;
 return (VAR_1->rsp_cons != VAR_1->rsp_prod);
}
