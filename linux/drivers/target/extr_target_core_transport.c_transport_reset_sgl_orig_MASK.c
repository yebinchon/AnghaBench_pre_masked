
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {scalar_t__ t_data_nents_orig; scalar_t__ t_data_nents; int * t_data_sg_orig; int * t_data_sg; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct se_cmd *VAR_0)
{




 if (!VAR_0->t_data_sg_orig)
  return;

 FUNC_0(VAR_0->t_data_sg);
 VAR_0->t_data_sg = VAR_0->t_data_sg_orig;
 VAR_0->t_data_sg_orig = ((void*)0);
 VAR_0->t_data_nents = VAR_0->t_data_nents_orig;
 VAR_0->t_data_nents_orig = 0;
}
