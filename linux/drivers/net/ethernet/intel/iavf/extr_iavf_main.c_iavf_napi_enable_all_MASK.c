
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct iavf_q_vector {struct napi_struct napi; } ;
struct iavf_adapter {int num_msix_vectors; struct iavf_q_vector* q_vectors; } ;


 int VAR_0 ;
 int FUNC_0 (struct napi_struct*) ;

__attribute__((used)) static void FUNC_1(struct iavf_adapter *VAR_1)
{
 int VAR_2;
 struct iavf_q_vector *VAR_3;
 int VAR_4 = VAR_1->num_msix_vectors - VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  struct napi_struct *VAR_5;

  VAR_3 = &VAR_1->q_vectors[VAR_2];
  VAR_5 = &VAR_3->napi;
  FUNC_0(VAR_5);
 }
}
