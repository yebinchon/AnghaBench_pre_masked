
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle {int dummy; } ;
struct vmci_ctx {int dummy; } ;


 int VAR_0 ;
 struct vmci_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct vmci_ctx*) ;
 int FUNC_2 (struct vmci_handle,struct vmci_ctx*) ;

__attribute__((used)) static int FUNC_3(struct vmci_handle VAR_1)
{
 int VAR_2;
 struct vmci_ctx *VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_1, VAR_3);

 FUNC_1(VAR_3);
 return VAR_2;
}
