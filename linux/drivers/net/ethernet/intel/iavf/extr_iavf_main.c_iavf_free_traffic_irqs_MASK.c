
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_adapter {int num_msix_vectors; int * q_vectors; TYPE_1__* msix_entries; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct iavf_adapter *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 if (!VAR_1->msix_entries)
  return;

 VAR_4 = VAR_1->num_msix_vectors - VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_3 = VAR_1->msix_entries[VAR_2 + VAR_0].vector;
  FUNC_2(VAR_3, ((void*)0));
  FUNC_1(VAR_3, ((void*)0));
  FUNC_0(VAR_3, &VAR_1->q_vectors[VAR_2]);
 }
}
