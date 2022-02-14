
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_q_vector {int napi; } ;
struct iavf_adapter {int num_msix_vectors; int num_active_queues; struct iavf_q_vector* q_vectors; } ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_q_vector*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iavf_adapter *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;

 if (!VAR_1->q_vectors)
  return;

 VAR_3 = VAR_1->num_msix_vectors - VAR_0;
 VAR_4 = VAR_1->num_active_queues;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct iavf_q_vector *VAR_5 = &VAR_1->q_vectors[VAR_2];

  if (VAR_2 < VAR_4)
   FUNC_1(&VAR_5->napi);
 }
 FUNC_0(VAR_1->q_vectors);
 VAR_1->q_vectors = ((void*)0);
}
