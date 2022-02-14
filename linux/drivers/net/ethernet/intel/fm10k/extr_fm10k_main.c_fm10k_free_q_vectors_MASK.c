
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {int num_q_vectors; } ;


 int FUNC_0 (struct fm10k_intfc*,int) ;
 int FUNC_1 (struct fm10k_intfc*) ;

__attribute__((used)) static void FUNC_2(struct fm10k_intfc *VAR_0)
{
 int VAR_1 = VAR_0->num_q_vectors;

 FUNC_1(VAR_0);

 while (VAR_1--)
  FUNC_0(VAR_0, VAR_1);
}
