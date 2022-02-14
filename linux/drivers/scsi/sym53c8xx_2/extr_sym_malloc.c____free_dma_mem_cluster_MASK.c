
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* m_vtob_p ;
typedef TYPE_2__* m_pool_p ;
struct TYPE_8__ {int nump; TYPE_1__** vtob; } ;
struct TYPE_7__ {void* vaddr; struct TYPE_7__* next; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,TYPE_1__*,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(m_pool_p VAR_1, void *VAR_2)
{
 m_vtob_p *VAR_3, VAR_4;
 int VAR_5 = FUNC_0(VAR_2);

 VAR_3 = &VAR_1->vtob[VAR_5];
 while (*VAR_3 && (*VAR_3)->vaddr != VAR_2)
  VAR_3 = &(*VAR_3)->next;
 if (*VAR_3) {
  VAR_4 = *VAR_3;
  *VAR_3 = (*VAR_3)->next;
  FUNC_2(VAR_1, VAR_4);
  FUNC_1(&VAR_0, VAR_4, sizeof(*VAR_4), "VTOB");
  --VAR_1->nump;
 }
}
