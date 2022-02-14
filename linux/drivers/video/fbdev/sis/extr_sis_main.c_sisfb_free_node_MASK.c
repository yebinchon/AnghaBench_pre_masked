
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SIS_OH {struct SIS_OH* poh_next; } ;
struct SIS_HEAP {struct SIS_OH* poh_freelist; } ;



__attribute__((used)) static void
FUNC_0(struct SIS_HEAP *VAR_0, struct SIS_OH *VAR_1)
{
 if(VAR_1 == ((void*)0))
  return;

 VAR_1->poh_next = VAR_0->poh_freelist;
 VAR_0->poh_freelist = VAR_1;
}
