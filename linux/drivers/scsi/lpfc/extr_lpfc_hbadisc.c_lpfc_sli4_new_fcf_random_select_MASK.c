
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static bool
FUNC_1(struct lpfc_hba *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;


 VAR_2 = 0xFFFF & FUNC_0();


 if ((VAR_1 * VAR_2) < 0xFFFF)
  return 1;
 else
  return 0;
}
