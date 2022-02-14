
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_q_vector {int napi; } ;
struct fm10k_intfc {int num_q_vectors; struct fm10k_q_vector** q_vector; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fm10k_intfc *VAR_0)
{
 struct fm10k_q_vector *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_q_vectors; VAR_2++) {
  VAR_1 = VAR_0->q_vector[VAR_2];
  FUNC_0(&VAR_1->napi);
 }
}
