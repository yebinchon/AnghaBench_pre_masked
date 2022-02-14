
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vaddr; scalar_t__ baddr; struct TYPE_5__* next; } ;
typedef TYPE_1__ m_vtob_s ;
struct TYPE_6__ {int nump; int bush; TYPE_1__** vtob; } ;
typedef TYPE_2__ m_pool_s ;
typedef scalar_t__ m_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*,int,char*) ;
 int FUNC_2 (int ,int,void*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(m_pool_s *VAR_3, m_addr_t VAR_4)
{
 m_vtob_s **VAR_5, *VAR_6;
 int VAR_7 = FUNC_0(VAR_4);

 VAR_5 = &VAR_3->vtob[VAR_7];
 while (*VAR_5 && (*VAR_5)->vaddr != VAR_4)
  VAR_5 = &(*VAR_5)->next;
 if (*VAR_5) {
  VAR_6 = *VAR_5;
  *VAR_5 = (*VAR_5)->next;
  FUNC_2(VAR_3->bush, VAR_1<<VAR_0,
      (void *)VAR_6->vaddr, (dma_addr_t)VAR_6->baddr);
  FUNC_1(&VAR_2, VAR_6, sizeof(*VAR_6), "VTOB");
  --VAR_3->nump;
 }
}
