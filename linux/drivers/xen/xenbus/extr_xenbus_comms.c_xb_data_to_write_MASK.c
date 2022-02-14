
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenstore_domain_interface {scalar_t__ req_prod; scalar_t__ req_cons; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct xenstore_domain_interface* VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
 struct xenstore_domain_interface *VAR_3 = VAR_2;

 return (VAR_3->req_prod - VAR_3->req_cons) != VAR_0 &&
  !FUNC_0(&VAR_1);
}
