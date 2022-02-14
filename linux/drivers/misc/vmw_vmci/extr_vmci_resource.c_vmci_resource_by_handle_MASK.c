
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_resource {int type; } ;
struct vmci_handle {int dummy; } ;
typedef enum vmci_resource_type { ____Placeholder_vmci_resource_type } vmci_resource_type ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct vmci_resource* FUNC_2 (struct vmci_resource*) ;
 struct vmci_resource* FUNC_3 (struct vmci_handle,int) ;

struct vmci_resource *
FUNC_4(struct vmci_handle VAR_1,
   enum vmci_resource_type VAR_2)
{
 struct vmci_resource *VAR_3, *VAR_4 = ((void*)0);

 FUNC_0();

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 &&
     (VAR_2 == VAR_3->type ||
      VAR_2 == VAR_0)) {
  VAR_4 = FUNC_2(VAR_3);
 }

 FUNC_1();

 return VAR_4;
}
