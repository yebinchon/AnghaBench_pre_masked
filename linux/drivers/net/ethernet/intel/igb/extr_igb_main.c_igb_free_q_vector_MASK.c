
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_q_vector {int dummy; } ;
struct igb_adapter {struct igb_q_vector** q_vector; } ;


 int FUNC_0 (struct igb_q_vector*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_1, int VAR_2)
{
 struct igb_q_vector *VAR_3 = VAR_1->q_vector[VAR_2];

 VAR_1->q_vector[VAR_2] = ((void*)0);




 if (VAR_3)
  FUNC_0(VAR_3, VAR_0);
}
