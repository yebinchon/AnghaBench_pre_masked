
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_handle {int q_num; int * qs; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct hnae_handle *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->q_num;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0->qs[VAR_3], VAR_1);
}
