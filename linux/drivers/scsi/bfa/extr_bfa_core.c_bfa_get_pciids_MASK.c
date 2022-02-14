
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_pciid_s {int member_1; int const member_0; } ;


 int FUNC_0 (struct bfa_pciid_s*) ;






void
FUNC_1(struct bfa_pciid_s **VAR_0, int *VAR_1)
{
 static struct bfa_pciid_s VAR_2[] = {
  {128, 129},
  {128, 130},
  {128, 132},
  {128, 131},
 };

 *VAR_1 = FUNC_0(VAR_2);
 *VAR_0 = VAR_2;
}
