
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct megasas_instance {scalar_t__ msix_vectors; int adprecovery; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct megasas_instance*,int,int *) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_1)
{
 struct megasas_instance *VAR_2 =
  (struct megasas_instance *)VAR_1;
 u32 VAR_3, VAR_4;

 VAR_3 = VAR_2->msix_vectors > 0 ? VAR_2->msix_vectors : 1;


 if (FUNC_0(&VAR_2->adprecovery) == VAR_0)
  return;

 for (VAR_4 = 0 ; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_2, VAR_4, ((void*)0));
}
