
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xchk_ag {int * cnt_cur; int * bno_cur; int * ino_cur; int * fino_cur; int * rmap_cur; int * refc_cur; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(
 struct xchk_ag *VAR_1)
{
 if (VAR_1->refc_cur)
  FUNC_0(VAR_1->refc_cur, VAR_0);
 if (VAR_1->rmap_cur)
  FUNC_0(VAR_1->rmap_cur, VAR_0);
 if (VAR_1->fino_cur)
  FUNC_0(VAR_1->fino_cur, VAR_0);
 if (VAR_1->ino_cur)
  FUNC_0(VAR_1->ino_cur, VAR_0);
 if (VAR_1->cnt_cur)
  FUNC_0(VAR_1->cnt_cur, VAR_0);
 if (VAR_1->bno_cur)
  FUNC_0(VAR_1->bno_cur, VAR_0);

 VAR_1->refc_cur = ((void*)0);
 VAR_1->rmap_cur = ((void*)0);
 VAR_1->fino_cur = ((void*)0);
 VAR_1->ino_cur = ((void*)0);
 VAR_1->bno_cur = ((void*)0);
 VAR_1->cnt_cur = ((void*)0);
}
