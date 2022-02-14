
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SIS_OH {struct SIS_OH* poh_next; struct SIS_OH* poh_prev; } ;



__attribute__((used)) static void
FUNC_0(struct SIS_OH *VAR_0, struct SIS_OH *VAR_1)
{
 struct SIS_OH *VAR_2 = VAR_0->poh_next;

 VAR_0->poh_next = VAR_1;
 VAR_2->poh_prev = VAR_1;

 VAR_1->poh_prev = VAR_0;
 VAR_1->poh_next = VAR_2;
}
