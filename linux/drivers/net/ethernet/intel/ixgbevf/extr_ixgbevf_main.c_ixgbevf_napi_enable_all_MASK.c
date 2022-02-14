
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_q_vector {int napi; } ;
struct ixgbevf_adapter {int num_msix_vectors; struct ixgbevf_q_vector** q_vector; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ixgbevf_adapter *VAR_1)
{
 int VAR_2;
 struct ixgbevf_q_vector *VAR_3;
 int VAR_4 = VAR_1->num_msix_vectors - VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_3 = VAR_1->q_vector[VAR_2];
  FUNC_0(&VAR_3->napi);
 }
}
