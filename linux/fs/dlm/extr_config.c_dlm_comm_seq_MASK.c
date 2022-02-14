
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_comm {int seq; } ;


 int VAR_0 ;
 struct dlm_comm* FUNC_0 (int) ;
 int FUNC_1 (struct dlm_comm*) ;

int FUNC_2(int VAR_1, uint32_t *VAR_2)
{
 struct dlm_comm *VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;
 *VAR_2 = VAR_3->seq;
 FUNC_1(VAR_3);
 return 0;
}
